Help: 'Groups
  ' = Comment
  '// = Use of command

Main:
  GOTO SetVariable1

SetVariable1:
  OldLetterPath$ = "C:\WINDOWS"
  GOTO ScreenWiper

ScreenWiper:
  CLS '//Clears Screen
  COLOR 7, 1 '//Changes screen color
  CLS
  GOTO WelcomeWindow '//Skip to a part of the Setup

WelcomeWindow:
  CLS
  PRINT "" '//Outputs a string of text or skips a line
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  PRINT "    Notice: Make sure that you are running this program where the"
  PRINT "            other programs are located."
  PRINT ""
  COLOR 2, 1
  PRINT "    It is advised to make a backup of your files and installation."
  COLOR 7, 1
  PRINT ""
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                       '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey

EnterLoopKey:
  A$ = "" 'Variable
  WHILE A$ = "" '//Runs an indefinite loop until A$ is not blank
    A$ = INKEY$ 'Captures the key pressed by the user and saves it to A$
  WEND '//Stops the WHILE loop
  IF (A$ = "Q") THEN '//Checks something, this time if the A$ value is Q, it executes the commands in this IF section.
    QuitValue = 1
    GOTO QuizTerminate '//Skip to the QuizTerminate section
  END IF 'Ends the IF program
  IF (A$ = "q") THEN
    QuitValue = 1
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(13)) THEN GOTO MultiInstall 'CHR$(13) is the code for ENTER key
  IF NOT (A$ = "") THEN GOTO EnterLoopKey '//If the value in A$ is NOT blank, restart the loop

QuizTerminate:
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
  PRINT ""
  COLOR 15, 1
  PRINT "   Are you sure you want to exit the MultiPatcher Setup?"
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
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT ""
  COLOR 7, 1
  PRINT "    To stay in the MultiPatcher Setup, press N."
  PRINT "    To quit the MultiPatcher Setup, press Y."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  N=Cancel  Y=Exit                                                              ": COLOR 7, 1: PRINT "                                                                                " _
                                                       '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey0

EnterLoopKey0:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Y") THEN GOTO UserQuitKey
  IF (A$ = "y") THEN GOTO UserQuitKey
  IF (A$ = "N") THEN
    IF (QuitValue = 1) THEN GOTO WelcomeWindow
    IF (QuitValue = 2) THEN GOTO MultiInstall
    IF (QuitValue = 3) THEN GOTO MI1
    IF (QuitValue = 4) THEN GOTO MI2
    IF (QuitValue = 5) THEN GOTO MI3
    IF (QuitValue = 6) THEN GOTO MI4
    IF (QuitValue = 7) THEN GOTO MI5
    IF (QuitValue = 8) THEN GOTO MI6
    IF (QuitValue = 9) THEN GOTO MI7
    IF (QuitValue = 10) THEN GOTO MI8
    IF (QuitValue = 11) THEN GOTO GetPath
    IF (QuitValue = 12) THEN GOTO PathCheck
  END IF
  IF (A$ = "n") THEN
    IF (QuitValue = 1) THEN GOTO WelcomeWindow
    IF (QuitValue = 2) THEN GOTO MultiInstall
    IF (QuitValue = 3) THEN GOTO MI1
    IF (QuitValue = 4) THEN GOTO MI2
    IF (QuitValue = 5) THEN GOTO MI3
    IF (QuitValue = 6) THEN GOTO MI4
    IF (QuitValue = 7) THEN GOTO MI5
    IF (QuitValue = 8) THEN GOTO MI6
    IF (QuitValue = 9) THEN GOTO MI7
    IF (QuitValue = 10) THEN GOTO MI8
    IF (QuitValue = 11) THEN GOTO GetPath
    IF (QuitValue = 12) THEN GOTO PathCheck
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey0

UserQuitKey:
  COLOR 7, 0
  CLS
  PRINT "Setup is exiting..."
  CLS
END '//Stops the whole program

