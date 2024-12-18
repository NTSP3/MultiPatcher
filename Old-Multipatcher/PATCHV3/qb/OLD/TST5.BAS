DIM QMARKVL AS INTEGER
DIM CLEARVL AS INTEGER
DIM NFILEVL AS INTEGER
DIM ANIOPVL AS INTEGER
DIM WRONGVL AS INTEGER
DIM OPTIONS AS INTEGER
DIM DOTVALS AS INTEGER
DIM CLRSCRS AS INTEGER
DIM SKIPCHK AS INTEGER
DIM DENYANI AS INTEGER
DIM DEVMICE AS INTEGER
DIM DEVSCRS AS INTEGER
DIM USROPTS AS STRING
DIM NEXTCHR AS STRING

GetCommands:

  USROPTS = COMMAND$
  USROPTS = UCASE$(USROPTS)
  QMARKVL = INSTR(USROPTS, "/??")
  CLEARVL = INSTR(USROPTS, "/CL")
  NFILEVL = INSTR(USROPTS, "/NC")
  ANIOPVL = INSTR(USROPTS, "/NI")
  GOTO CheckCommands

CheckCommands:

  IF QMARKVL > 0 THEN

    NEXTCHR = MID$(USROPTS, QMARKVL + 3, 1)
    IF NEXTCHR = " " OR NEXTCHR = "" THEN
   
      PRINT "                                                                              "
      PRINT "MultiPatcher Options: SETUP [/CL] [/NC] [/NI]                                 "
      PRINT "                                                                              "
      PRINT "   /CL         Load setup in monochrome mode                                  "
      PRINT "   /NC         Skip file check                                                "
      PRINT "   /NI         Do not load animations                                         "
      PRINT "   /??         Show program syntax                                            "
      PRINT "   /?          Run Option Selector (runs help if launched with other options) "
      PRINT "                                                                              "
      PRINT "Note: Using /? and /?? with other options will only launch help.              "
      END

    ELSE

      GOTO WrongCommand

    END IF

  END IF
  IF CLEARVL > 0 THEN
   
    NEXTCHR = MID$(USROPTS, CLEARVL + 3, 1)
    IF NEXTCHR = " " OR NEXTCHR = "" THEN
   
      OPTIONS = 1
      CLRSCRS = 1
     
    ELSE

      GOTO WrongCommand

    END IF
 
  END IF
  IF NFILEVL > 0 THEN
   
    NEXTCHR = MID$(USROPTS, NFILEVL + 3, 1)
    IF NEXTCHR = " " OR NEXTCHR = "" THEN
   
      OPTIONS = 1
      SKIPCHK = 1

    ELSE

      GOTO WrongCommand

    END IF

  END IF
  IF ANIOPVL > 0 THEN
  
    NEXTCHR = MID$(USROPTS, ANIOPVL + 3, 1)
    IF NEXTCHR = " " OR NEXTCHR = "" THEN
   
      OPTIONS = 1
      DENYANI = 1

    ELSE

      GOTO WrongCommand

    END IF

  END IF
  IF NOT (OPTIONS = 0) THEN GOTO LaunchingWithOptions
  IF NOT (LEN(USROPTS) = 0) THEN GOTO WrongCommand
  CLS
  PRINT "                                                                            "
  PRINT "No parameters found. Launching MultiPatcher with default options.           "
  PRINT "To launch with parameters, use /? for selector and /?? for help.            "
  OPTIONS = 0
  GOTO StartupAnimation

FileNotFound:

  PRINT "                                                                            "
  PRINT "Required main file was not found. Unable to proceed.                        "
  PRINT "Please check the program files and permissions.                             "
  END

WrongCommand:

  PRINT "                                                                            "
  PRINT "Invalid or out of range command supplied. Use /?? for help.                 "
  END

LaunchingWithOptions:

  CLS
  PRINT "                                                                            "
  PRINT "Parameters were found. Launching MultiPatcher with options:    ions.        "
  PRINT "To launch with parameters, use /? for selector and /?? for help.            "


StartupAnimation:

  PRINT "                                                                            "
  PRINT "Attemping to launch main #1                                                 "
  DOTVALS = 28
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 29
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 30
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 31
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 32
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 33
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 34
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 35
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 36
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 37
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 38
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 39
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 40
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 41
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 42
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 43
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 44
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 45
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 46
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 47
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  DOTVALS = 48
  FOR i = 1 TO 2000

    LOCATE 5, DOTVALS
    PRINT "."

  NEXT i
  GOTO CheckOptions

CheckOptions:

  IF (OPTIONS = 0) THEN GOTO RunWithNoOptions

RunWithNoOptions:
 
  ON ERROR GOTO FileNotFound
  OPEN ".\UTILFS\XTRUN.EXE" FOR INPUT AS #1
  CLOSE #1
  SHELL ".\UTILFS\XTRUN.EXE" ' /set-options-run-without-arguments-passed-controlv2"

