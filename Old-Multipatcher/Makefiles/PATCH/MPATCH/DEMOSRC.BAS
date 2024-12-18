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
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "          _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey

EnterLoopKey:
  A$ = "" 'Variable
  WHILE A$ = "" '//Runs an indefinite loop until A$ is not blank
    A$ = INKEY$ 'Captures the key pressed by the user and saves it to A$
  WEND '//Stops the WHILE loop
  IF (A$ = "Q") THEN GOTO UserQuitKey '//Checks something, this time if the A$ value is Q and goes to the quit portion
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(13)) THEN GOTO MultiInstall 'CHR$(13) is the code for ENTER key
  IF NOT (A$ = "") THEN GOTO EnterLoopKey '//If the value in A$ is NOT blank, restart the loop

UserQuitKey:
  COLOR 7, 0
  CLS
  PRINT "Setup is exiting..."
  CLS
END '//Stops the whole program

MultiInstall:
MI1:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 1, 7: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey2

EnterLoopKey2:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI2
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 1
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey2

MI2:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 1, 7: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey3

EnterLoopKey3:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI1
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI3
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 2
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey3

MI3:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 1, 7: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey4

EnterLoopKey4:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI2
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI4
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 3
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey4

MI4:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 1, 7: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey5

EnterLoopKey5:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI3
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI5
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 4
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey5

MI5:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 1, 7: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey6

EnterLoopKey6:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI4
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI6
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 5
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey6

MI6:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 1, 7: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey7

EnterLoopKey7:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI5
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI7
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 6
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey7

MI7:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 1, 7: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey8

EnterLoopKey8:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI6
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI8
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 7
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey8

MI8:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "様様様様様様様様様様様様様様様様"
  PRINT ""
  COLOR 15, 1
  PRINT "   What do you want the Setup to do?"
  COLOR 7, 1
  PRINT ""
  LOCATE 9, 7: COLOR 7, 1: PRINT "Make Windows 1.0 run in MS-DOS 7.1 (Updates CONFIG.SYS)"
  LOCATE 10, 7: COLOR 7, 1: PRINT "Patch Windows 3.1 to run in Real Mode (Updates System Files)"
  LOCATE 11, 7: COLOR 7, 1: PRINT "Update IO.SYS to run Windows 3.x in MS-DOS 7.1 (W3XSTART.EXE)"
  LOCATE 12, 7: COLOR 7, 1: PRINT "Patch Windows 9x to boot with more than 1GB RAM (PATCHMEM)"
  LOCATE 13, 7: COLOR 7, 1: PRINT "Create an NTLDR Bootsector for Windows 9x (DEBUGGER)"
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Update MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 1, 7: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPATCHER)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                "         _
'//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey9

EnterLoopKey9:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI7
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 8
'    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey9
END