MultiInstall:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
  PRINT ""
  COLOR 15, 1
  PRINT "   Please read this license agreement before continuing."
  COLOR 7, 1
  PRINT ""
  PRINT "  ษออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออป"
  PRINT "  บ The MultiPatcher has softwares and files which were not made by me       บ"
  PRINT "  บ (Wintelic). They are: ATAPI.SYS, PatchMEM, W3XSTART, SETVER.EXE, and     บ"
  PRINT "  บ DEBUG.EXE. I do not provide any guarantee for any of the above software, บ"
  PRINT "  บ nor for any of my own programs (MultiPatcher, RealBoot, and NTPatcher).  บ"
  PRINT "  บ                                                                          บ"
  PRINT "  บ Credits: ATAPI.SYS, SETVER.EXE, DEBUG.EXE - Microsoft                    บ"
  PRINT "  บ          PatchMEM - Rudolph R. Loew                                      บ"
  PRINT "  บ          W3XSTART - Ralf Buschmann                                       บ"
  PRINT "  บ                                                                          บ"
  PRINT "  บ If you are the creator of one of the above files and want me to remove   บ"
  PRINT "  บ them, leave a comment on my video and I will remove it asap.             บ"
  PRINT "  ศออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออผ"
  COLOR 15, 1
  PRINT ""
  PRINT "    Do you accept this license agreement? (Y = Yes, N = No)"
  LOCATE 25, 1: COLOR 0, 7: PRINT "  Y=Continue  N=Exit                                                            ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey1

EnterLoopKey1:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Y") THEN GOTO MI1
  IF (A$ = "y") THEN GOTO MI1
  IF (A$ = "N") THEN
    QuitValue = 2
    GOTO QuizTerminate
  END IF
  IF (A$ = "n") THEN
    QuitValue = 2
    GOTO QuizTerminate
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey1

MI1:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey2

EnterLoopKey2:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 3
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 3
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI8
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI2
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 1
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey2

MI2:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey3

EnterLoopKey3:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 4
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 4
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI1
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI3
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 2
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey3

MI3:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey4

EnterLoopKey4:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 5
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 5
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI2
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI4
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 3
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey4

MI4:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey5

EnterLoopKey5:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 6
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 6
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI3
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI5
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 4
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey5

MI5:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey6

EnterLoopKey6:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 7
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 7
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI4
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI6
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 5
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey6

MI6:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey7

EnterLoopKey7:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 8
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 8
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI5
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI7
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 6
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey7

MI7:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 16, 7: COLOR 7, 1: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey8

EnterLoopKey8:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 9
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 9
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI6
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI8
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 7
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey8

MI8:
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  LOCATE 14, 7: COLOR 7, 1: PRINT "Make Windows 95 Dual-boot with Windows 98 (Replaces MSDOS.SYS)"
  LOCATE 15, 7: COLOR 7, 1: PRINT "Update WINNT4's ATAPI.SYS to prevent Inaccessible Boot Device error"
  LOCATE 16, 7: COLOR 1, 7: PRINT "Patch NTLDR to boot Windows NT 3.x and XP on the same loader (NTPatcher)"
  COLOR 7, 1
  PRINT ""
  PRINT "    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch)."
  PRINT ""
  PRINT "    Use the up and down arrow keys to move the highlight to your choice."
  PRINT "    When you are ready to continue, press ENTER."
  PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  Q=Exit                                                        ": COLOR 7, 1: PRINT "                                                                                " _
                                                      '//LOCATE selects a part of the screen to run a command
  GOTO EnterLoopKey9

EnterLoopKey9:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 10
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 10
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(0) + CHR$(72)) THEN GOTO MI7
  IF (A$ = CHR$(0) + CHR$(80)) THEN GOTO MI1
  IF (A$ = CHR$(13)) THEN
    USERCHOICE = 8
    GOTO GetPath
  END IF
  IF NOT (A$ = "") THEN GOTO EnterLoopKey9

