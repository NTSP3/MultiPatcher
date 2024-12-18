Help: 'Groups
  ' = Comment
  '// = Use of command

SetVariable1:
  OldLetterPath$ = "C:\WINDOWS"

ScreenWiper:
  CLS '//Clears Screen
  COLOR 7, 1 '//Changes screen color
  CLS
  GOTO WelcomeWindow '//Skip to a part of the Setup

WelcomeWindow:
  PRINT "" '//Outputs a string of text or skips a line
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   Welcome to the MultiPatcher Setup."
  COLOR 7, 1
  PRINT ""
  PRINT "    The Setup program for the MultiPatcher program version 1.0 patches some"
  PRINT "    files to successfully boot one OS alongside another with ease."
  PRINT ""
  COLOR 3, 1
  PRINT "    Info: Existing versions of certain Windows files will be backed up with"
  PRINT "          the extension *.BAK. If a file with the *.BAK extension exist,"
  PRINT "          the file with the *.BAK extension will be deleted."
  PRINT ""
  COLOR 4, 1
  PRINT "    CAUTION: IF THIS PROGRAM DELETES YOUR FILES OR MAKES YOUR WINDOWS"
  PRINT "             INSTALLATION UNBOOTABLE, I WON'T BE RESPONSIBLE."
  PRINT ""
  COLOR 2, 1
  PRINT "    Recommendation: Make a backup."
  PRINT ""
  COLOR 7, 1
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "      _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey

EnterLoopKey:
  A$ = "" 'Variable
  WHILE A$ = "" '//Runs an indefinite loop until A$ is not blank
    A$ = INKEY$ 'Captures the key pressed by the user and saves it to A$
  WEND '//Stops the WHILE loop
  IF (A$ = "Q") THEN GOTO UserQuitKey '//Checks something, this time if the A$ value is Q and goes to the quit portion
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(13)) THEN GOTO GetPath 'CHR$(13) is the code for ENTER key
  IF NOT (A$ = "") THEN GOTO EnterLoopKey '//If the value in A$ is NOT blank, restart the loop

UserQuitKey:
  COLOR 7, 0
  CLS
  PRINT "Setup is exiting..."
  CLS
END '//Stops the whole program

GetPath:
  CLS
  COLOR 7, 1
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  PRINT "   Setup installs MultiPatcher onto your Hard Disk. Choose the"
  PRINT "   location where you want these files to be installed:"
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT "   To change the suggested location, press the BACKSPACE key"
  PRINT "   to delete characters and then type the directory you want."
  PRINT ""
  PRINT "   After typing in your Windows path, you will get to choose what software"
  PRINT "   to be run from this program."
  PRINT ""
  PRINT "   When you are ready to continue, press ENTER."
  COLOR 0, 7
  LOCATE 25, 1: PRINT "  ENTER=Continue                                                                ": COLOR 7, 1: PRINT "                                                                                "
  LOCATE 8, 7: COLOR 0, 7: PRINT "                                              "
  GOTO InputLoopMain

InputLoopMain:
  COLOR 0, 7
  GOTO InputCapture

InputCapture:
  COLOR 0, 7
  DO '//Loops a set of instructions until a condition is met
    LOCATE 8, 7: PRINT OldLetterPath$ + CHR$(220)
    TempKey$ = INKEY$
    IF (TempKey$ = CHR$(13)) THEN
      LetterPath$ = OldLetterPath$
      IF (LetterPath$ = "") THEN
        GOTO WroteBlankPath
      ELSE
        IF (LEN(LetterPath$) < 3) THEN 'LEN checks the length of a string of text
          GOTO WroteBlankPath
        ELSE
          IF (MID$(LetterPath$, 2, 2) <> ":\") THEN 'MID$ gives part of a string
            GOTO WroteBlankPath
          ELSE
            IF (ASC(UCASE$(LEFT$(LetterPath$, 1))) < 65 OR ASC(UCASE$(LEFT$(LetterPath$, 1))) > 90) THEN 'ASC returns the ASCII value for a character, UCASE$ converts characters to Uppercase, LEFT$ returns the leftmost value of a string of text
              GOTO WroteBlankPath
            END IF
          END IF
        END IF
      GOTO PathCheck
      END IF
    ELSE
      IF (TempKey$ = CHR$(8)) THEN
        IF (LEN(OldLetterPath$) > 0) THEN
          OldLetterPath$ = LEFT$(OldLetterPath$, LEN(OldLetterPath$) - 1)
          CLS
          GOTO GetPath
        END IF
      ELSE
        OldLetterPath$ = OldLetterPath$ + TempKey$
      END IF
    END IF
  LOOP UNTIL (LEN(OldLetterPath$) = 45)
  IF (LEN(OldLetterPath$) = 45) THEN
    GOTO LimitCLS
  END IF

LimitCLS:
  GOTO Limit

Limit:
  COLOR 0, 7
  LOCATE 8, 7: PRINT OldLetterPath$ + CHR$(220)
  TempKey$ = INKEY$
  IF (TempKey$ = CHR$(13)) THEN
    LetterPath$ = OldLetterPath$
    GOTO PathCheck
  ELSE
    IF (TempKey$ = CHR$(8)) THEN
      OldLetterPath$ = LEFT$(OldLetterPath$, LEN(OldLetterPath$) - 1)
      CLS
      GOTO GetPath
    ELSE
      GOTO Limit
    END IF
  END IF

WroteBlankPath:
  CLS
  COLOR 7, 1
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  PRINT "   The directory you have entered is invalid. Make sure the name"
  PRINT "   is a valid filename."
  PRINT ""
  PRINT "   Press ENTER to continue. Setup will prompt you to enter"
  PRINT "   a different directory."
  PRINT ""
  PRINT "   Press Q to exit Setup."
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey2

EnterLoopKey2:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(13)) THEN GOTO GetPath
  IF NOT (A$ = "") THEN GOTO EnterLoopKey2

