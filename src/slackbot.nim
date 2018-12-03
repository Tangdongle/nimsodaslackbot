# Hello Nim!

import slackapi
import asyncdispatch, asyncnet
import strutils
import db_sqlite
import parseopt, os

let db = open("sodabot.db", "sodabot", "sodabot", "sodabot")

const AT_USER_SYMBOL = "^"
const SODA_HELP = """
Sodabot Help:
=============
/add <product> <quantity>   - Adds a product purchase to the DB
/list <product>       - Lists the purchases for a product
/listall          - Lists all purchases to date
/listuser <user>      - Lists all purchases by user
/listallusers <user>      - Lists all purchases by user
      """

proc handler() {.noconv.} =
  echo "Close handler"
  db.close()
  quit 0

setControlCHook(handler)

proc rowListToLine(row: Row): string =
  #[
  Formats a row to be a little more user friendly
  ]#
  result = "$#:\t $# by $#\L" % [row[0], row[1], slackUserTable[row[2]].name]

proc rowSumsToLine(row: Row): string =
  result = "$#:\t $#\L" % [row[0], row[1]]

proc rowUserSumsToLine(row: Row): string = 
  result = "$#:\t $#: $#\L" % [slackUserTable[row[0]].name, row[1], row[2]]

proc processDirectMessage(message: SlackMessage): Future[void] {.async.} =
  #[
  Processed messages directly to the bot
  TODO: Add a message buffer
  ]#
  echo "In Process Direct Message"
  let command = message.text.split(">")[1].strip()
  if command.startsWith("/"):
    #Wait in between commands so we don't flood
    if not slackUserTable.hasKey(message.user):
      echo "No user found for <$#>" % message.user
      return
    await sleepAsync(1000)
    #Builtin command
    case command.split("/")[1].split(" ")[0]:
    of "help":
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, 
      SODA_HELP, slackUser.id))
    of "add":
      echo "Adding"
      db.exec(sql"BEGIN")
      db.exec(sql"INSERT INTO sodabot (product_name, quantity, user) VALUES (?, ?, ?)",
        [command.split("/")[1].split(" ")[1], command.split("/")[1].split(" ")[2], message.user])
      db.exec(sql"COMMIT")
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, "Purchase recorded!", slackUser.id))
    of "list":
      let arg = command.split("/")[1].split(" ")[1]
      echo "Listing"
      var outMessage = """
Listing records for $#
Product   Quantity   User
===================
""" % arg
      for row in db.rows(sql"SELECT product_name, quantity, user FROM sodabot WHERE product_name=?", arg):
        outMessage.add(rowListToLine(row))
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, outMessage, slackUser.id))
    of "listall":
      var outMessage = """
Listing all records
===================
"""
      for row in db.rows(sql"SELECT product_name, quantity, user FROM sodabot"):
        outMessage.add(rowListToLine(row))
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, outMessage, slackUser.id))
    of "listuser":
      #ie /listuser ryanc
      var arg = ""
      if command.contains "@":
        arg = command.split("/")[1].split(" ")[1].strip(chars = {'<', '>', '@'})
      else:
        arg = slackUserTable.findUserByName(command.split("/")[1].split(" ")[1]).id
      var outMessage = """
Listing user $#
Product   Total
===================
""" % slackUserTable[arg].name
      for row in db.rows(sql"""SELECT product_name, SUM(quantity) 
        FROM sodabot 
        WHERE user=?
        GROUP BY product_name""", arg):
        outMessage.add(rowSumsToLine(row))
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, outMessage, slackUser.id))
    of "listallusers":
      var outMessage = """
Listing all users 
User   Product   Total
===================
"""
      for row in db.rows(sql"""SELECT user, product_name, SUM(quantity) 
        FROM sodabot 
        GROUP BY user, product_name"""):
        outMessage.add(rowUserSumsToLine(row))
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, outMessage, slackUser.id))
    of "tellthisguy":
      let targetString = command.split("tellthisguy")[^1].strip().split(AT_USER_SYMBOL)[^1]
      let user = slackUserTable.findUserByName(targetString.splitWhiteSpace()[0])
      let outMessage = "<@$#> $#" % [user.id, targetString.splitWhiteSpace()[1]]
      discard sendMessage(rtmConnection, newSlackMessage("message", message.channel, outMessage, slackUser.id))

  echo "Returning no result!"

proc serve() {.async.} =
  let slackBotUser = slackUserTable.findUserByName("slackbot")
  while true:
    let message = await rtmConnection.readSlackMessage()
    if message.text.len > 0:
      #Parse normal messages here
      if message.user.len > 0 and message.user != slackUser.id and message.user != "USLACKBOT":
        if message.text.startsWith("<@$#>" % slackUser.id):
          #Directed message
          asyncCheck processDirectMessage(message)
        else:
          let outMessage = newSlackMessage("message", message.channel, SODA_HELP, slackUser.id)
          discard sendMessage(rtmConnection, message)


when isMainModule:
  let 
    filename = getAppFilename()
    args = commandLineParams()
  
  try:
    db.exec(sql("""
  CREATE TABLE sodabot (
  id INTEGER PRIMARY KEY,
  product_name VARCHAR(254) not null,
  quantity INTEGER not null
  user VARCHAR(254) not null
    )"""))
  except DbError:
    #Table exists
    echo "Table exists"

  var parser = initOptParser(args)
  for kind, key, val in parser.getopt():
    case kind
    of cmdArgument:
      echo "Filename: " & key
    of cmdLongOption, cmdShortOption:
      case key
      of "rebuild-sql":
        echo "Rebuilding SQL table"
        try:
          db.exec(sql"DROP TABLE sodabot")
        except DBError:
          echo "Table does not exist, building"
        db.exec(sql"""
          CREATE TABLE sodabot (
          id INTEGER PRIMARY KEY,
          product_name VARCHAR(254) not null,
          quantity INTEGER not null,
          user VARCHAR(254) not null
          )""")
    of cmdEnd:
      assert(false)


  asyncCheck serve()
  asyncCheck ping()
  runForever()