GetPath:
  CLS
  IF (USERCHOICE = 3) THEN GOTO W3XSTART
  IF (USERCHOICE = 8) THEN
    SHELL ".\UTIL\NTP.EXE & PAUSE"
    GOTO NTPATCHERWAIT
  END IF
  COLOR 7, 1
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  PRINT "   After typing in your Windows path, you will get to choose which software"
  PRINT "   needs to be run from this program. Additionaly, make sure you have"
  PRINT "   ATTRIB.EXE listed in your PATH variable for a successful installation."
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
  PRINT "ออออออออออออออออออออออออออออออออ"
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
  GOTO EnterLoopKey10

EnterLoopKey10:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 11
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 11
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(13)) THEN GOTO GetPath
  IF NOT (A$ = "") THEN GOTO EnterLoopKey10

PathCheck:
  CLS
  COLOR 7, 1
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
  PRINT ""
  PRINT "   Please check the path that you entered before continuing."
  PRINT "   The path that you entered is: "; LetterPath$
  PRINT ""
  COLOR 3, 1
  PRINT "   NOTE: You MUST type the path in this format: %driveletter%:\%path%"
  PRINT "         Also, your path must NOT end with a '\' if it's not a drive's root"
  PRINT "         path."
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
  COLOR 4, 1: LOCATE 10, 14: PRINT "MUST"
  COLOR 4, 1: LOCATE 11, 31: PRINT "NOT"
  LOCATE 25, 1: COLOR 0, 7: PRINT "  ENTER=Continue  ESC=Previous  Q=Exit                                          ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey11

EnterLoopKey11:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN
    QuitValue = 12
    GOTO QuizTerminate
  END IF
  IF (A$ = "q") THEN
    QuitValue = 12
    GOTO QuizTerminate
  END IF
  IF (A$ = CHR$(13)) THEN GOTO InsCheck
  IF (A$ = CHR$(27)) THEN GOTO GetPath
  IF NOT (A$ = "") THEN GOTO EnterLoopKey11

InsCheck:
  CLS
  IF (USERCHOICE = 1) THEN GOTO W1DOSFIX
  IF (USERCHOICE = 2) THEN GOTO W31RMODE
  IF (USERCHOICE = 4) THEN GOTO PTCMEM9X
  IF (USERCHOICE = 7) THEN GOTO IDEDRVNT
END

W1DOSFIX:
  CLS
  COLOR 7, 1
  DIM NameVar AS STRING
  NameVar = LetterPath$ + "\SETVER.EXE"
  CLS
  COLOR 7, 1
  SHELL "ATTRIB -S -H -R " + NameVar + " > NUL"
  SHELL "IF EXIST " + NameVar + " DEL " + NameVar + " > NUL"
  SHELL "COPY .\UTIL\WINSET.EXE " + NameVar + " > NUL"
  SHELL "ECHO DEVICE=" + NameVar + " >> C:\CONFIG.SYS"
  SHELL NameVar + " " + "WIN100.BIN 3.30"
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT "                                                                                "
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                                 "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                                "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while Setup updates Windows files...                             "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  LOCATE 19, 1: PRINT "    Note: SETVER's entry has been added to your CONFIG.SYS file. If another"
  LOCATE 20, 1: PRINT "    version is already loaded from CONFIG.SYS, it needs to be removed."
  LOCATE 22, 1: PRINT "    To restart and choose another option, press R."
  LOCATE 23, 1: PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  R=Restart  Q=Exit                                                             ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey12
  
W31RMODE:
  CLS
  COLOR 7, 1
  DIM WinDir31 AS STRING, SysDir31 AS STRING
  WinDir31 = LetterPath$
  SysDir31 = LetterPath$ + "\SYSTEM"
  DIM WF1 AS STRING, WF2 AS STRING, WF3 AS STRING, WF4 AS STRING, WF5 AS STRING, WF6 AS STRING, WF7 AS STRING, WF8 AS STRING, WF9 AS STRING, WF10 AS STRING, WF11 AS STRING, WF12 AS STRING, WF13 AS STRING, WF14 AS STRING, WF15 AS STRING, WF16 AS  _
