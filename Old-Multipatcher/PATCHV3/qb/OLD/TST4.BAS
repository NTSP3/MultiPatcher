DIM USROPTS AS STRING
DIM DOTVAL AS INTEGER

CheckCommands:

  USROPTS = COMMAND$
  USROPTS = UCASE$(USROPTS)
  DO

    IF USROPTS = "/??" THEN

      PRINT "                                                                              "
      PRINT "MultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]                     "
      PRINT "                                                                              "
      PRINT "   /CL         Load setup in monochrome mode                                  "
      PRINT "   /NC         Skip file check                                                "
      PRINT "   /NH         Do not hide cursor (DEV only)                                  "
      PRINT "   /TI         Start in frame-by-frame mode (DEV only)                        "
      PRINT "   /NI         Do not load animations                                         "
      PRINT "   /??         Show program syntax                                            "
      PRINT "   /?          Run Option Selector (runs help if launched with other options) "
      PRINT "                                                                              "
      PRINT "Note: Using /? and /?? with other options will only launch help.              "
      END

    END IF
    COUNTVAL = COUNTVAL + 1

  LOOP UNTIL COUNTVAL = 100
 
  IF NOT (LEN(USROPTS) = 0) THEN

    PRINT "                                                                            "
    PRINT "Invalid or out of range command supplied. Use /? for help.                  "

  END IF

  CLS
  PRINT "                                                                            "
  PRINT "No parameters found. Launching MultiPatcher with default options.        "
  PRINT "To launch with parameters, use /? for selector and /?? for help.            "
  PRINT "                                                                            "
  PRINT "Attemping to launch main #1                                                 "
  DOTVAL = 28
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 29
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 30
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 31
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 32
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 33
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 34
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 35
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 36
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 37
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  DOTVAL = 38
  FOR i = 1 TO 2500

    LOCATE 5, DOTVAL
    PRINT "."

  NEXT i
  ON ERROR GOTO FileNotFound
  OPEN ".\UTILFS\XTRUN.EXE" FOR INPUT AS #1
  CLOSE #1
  SHELL ".\UTILFS\XTRUN.EXE" ' /set-options-run-without-arguments-passed-controlv2"
 
  PRINT USROPTS

  END

FileNotFound:

  PRINT "                                                                              "
  PRINT "Required main file was not found. Unable to proceed.                          "
  PRINT "Please check the program files and permissions.                               "
  END