PathCheck:
  CLS
  COLOR 7, 1
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  PRINT "   Please check the path that you entered before continuing."
  PRINT "   The path that you entered is: "; LetterPath$
  PRINT ""
  COLOR 3, 1
  PRINT "   NOTE: You MUST type the path in this format: %driveletter%:\%path%"
  PRINT "         Also, your path must NOT end with a '\'."
  COLOR 7, 1
  PRINT ""
  PRINT ""
  PRINT "   If you want setup to install to this directory, press ENTER."
  PRINT "   If you want to go back and change the directory, press ESC."
  PRINT ""
  PRINT "   To quit setup, press Q."
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  COLOR 4, 1: LOCATE 10, 14: PRINT "MUST"
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  ESC=Previous  Q=Exit                                          ": COLOR 7, 1: PRINT "                                                                                "
  GOTO 9

9
A$ = ""
WHILE A$ = ""
A$ = INKEY$
WEND
IF (A$ = "Q") THEN GOTO UserQuitKey
IF (A$ = "q") THEN GOTO UserQuitKey
IF (A$ = CHR$(13)) THEN GOTO 10
IF (A$ = CHR$(27)) THEN GOTO GetPath
IF NOT (A$ = "") THEN GOTO 9
GOTO 10


MultiInstall:
  CLS
  PRINT "" '//Outputs a string of text or skips a line
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 5: COLOR 0, 7: PRINT "Patch Windows 3.1 to run in Real Mode"
  COLOR 7, 1
  PRINT "    files to successfully boot one OS alongside another with ease."
  PRINT ""
  COLOR 3, 1
  PRINT "    Info: Existing versions of certain Windows files will be backed up with"
  PRINT "          the extension *.BAK. If a file with the *.BAK extension exist,"
  PRINT "          the file with the *.BAK extension will be deleted."
  PRINT ""
  COLOR 4, 1
  PRINT "    CAUTION: IF THIS PROGRAM DELETES YOUR FILES OR MAKES YOUR WINDOWS"
  PRINT "             INSTALLATION UNBOOTABLE, I WON'T BE RESPONSIBLE."
  PRINT ""
  COLOR 2, 1
  PRINT "    Recommendation: Make a backup."
  PRINT ""
  COLOR 7, 1
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "      _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey3

EnterLoopKey3:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(13)) THEN GOTO GetPath
  IF NOT (A$ = "") THEN GOTO EnterLoopKey3

10
CLS
COLOR 7, 1
CLS
PRINT ""
PRINT ""
PRINT ""
PRINT " MultiPatcher Setup by Wintelic"
PRINT "様様様様様様様様様様様様様様様様"
PRINT ""
LOCATE 10, 1: PRINT "             Please wait while Setup copies files to your hard disk.                 "
PRINT ""
REM RUN "RMRUN>NUL -O RM.ZIP %TEMP%\."
REM RUN "WCOPY.BAT"
PRINT ""
PRINT ""
PRINT ""
PRINT ""
PRINT ""
PRINT ""
PRINT ""
PRINT ""
PRINT ""
PRINT ""
LOCATE 25, 1: COLOR 0, 7: PRINT "                                                                                ": COLOR 7, 1: PRINT "                                                                                "
END