STRING, WF17 AS STRING
  WF1 = SysDir31 + "\COMM.DRV"
  WF2 = SysDir31 + "\COMMDLG.DLL"
  WF3 = WinDir31 + "\CONTROL.EXE"
  WF4 = SysDir31 + "\DOSSWAP.EXE"
  WF5 = SysDir31 + "\GDI.EXE"
  WF6 = SysDir31 + "\KERNEL.EXE"
  WF7 = SysDir31 + "\KEYBOARD.DRV"
  WF8 = SysDir31 + "\MOUSE.DRV"
  WF9 = WinDir31 + "\PROGMAN.EXE"
  WF10 = SysDir31 + "\SHELL.DLL"
  WF11 = SysDir31 + "\SOUND.DRV"
  WF12 = SysDir31 + "\SYSTEM.DRV"
  WF13 = WinDir31 + "\SYSTEM.INI"
  WF14 = SysDir31 + "\USER.EXE"
  WF15 = SysDir31 + "\VGACOLOR.2GR"
  WF16 = WinDir31 + "\WIN.COM"
  WF17 = SysDir31 + "\WINOLDAP.MOD"
  DIM BK1 AS STRING, BK2 AS STRING, BK3 AS STRING, BK4 AS STRING, BK5 AS STRING, BK6 AS STRING, BK7 AS STRING, BK8 AS STRING, BK9 AS STRING, BK10 AS STRING, BK11 AS STRING, BK12 AS STRING, BK13 AS STRING, BK14 AS STRING, BK15 AS STRING, BK16 AS  _
