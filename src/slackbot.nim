# Hello Nim!

import slackapi
import asyncdispatch, asyncnet
import strutils
import db_sqlite
import os

let db = open("sodabot.db", "sodabot", "sodabot", "sodabot")

try:
    db.exec(sql("""
CREATE TABLE sodabot (
id INTEGER PRIMARY KEY,
product_name VARCHAR(254) not null,
quantity INTEGER not null
    )"""))
except DbError:
    #Table exists
    echo "Table exists"


proc handler() {.noconv.} =
    echo "Close handler"
    db.close()
    quit 0

setControlCHook(handler)

proc rowToLine(row: Row): string =
    #[
    Formats a row to be a little more user friendly
    ]#
    result = "$#: $#\L" % [row[0], row[1]]

proc processDirectMessage(parsedData: JsonNode): SlackMessage {.async.} =
    let command = parsedData["text"].getStr.split(">")[1].strip()
    echo command
    if command.startsWith("/"):
        #Builtin command
        case command.split("/")[1].split(" ")[0]:
        of "help":
            result = newSlackMessage("message", parsedData["channel"].getStr, 
            """
Sodabot Help:
=============
/add <product> <quantity>   - Adds a product purchase to the DB
/list <product>             - Lists the purchases for a product
/listall                    - Lists all purchases to date
            """)
        of "add":
            echo "Adding"
            db.exec(sql"BEGIN")
            db.exec(sql"INSERT INTO sodabot (product_name, quantity) VALUES (?, ?)",
                command.split("/")[1].split(" ")[1..2])
            db.exec(sql"COMMIT")
        of "list":
            echo "Listing"
            var message = ""
            for row in db.rows(sql"SELECT product_name, quantity FROM sodabot WHERE product_name=?", command.split("/")[1].split(" ")[1]):
                message.add(rowToLine(row))
            return newSlackMessage("message", parsedData["channel"].getStr, message)
        of "listall":
            echo "Listing all"
    echo "Returnign no result!"

proc serve() {.async.} =
    while true:
        let (opcode, data) = await rtmConnection.sock.readData()
        echo data
        if data.len > 0 and isTextOpcode(opcode):
            let parsedData = parseJson(data)
            if parsedData.hasKey("reply_to"):
                #Reply to a directed message here
                continue
            elif parsedData["type"].getStr == $SlackRTMType.Message:
                #Parse normal messages here
                if parsedData["user"].getStr != slackUser.id:
                    if parsedData["text"].getStr.startsWith("<@$#>" % slackUser.id):
                        #Directed message
                        let message = processDirectMessage(parsedData)
                        discard sendMessage(rtmConnection, message)
                    else:
                        let message = newSlackMessage("message", parsedData["channel"].getStr, parsedData["text"].getStr)
                        discard sendMessage(rtmConnection, message)


proc ping() {.async.} =
    while true:
        await sleepAsync(6000)
        echo "ping"
        await rtmConnection.sock.sendPing(masked = true)

asyncCheck serve()
asyncCheck ping()
runForever()

