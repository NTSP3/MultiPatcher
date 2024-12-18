#include <conio.h> // Include Control Input Output Library
#include <stdio.h> // Include Standard Input Output Library
#include <stdlib.h> // Include Standard Library

/*

 Help
 ----

 // = A comment
 Groups begin with a void statement.
 Use the group's name to go to that group.
 This code is (probably) C.
 int main is where the code begins executing.
 To end this program, use return 0.
 Print statements: printf = Output text, cprintf = Colored Output Text
 Each command has to end with a semi-colon ';' to tell the compiler that that's the end.
 Most commands need () at the end of the COMMAND, even if there is nothing to write.

 Available Colors
 ----------------

 BLACK
 BLUE
 GREEN
 CYAN
 RED
 MAGENTA
 BROWN
 LIGHTGRAY
 DARKGRAY
 LIGHTBLUE
 LIGHTGREEN
 LIGHTCYAN
 LIGHTRED
 LIGHTMAGENTA
 YELLOW
 WHITE

 Alternate Key Codes (used in this program)
 ------------------------------------------

 182 = ถ
 186 = บ
 187 = ป
 188 = ผ
 196 = ฤ
 199 = ว
 200 = ศ
 201 = ษ
 205 = อ
 249 = ๙

*/

/* Void group */
void WelcomeWindow(); // Declare function for later use
void UserQuitCheck(); // Declare function for later use
void MultiInstalls(); // Declare function for later use
void EnterLoopKey1(); // Declare function for later use
void EnterLoopKey2(); // Declare function for later use
void EnterLoopKey3(); // Declare function for later use
void MultiInsGrp01(); // Declare function for later use
/* Char group */
char yn13; // Declare variable for later use
char nVar; // Declare variable for later use
char cBar; // Declare variable for later use
/* Integers and main */
int main() { // Program starts here

  _setcursortype(_NOCURSOR); //  Hide cursor
  WelcomeWindow(); // Skip to the first portion of the Setup
  return 0; // Return value 0 (success) to the system

}