STRING, BK17 AS STRING
  BK1 = SysDir31 + "\COMM.BAK"
  BK2 = SysDir31 + "\COMMDLG.BAK"
  BK3 = WinDir31 + "\CONTROL.BAK"
  BK4 = SysDir31 + "\DOSSWAP.BAK"
  BK5 = SysDir31 + "\GDI.BAK"
  BK6 = SysDir31 + "\KERNEL.BAK"
  BK7 = SysDir31 + "\KEYBOARD.BAK"
  BK8 = SysDir31 + "\MOUSE.BAK"
  BK9 = WinDir31 + "\PROGMAN.BAK"
  BK10 = SysDir31 + "\SHELL.BAK"
  BK11 = SysDir31 + "\SOUND.BAK"
  BK12 = SysDir31 + "\SYSTEM.BAK"
  BK13 = WinDir31 + "\SYSTEM.BAK"
  BK14 = SysDir31 + "\USER.BAK"
  BK15 = SysDir31 + "\VGACOLOR.2GR"
  BK16 = WinDir31 + "\WIN.BAK"
  BK17 = SysDir31 + "\WINOLDAP.MOD"
  CLS
  COLOR 7, 1
  CLS
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT "                                                                                "
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                                 "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                                "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while Windows 3.1 is being patched...                            "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\COMM.DRV > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\COMMDLG.DLL > NUL"
  SHELL "ATTRIB -S -H -R " + WinDir31 + "\CONTROL.EXE > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\DOSSWAP.EXE > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\GDI.EXE > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\KERNEL.EXE > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\KEYBOARD.DRV > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\MOUSE.DRV > NUL"
  SHELL "ATTRIB -S -H -R " + WinDir31 + "\PROGMAN.EXE > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\SHELL.DLL > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\SOUND.DRV > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\SYSTEM.DRV > NUL"
  SHELL "ATTRIB -S -H -R " + WinDir31 + "\SYSTEM.INI > NUL"
  SHELL "ATTRIB -S -H -R " + SysDir31 + "\USER.EXE > NUL"
  SHELL "ATTRIB -S -H -R " + WF15 + " >NUL"
  SHELL "ATTRIB -S -H -R " + WinDir31 + "\WIN.COM > NUL"
  SHELL "ATTRIB -S -H -R " + WF17 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK1 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK2 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK3 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK4 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK5 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK6 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK7 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK8 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK9 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK10 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK11 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK12 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK13 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK14 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK15 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK16 + " >NUL"
  SHELL "ATTRIB -S -H -R " + BK17 + " >NUL"
  SHELL "IF EXIST " + BK1 + " DEL " + BK1 + " >NUL"
  SHELL "IF EXIST " + BK2 + " DEL " + BK2 + " >NUL"
  SHELL "IF EXIST " + BK3 + " DEL " + BK3 + " >NUL"
  SHELL "IF EXIST " + BK4 + " DEL " + BK4 + " >NUL"
  SHELL "IF EXIST " + BK5 + " DEL " + BK5 + " >NUL"
  SHELL "IF EXIST " + BK6 + " DEL " + BK6 + " >NUL"
  SHELL "IF EXIST " + BK7 + " DEL " + BK7 + " >NUL"
  SHELL "IF EXIST " + BK8 + " DEL " + BK8 + " >NUL"
  SHELL "IF EXIST " + BK9 + " DEL " + BK9 + " >NUL"
  SHELL "IF EXIST " + BK10 + " DEL " + BK10 + " >NUL"
  SHELL "IF EXIST " + BK11 + " DEL " + BK11 + " >NUL"
  SHELL "IF EXIST " + BK12 + " DEL " + BK12 + " >NUL"
  SHELL "IF EXIST " + BK13 + " DEL " + BK13 + " >NUL"
  SHELL "IF EXIST " + BK14 + " DEL " + BK14 + " >NUL"
  SHELL "IF EXIST " + BK15 + " DEL " + BK15 + " >NUL"
  SHELL "IF EXIST " + BK16 + " DEL " + BK16 + " >NUL"
  SHELL "IF EXIST " + BK17 + " DEL " + BK17 + " >NUL"
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT "                                                                                "
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                                 "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                                "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while Windows 3.1 is being patched...                            "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  SHELL "IF EXIST " + WF1 + " REN " + WF1 + " COMM.BAK >NUL"
  SHELL "IF EXIST " + WF2 + " REN " + WF2 + " COMMDLG.BAK >NUL"
  SHELL "IF EXIST " + WF3 + " REN " + WF3 + " CONTROL.BAK >NUL"
  SHELL "IF EXIST " + WF4 + " REN " + WF4 + " DOSSWAP.BAK >NUL"
  SHELL "IF EXIST " + WF5 + " REN " + WF5 + " GDI.BAK >NUL"
  SHELL "IF EXIST " + WF6 + " REN " + WF6 + " KERNEL.BAK >NUL"
  SHELL "IF EXIST " + WF7 + " REN " + WF7 + " KEYBOARD.BAK >NUL"
  SHELL "IF EXIST " + WF8 + " REN " + WF8 + " MOUSE.BAK >NUL"
  SHELL "IF EXIST " + WF9 + " REN " + WF9 + " PROGMAN.BAK >NUL"
  SHELL "IF EXIST " + WF10 + " REN " + WF10 + " SHELL.BAK >NUL"
  SHELL "IF EXIST " + WF11 + " REN " + WF11 + " SOUND.BAK >NUL"
  SHELL "IF EXIST " + WF12 + " REN " + WF12 + " SYSTEM.BAK >NUL"
  SHELL "IF EXIST " + WF13 + " REN " + WF13 + " SYSTEM.BAK >NUL"
  SHELL "IF EXIST " + WF14 + " REN " + WF14 + " USER.BAK >NUL"
  SHELL "IF EXIST " + WF15 + " REN " + WF15 + " VGACOLOR.BAK >NUL"
  SHELL "IF EXIST " + WF16 + " REN " + WF16 + " WIN.BAK >NUL"
  SHELL "IF EXIST " + WF17 + " REN " + WF17 + " WINOLDAP.BAK >NUL"
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT "                                                                                "
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                                 "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                                "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while Windows 3.1 is being patched...                            "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  SHELL "COPY .\UTIL\COMM.DRV " + WF1 + " >NUL"
  SHELL "COPY .\UTIL\COMMDLG.DLL " + WF2 + " >NUL"
  SHELL "COPY .\UTIL\CONTROL.EXE " + WF3 + " >NUL"
  SHELL "COPY .\UTIL\DOSSWAP.EXE " + WF4 + " >NUL"
  SHELL "COPY .\UTIL\GDI.EXE " + WF5 + " >NUL"
  SHELL "COPY .\UTIL\KERNEL.EXE " + WF6 + " >NUL"
  SHELL "COPY .\UTIL\KEYBOARD.DRV " + WF7 + " >NUL"
  SHELL "COPY .\UTIL\MOUSE.DRV " + WF8 + " >NUL"
  SHELL "COPY .\UTIL\PROGMAN.EXE " + WF9 + " >NUL"
  SHELL "COPY .\UTIL\SHELL.DLL " + WF10 + " >NUL"
  SHELL "COPY .\UTIL\SOUND.DRV " + WF11 + " >NUL"
  SHELL "COPY .\UTIL\SYSTEM.DRV " + WF12 + " >NUL"
  SHELL "COPY .\UTIL\SYSTEM.INI " + WF13 + " >NUL"
  SHELL "COPY .\UTIL\USER.EXE " + WF14 + " >NUL"
  SHELL "COPY .\UTIL\VGACOLOR.2GR " + WF15 + " >NUL"
  SHELL "COPY .\UTIL\WIN.COM " + WF16 + " >NUL"
  SHELL "COPY .\UTIL\WINOLDAP.MOD " + WF17 + " >NUL"
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT "                                                                                "
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                                 "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                                "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while Windows 3.1 is being patched...                            "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  LOCATE 19, 1: PRINT "                                                                                "
  LOCATE 20, 1: PRINT "                                                                                "
  LOCATE 21, 1: PRINT "    Note: The 'No more files' things are not errors, they're just information.  "
  LOCATE 22, 1: PRINT "    To restart and choose another option, press R.                              "
  LOCATE 23, 1: PRINT "    To quit the MultiPatcher Setup, press Q.                                    "
  LOCATE 25, 1: COLOR 0, 7: PRINT "  R=Restart  Q=Exit                                                             ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey12

