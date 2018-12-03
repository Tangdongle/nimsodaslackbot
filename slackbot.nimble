# Package

version       = "0.1.0"
author        = "Ryanc_signiq"
description   = "A general purpose bot"
license       = "MIT"
srcDir        = "src"
bin           = @["slackbot"]

# Dependencies

requires "nim >= 0.19.0"
requires "slackapi"

task rebuildSQL, "Rebuild the SQL table":
    exec("nim c -d:ssl --out:bin/slackbot src/slackbot")
    exec("bin/slackbot --rebuild-sql")

task run, "Run the bot":
    exec("mkdir -p bin")
    exec("nim c -r -d:ssl --out:bin/slackbot src/slackbot")