void WelcomeWindow() { // Opening of a function

  textcolor(BLACK); // Change Text Color
  textbackground(LIGHTGRAY); // Change Background Color
  clrscr(); // Clear Screen
  gotoxy(1, 25); //  Locate a part of the screen
  cprintf("  ENTER=Continue  Q=Quit"); // Print text function + Color options - Needs to be put before main text outputs for control bar at the bottom
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(1, 1);
  cprintf("                                                                                ");
  cprintf(" MultiPatcher by LoopKeyX2                                                      ");
  cprintf("อออออออออออออออออออออออออออ                                                     ");
  cprintf("                                                                                ");
  textcolor(WHITE);
  cprintf("   Welcome to Setup.                                                            ");
  cprintf("                                                                                ");
  textcolor(LIGHTGRAY);
  cprintf("    The Setup program for the MultiPatcher version 1.0 patches some files       ");
  cprintf("    to successfully boot one OS alongside another with ease.                    ");
  cprintf("                                                                                ");
  textcolor(CYAN);
  cprintf("    Info: Existing versions of certain Windows files will be backed up with     ");
  cprintf("    the extension .BAK. If a file with the .BAK extension exist,                ");
  cprintf("    the file with the .BAK extension will be deleted.                           ");
  cprintf("                                                                                ");
  textcolor(RED);
  cprintf("    Notice: Make sure that you are running this program without modifications.  ");
  cprintf("            I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!                ");
  cprintf("                                                                                ");
  textcolor(GREEN);
  cprintf("    It is advised to make a backup of your files and installation.              ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  textcolor(LIGHTGRAY);
  cprintf("    When you are ready to continue, press ENTER.                                ");
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  cprintf("                                                                                ");
  EnterLoopKey1();

} // Ending of a function

void EnterLoopKey1() {

  yn13 = '\0';
  yn13 = getch(); // Save the key pressed by the user in a variable
  yn13 = tolower(yn13); //Convert the letter to lower case
  if (yn13 == 13) { // Run statements if a given condition is true or false

    MultiInstalls();

  }

  else if (yn13 == 'q') {

    nVar = '1';
    UserQuitCheck();

  }

  else {

    EnterLoopKey1();

  }

}

void UserQuitCheck() {

  gotoxy (14, 7);
  textcolor(RED);
  textbackground(LIGHTGRAY);
  cprintf("ษออออออออออออออออออออออออออออออออออออออออออออออออออป");
  gotoxy (14, 8);
  cprintf("บ  MultiPatcher is not completely set up on your   บ");
  gotoxy (14, 9);
  cprintf("บ  computer. If you quit Setup now, you will need  บ");
  gotoxy (14, 10);
  cprintf("บ  to run Setup again to patch Windows files.      บ");
  gotoxy (14, 11);
  cprintf("บ                                                  บ");
  gotoxy (14, 12);
  cprintf("บ     ๙To continue Setup, press ENTER.             บ");
  gotoxy (14, 13);
  cprintf("บ     ๙To quit Setup, press Q.                     บ");
  gotoxy (14, 14);
  cprintf("วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ");
  gotoxy (14, 15);
  cprintf("บ  Q=Quit  ENTER=Continue                          บ");
  gotoxy (14, 16);
  cprintf("ศออออออออออออออออออออออออออออออออออออออออออออออออออผ");
  gotoxy (1, 25);
  cprintf("                                                                               ");
  textbackground(BLACK);
  gotoxy (15, 17);
  cprintf("                                                     ");
  gotoxy (66, 8);
  cprintf("  ");
  gotoxy (66, 9);
  cprintf("  ");
  gotoxy (66, 10);
  cprintf("  ");
  gotoxy (66, 11);
  cprintf("  ");
  gotoxy (66, 12);
  cprintf("  ");
  gotoxy (66, 13);
  cprintf("  ");
  gotoxy (66, 14);
  cprintf("  ");
  gotoxy (66, 15);
  cprintf("  ");
  gotoxy (66, 16);
  cprintf("  ");
  textcolor(DARKGRAY);
  if (nVar == '1') {

    gotoxy (66, 10);
    cprintf("ed");
    gotoxy (66, 14);
    cprintf("od");
    gotoxy (15, 17);
    cprintf("sed to make a backup of your files and installation.");
    EnterLoopKey2();

  }

  else if (nVar == '2') {

    gotoxy (66, 13);
    cprintf("om");
    EnterLoopKey2();

  }

}

void EnterLoopKey2() {

  yn13 = '\0';
  yn13 = getch();
  yn13 = tolower(yn13);
  if (yn13 == 13) {

    if (nVar == '1') WelcomeWindow();
    else if (nVar == '2') MultiInstalls();

  }

  else if (yn13 == 'q') {

    exit(0);

  }

  else {

    EnterLoopKey2();

  }

}


void MultiInstalls() {

  textcolor(BLACK);
  textbackground(LIGHTGRAY);
  clrscr();
  gotoxy(1, 25);
  cprintf("  ENTER=Continue  Q=Quit");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(1, 1);
  cprintf("                                                                                ");
  cprintf(" MultiPatcher by LoopKeyX2                                                      ");
  cprintf("อออออออออออออออออออออออออออ                                                     ");
  cprintf("                                                                                ");
  textcolor(WHITE);
  cprintf("   What do you want the Setup to do?                                            ");
  cprintf("                                                                                ");
  textcolor(LIGHTGRAY);
  cprintf("                                                                                ");
  cprintf("       Patch Windows 3.1 to run in Real Mode                                    ");
  cprintf("       Update IO.SYS to run Windows 3.x in MS-DOS 7.1                           ");
  cprintf("       Patch Windows 9x to boot with more than 1GB RAM                          ");
  cprintf("       Create an NTLDR Bootsector for Windows 9x                                ");
  cprintf("       Make Windows 95 dual-boot with Windows 98                                ");
  cprintf("       Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)   ");
  cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch).     ");
  cprintf("                                                                                ");
  cprintf("    Use the up and down keys to move the highlight to your choice.              ");
  cprintf("                                                                                ");
  cprintf("    When you are ready to continue, press ENTER.                                ");
  cprintf("    To quit the MultiPatcher program, press Q.                                  ");
  cprintf("                                                                                ");
  MultiInsGrp01();

}

void MultiInsGrp01() {

  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  cBar = '1';
  EnterLoopKey3();

}

void MultiInsGrp02() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  cBar = '2';
  EnterLoopKey3();

}

void EnterLoopKey3() {

  yn13 = '\0';
  yn13 = getch();
  yn13 = tolower(yn13);
  if (yn13 == 13) {

    MultiInstalls();

  }

  else if (yn13 == 'q') {

    nVar = '2';
    UserQuitCheck();

  }

  else {

    EnterLoopKey3();

  }

}




