W3XSTART:
  CLS
  COLOR 7, 0
  CLS
  SHELL ".\UTIL\3XMOD.EXE >NUL"
  CLS
  COLOR 7, 1
  CLS
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT ""
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic"
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ"
  LOCATE 6, 1: PRINT ""
  LOCATE 7, 1: PRINT "   W3XSTART has been closed."
  LOCATE 8, 1: PRINT ""
  LOCATE 9, 1: PRINT "   A file called 'W3XSTART.BIN' may have been created in the directory"
  LOCATE 10, 1: PRINT "   from where you started this program. It is a backup file created by"
  LOCATE 11, 1: PRINT "   W3XSTART. If you need to restore your IO.SYS using option 2, you"
  LOCATE 12, 1: PRINT "   would need this file."
  LOCATE 22, 1: PRINT "    To restart and choose another option, press R."
  LOCATE 23, 1: PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  R=Restart  Q=Exit                                                             ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey12

PTCMEM9X:
  CLS
  COLOR 7, 1
  DIM OldName AS STRING, NewName AS STRING
  OldName = "C:\MSDOS.SYS"
  NewName = "C:\MSDOS.TMP"
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
  PRINT ""
  PRINT "   Please wait while PatchMEM is loading..."
  PRINT ""
  PRINT "Program's output:"
  PRINT ""
  COLOR 7, 1
  SHELL "ATTRIB -S -H -R " + OldName + " > NUL" 'SHELL starts the MS-DOS COMMAND.COM Shell to do something.
  SHELL "ATTRIB -S -H -R " + NewName + " > NUL"
  SHELL "IF EXIST " + NewName + " DEL " + NewName + " > NUL"
  NAME OldName AS NewName 'Name or rename a file
  SHELL "ECHO [Paths] >> C:\MSDOS.SYS"
  SHELL "ECHO windir=" + LetterPath$ + " >> C:\MSDOS.SYS"
  SHELL ".\UTIL\9XRAM.EXE"
  KILL OldName 'KILL deletes a file
  NAME NewName AS OldName
  SHELL "ATTRIB +S +H +R " + OldName + " > NUL"
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT ""
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                                 "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                                "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while PatchMEM is loading...                                     "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  LOCATE 22, 1: PRINT "    To restart and choose another option, press R.                              "
  LOCATE 23, 1: PRINT "    To quit the MultiPatcher Setup, press Q.                                    "
  LOCATE 25, 1: COLOR 0, 7: PRINT "  R=Restart  Q=Exit                                                             ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey12

NTPATCHERWAIT:
  CLS
  COLOR 7, 1
  CLS
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT ""
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic"
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ"
  LOCATE 6, 1: PRINT ""
  LOCATE 7, 1: PRINT "   NTPatcher is starting/started/ended."
  LOCATE 8, 1: PRINT ""
  LOCATE 9, 1: PRINT "   If you are running WinXP/Srv2003, it will launch in another window."
  LOCATE 10, 1: PRINT "   If you are running any other OS other than XP or Server 2003, "
  LOCATE 11, 1: PRINT "   it will not launch."
  LOCATE 22, 1: PRINT "    To restart and choose another option, press R."
  LOCATE 23, 1: PRINT "    To quit the MultiPatcher Setup, press Q."
  LOCATE 25, 1: COLOR 0, 7: PRINT "  R=Restart  Q=Exit                                                             ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey12

IDEDRVNT:
  CLS
  COLOR 7, 1
  DIM TempDir AS STRING, BootDir AS STRING
  BootDir = LetterPath$ + "\SYSTEM32\DRIVERS\ATAPI.SYS"
  TempDir = LetterPath$ + "\SYSTEM32\DRIVERS\ATAPI.BAK"
  CLS
  PRINT ""
  PRINT ""
  PRINT ""
  PRINT " MultiPatcher Setup by Wintelic"
  PRINT "ออออออออออออออออออออออออออออออออ"
  PRINT ""
  PRINT "   Please wait while Windows NT 4.0 is being updated..."
  PRINT ""
  PRINT "Program's output:"
  PRINT ""
  SHELL "ATTRIB -S -H -R " + BootDir + " > NUL"
  SHELL "ATTRIB -S -H -R " + TempDir + " > NUL"
  SHELL "IF EXIST " + TempDir + " DEL " + TempDir + " > NUL"
  NAME BootDir AS TempDir
  SHELL "COPY .\UTIL\2KIDENT.DRV " + BootDir
  LOCATE 1, 1: COLOR 7, 1: PRINT ""
  LOCATE 2, 1: COLOR 7, 1: PRINT ""
  LOCATE 3, 1: COLOR 7, 1: PRINT ""
  LOCATE 4, 1: COLOR 7, 1: PRINT " MultiPatcher Setup by Wintelic                                               "
  LOCATE 5, 1: COLOR 7, 1: PRINT "ออออออออออออออออออออออออออออออออ                                              "
  LOCATE 6, 1: PRINT "                                                                                "
  LOCATE 7, 1: PRINT "   Please wait while Windows NT 4.0 is being updated...                         "
  LOCATE 8, 1: PRINT "                                                                                "
  LOCATE 9, 1: PRINT "Program's output:                                                               "
  LOCATE 10, 1: PRINT "                                                                                "
  LOCATE 22, 1: PRINT "    To restart and choose another option, press R.                              "
  LOCATE 23, 1: PRINT "    To quit the MultiPatcher Setup, press Q.                                    "
  LOCATE 25, 1: COLOR 0, 7: PRINT "  R=Restart  Q=Exit                                                             ": COLOR 7, 1: PRINT "                                                                                "
  GOTO EnterLoopKey12

EnterLoopKey12:
  A$ = ""
  WHILE A$ = ""
    A$ = INKEY$
  WEND
  IF (A$ = "Q") THEN GOTO UserQuitKey
  IF (A$ = "q") THEN GOTO UserQuitKey
  IF (A$ = "R") THEN GOTO MI1
  IF (A$ = "r") THEN GOTO MI1
  IF NOT (A$ = "") THEN GOTO EnterLoopKey12

