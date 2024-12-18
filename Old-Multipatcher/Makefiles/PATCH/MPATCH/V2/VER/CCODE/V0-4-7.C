#include <stdio.h> // Include Standard Input and Output Header Library
#include <conio.h> // Include Control Input and Output Header Library
#include <dirent.h> // Include Directory Entry Header Library
#include <stdlib.h> // Include Library Header

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
 219 = Û
 249 = ๙

*/

/* Void group */
void LoadScrsCheck(); // Declare function for later use
void WelcomeWindow(); // Declare function for later use
void WelWinNoTimer(); // Declare function for later use
void UserQuitCheck(); // Declare function for later use
void MultiInstalls(); // Declare function for later use
void Transitions01(); // Declare function for later use
void EnterLoopKey1(); // Declare function for later use
void EnterLoopKey2(); // Declare function for later use
void EnterLoopKey3(); // Declare function for later use
void EnterLoopKey4(); // Declare function for later use
void MultiInsGrp01(); // Declare function for later use
void MultiInsGrp02(); // Declare function for later use
void MultiInsGrp03(); // Declare function for later use
void MultiInsGrp04(); // Declare function for later use
void MultiInsGrp05(); // Declare function for later use
void MultiInsGrp06(); // Declare function for later use
void MultiInsGrp07(); // Declare function for later use
void MultiInsGrp08(); // Declare function for later use
/* Char group */
// Old - char yn13; // Declare variable for later use
// char udirchk; // Declare variable for later use
char filechk; // Declare variable for later use
char numsvar; // Declare variable for later use
char colsbar; // Declare variable for later use
/* Integers and main */
int yn13; // Declare integer for later use
int main() { // Program starts here

  _setcursortype(_NOCURSOR); //  Hide cursor
  colsbar = '1';
//  udirchk = '.\util'
  LoadScrsCheck(); // Skip to the first portion of the Setup
  return 0; // Return value 0 (success) to the system

}

void LoadScrsCheck() {

  textcolor(LIGHTGRAY);
  textbackground(BLACK);
  clrscr();
  gotoxy (1, 1);
  cprintf(".");
  delay(100);
  cprintf(".");
  delay(100);
  cprintf(".");
  delay(100);
  clrscr();
  gotoxy (1, 1);
  cprintf("Loading MultiPatcher");
  gotoxy (1, 3);
  cprintf(".");
  delay(50);
  cprintf(".");
  delay(50);
  if (chdir(".\\utilfs") != 0) {

    cprintf("\r\nMultiPatcher could not start because one or more required files were missing.");
    cprintf("\r\nMake sure you have the necessary files and permissions.\r\n\n");
    _setcursortype(_NORMALCURSOR);
    exit(0);

  }

  chdir("..");
  cprintf(".");
  delay(50);
  cprintf(".");
  delay(50);
  cprintf(".");
  delay(50);
  cprintf(".");
  delay(50);
  textcolor(BLACK);
  textbackground(LIGHTGRAY);
  clrscr();
//  gotoxy(1, 25);
//  cprintf("                         ");
  gotoxy(1, 1);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("Loading MultiPatcher                                                            ");
  cprintf("                                                                                ");
  cprintf("......                                                                          ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  gotoxy(1, 1);
  cprintf("Loading MultiPatcher                                                            ");
//  delay(15);
  cprintf(" MultiPatcher by LoopKeyX2                                                      ");
  cprintf(".......                                                                         ");
//  delay(15);
  gotoxy(1, 4);
//  cprintf("อออออออออออออออออออออออออออ                                                     ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  delay(200);
  WelcomeWindow();

}

void WelcomeWindow() { // Opening of a function

  textcolor(BLACK); // Change Text Color
  textbackground(LIGHTGRAY); // Change Background Color
  clrscr(); // Clear Screen
//  gotoxy(1, 25)x; //  Locate a part of the screen
//  cprintf("  ENTER=Continue  F3=Quit"); // Print text function + Color options - Needs to be put before main text outputs for control bar at the bottom
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  gotoxy(1, 1);
  cprintf("Loading MultiPatcher                                                            ");
  cprintf(" MultiPatcher by LoopKeyX2                                                      ");
  cprintf(".......                                                                         ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
  cprintf("                                                                                ");
//  gotoxy(1, 1);
//  cprintf("Loading MultiPatcher                                                            ");
//  cprintf(" MultiPatcher by LoopKeyX2                                                      ");
//  cprintf("......                                                                          ");
//  cprintf("                                                                                ");
//  delay(5);
  textcolor(LIGHTGRAY);
  textbackground(BLUE);
  gotoxy(1, 1);
  cprintf("Loading MultiPatcher                                                            ");
//  delay(2);
  cprintf(" MultiPatcher by LoopKeyX2                                                      ");
//  delay(2);
  cprintf("........                                                                        ");
  delay(5);
  cprintf("                                                                                ");
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  delay(5);
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  gotoxy(1, 5);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  gotoxy(1, 6);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  gotoxy(1, 7);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  gotoxy(1, 8);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  gotoxy(1, 9);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("........                                                                        ");
  gotoxy(1, 10);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 11);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 12);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 13);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 14);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 15);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 16);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 17);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 18);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf(".........                                                                       ");
  gotoxy(1, 19);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("..........                                                                      ");
  gotoxy(1, 20);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("..........                                                                      ");
  gotoxy(1, 21);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("..........                                                                      ");
  gotoxy(1, 22);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 3);
  cprintf("..........                                                                      ");
  gotoxy(1, 23);
  cprintf("                                                                                ");
  delay(5);
//  gotoxy(1, 3);
//  cprintf("............................                                                    ");
  gotoxy(1, 24);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
  cprintf("อ");
  delay(15);
  gotoxy(1, 3);
  cprintf("ออ");
  delay(15);
  gotoxy(1, 3);
  cprintf("อออ");
  delay(15);
  gotoxy(1, 3);
  cprintf("ออออ");
  delay(15);
  gotoxy(1, 3);
  cprintf("อออออ");
  delay(15);
  gotoxy(1, 3);
  cprintf("ออออออ");
  delay(15);
  gotoxy(1, 3);
  cprintf("อออออออ");
  delay(15);
  gotoxy(1, 3);
  cprintf("ออออออออ");
  gotoxy(1, 5);
  textcolor(WHITE);
  cprintf("   Welcome to Setup.                                                            ");
  delay(15);
//  textcolor(LIGHTBLUE);
  gotoxy(1, 3);
  textcolor(LIGHTGRAY);
  cprintf("อออออออออ");
  gotoxy(1, 6);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(LIGHTGREEN);
  cprintf("ออออออออออ");
  textcolor(LIGHTGRAY);
  gotoxy(1, 7);
  cprintf("    The Setup program for the MultiPatcher version 1.0 patches some files       ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(LIGHTCYAN);
  cprintf("อออออออออออ");
  gotoxy(1, 8);
  textcolor(LIGHTGRAY);
  cprintf("    to successfully boot one OS alongside another with ease.                    ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(LIGHTRED);
  cprintf("ออออออออออออ");
  gotoxy(1, 9);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(LIGHTMAGENTA);
  cprintf("อออออออออออออ");
  gotoxy(1, 10);
  textcolor(CYAN);
  cprintf("    Info: Existing versions of certain Windows files will be backed up with     ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(YELLOW);
  textcolor(LIGHTGRAY);
  cprintf("ออออออออออออออ");
  gotoxy(1, 11);
  textcolor(CYAN);
  cprintf("    the extension .BAK. If a file with the .BAK extension exist,                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(WHITE);
  textcolor(LIGHTGRAY);
  cprintf("อออออออออออออออ");
  gotoxy(1, 12);
  textcolor(CYAN);
  cprintf("    the file with the .BAK extension will be deleted.                           ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(DARKGRAY);
  textcolor(LIGHTGRAY);
  cprintf("ออออออออออออออออ");
  gotoxy(1, 13);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(GREEN);
  cprintf("อออออออออออออออออ");
  gotoxy(1, 14);
  textcolor(RED);
  cprintf("    Notice: Make sure that you are running this program without modifications.  ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(CYAN);
  textcolor(LIGHTGRAY);
  cprintf("ออออออออออออออออออ");
  gotoxy(1, 15);
  textcolor(RED);
  cprintf("            I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(RED);
  textcolor(LIGHTGRAY);
  cprintf("อออออออออออออออออออ");
  gotoxy(1, 16);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(MAGENTA);
  textcolor(LIGHTGRAY);
  cprintf("ออออออออออออออออออออ");
  gotoxy(1, 17);
  textcolor(GREEN);
  cprintf("    It is advised to make a backup of your files and installation.              ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(BROWN);
  textcolor(LIGHTGRAY);
  cprintf("อออออออออออออออออออออ");
  gotoxy(1, 18);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(BLACK);
  cprintf("ออออออออออออออออออออออ");
  gotoxy(1, 19);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(DARKGRAY);
  cprintf("อออออออออออออออออออออออ");
  gotoxy(1, 20);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
//  textcolor(LIGHTGRAY);
  cprintf("ออออออออออออออออออออออออ");
  gotoxy(1, 21);
  cprintf("                                                                                ");
  delay(15);
  gotoxy(1, 3);
  cprintf("อออออออออออออออออออออออออ");
  gotoxy(1, 22);
  textcolor(LIGHTGRAY);
  cprintf("    When you are ready to continue, press ENTER.                                ");
  delay(15);
  gotoxy(1, 3);
  cprintf("ออออออออออออออออออออออออออ");
  gotoxy(1, 23);
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  delay(15);
  gotoxy(1, 3);
  cprintf("อออออออออออออออออออออออออออ");
  gotoxy(1, 24);
  cprintf("                                                                                ");
  delay(5);
  textcolor(LIGHTGRAY);
  textbackground(BLUE);
  gotoxy(1, 1);
  cprintf(" ");
  delay(5);
  gotoxy(1, 1);
  cprintf("  ");
  delay(5);
  gotoxy(1, 1);
  cprintf("   ");
  delay(5);
  gotoxy(1, 1);
  cprintf("    ");
  delay(5);
  gotoxy(1, 1);
  cprintf("     ");
  delay(5);
  gotoxy(1, 1);
  cprintf("      ");
  delay(5);
  gotoxy(1, 1);
  cprintf("       ");
  delay(5);
  gotoxy(1, 1);
  cprintf("        ");
  delay(5);
  gotoxy(1, 1);
  cprintf("         ");
  delay(5);
  gotoxy(1, 1);
  cprintf("          ");
  delay(5);
  gotoxy(1, 1);
  cprintf("           ");
  delay(5);
  gotoxy(1, 1);
  cprintf("            ");
  delay(5);
  gotoxy(1, 1);
  cprintf("             ");
  delay(5);
  gotoxy(1, 1);
  cprintf("              ");
  delay(5);
  gotoxy(1, 1);
  cprintf("               ");
  delay(5);
  gotoxy(1, 1);
  cprintf("                ");
  delay(5);
  gotoxy(1, 1);
  cprintf("                 ");
  delay(5);
  gotoxy(1, 1);
  cprintf("                  ");
  delay(5);
  gotoxy(1, 1);
  cprintf("                   ");
  delay(5);
  gotoxy(1, 1);
  cprintf("                    ");
  delay(15);
  textcolor(BLACK);
  textbackground(LIGHTGRAY);
  gotoxy(1, 25); //  Locate a part of the screen
  cprintf("  ENTER=Continue  F3=Quit"); // Print text function + Color options - Needs to be put before main text outputs for control bar at the bottom
  gotoxy(1, 1);
  numsvar = '1';
  EnterLoopKey1();

} // Ending of a function

/*

  Old group and statements

void EnterLoopKey1() {

  yn13 = '\0';
  yn13 = getch(); // Save the key pressed by the user in a variable
  yn13 = tolower(yn13); //Convert the letter to lower case
  if (yn13 == 13) { // Run statements if a given condition is true or false

    MultiInstalls();

  }

  else if (yn13 == 'q') {

    numsvar = '1';
    UserQuitCheck();

  }

  else {

    EnterLoopKey1();

  }

}

*/

void EnterLoopKey1() {

  yn13 = getch();
  if (yn13 == 0x3D) {

    UserQuitCheck();

  }

  else if (yn13 == 13) Transitions01();
  else EnterLoopKey1();

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
  cprintf("บ     ๙To quit Setup, press F3.                    บ");
  gotoxy (14, 14);
  cprintf("วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ");
  gotoxy (14, 15);
  cprintf("บ  F3=Quit  ENTER=Continue                         บ");
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
  if (numsvar == '1') {

    gotoxy (66, 10);
    cprintf("ed");
    gotoxy (66, 14);
    cprintf("od");
    gotoxy (15, 17);
    cprintf("sed to make a backup of your files and installation.");
    EnterLoopKey2();

  }

  else if (numsvar == '2') {

    gotoxy (66, 13);
    if (colsbar == '7') {

      textcolor(BLACK);
      textbackground(BROWN);
      cprintf("om");
      EnterLoopKey2();

    }

    else {

      textcolor(DARKGRAY);
      textbackground(BLACK);
      cprintf("om");
      EnterLoopKey2();

    }

  }

}

/*

  Old group and statements
  ------------------------

void EnterLoopKey2() {

  yn13 = '\0';
  yn13 = getch();
  yn13 = tolower(yn13);
  if (yn13 == 13) {

    if (numsvar == '1') WelcomeWindow();
    else if (numsvar == '2') MultiInstalls();

  }

  else if (yn13 == 'q') {

    clrscr();
    exit(0);

  }

  else {

    EnterLoopKey2();

  }

}

*/

void EnterLoopKey2() {

  yn13 = getch();
  if (yn13 == 0x3D) {

    gotoxy(1, 1);
    textbackground(BLACK);
    textcolor(LIGHTGRAY);
    _setcursortype(_NORMALCURSOR);
    clrscr();
    exit(0);

  }

  else if (yn13 == 13) {

    if (numsvar == '1') WelWinNoTimer();
    else if (numsvar == '2') MultiInstalls();

  }

  else EnterLoopKey2();


}

void WelWinNoTimer() {

  textcolor(BLACK);
  textbackground(LIGHTGRAY);
  clrscr();
  gotoxy(1, 25);
  cprintf("  ENTER=Continue  F3=Quit");
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
  numsvar = '1';
  EnterLoopKey3();

}

void EnterLoopKey3() {

  yn13 = getch();
  if (yn13 == 0x3D) {

    UserQuitCheck();

  }

  else if (yn13 == 13) {

    Transitions01();

  }

  else EnterLoopKey3();

}

void Transitions01() {

  textcolor(BLACK);
  textbackground(LIGHTGRAY);
  gotoxy(1, 25);
  cprintf("                                 ");
  textcolor(LIGHTGRAY);
  textbackground(BLUE);
  gotoxy(1, 24);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 23);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 22);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 21);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 20);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 19);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 18);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 17);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 16);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 15);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 14);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 13);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 12);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 11);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 10);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 9);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 8);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 7);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 6);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 5);
  cprintf("                                                                                ");
  delay(5);
  gotoxy(1, 4);
  cprintf("                                                                                ");
  delay(200);
  gotoxy(1, 4);
  textcolor(LIGHTGRAY);
  textbackground(BLUE);
  cprintf("                                                                                ");
  delay(5);
  textcolor(WHITE);
  cprintf("   What do you want the Setup to do?                                            ");
  delay(5);
  textcolor(LIGHTGRAY);
  cprintf("                                                                                ");
  delay(5);
  cprintf("       Make Windows 1.0 run in MS-DOS 6 and above                               ");
  gotoxy(8, 7);
  textcolor(BLUE);
  textbackground(LIGHTGRAY);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  delay(5);
  textcolor(LIGHTGRAY);
  textbackground(BLUE);
  gotoxy(1, 8);
  delay(5);
  cprintf("       Patch Windows 3.1 to run in Real Mode                                    ");
  delay(5);
  cprintf("       Update IO.SYS to run Windows 3.x in MS-DOS 7.1                           ");
  delay(5);
  cprintf("       Patch Windows 9x to boot with more than 1GB RAM                          ");
  delay(5);
  cprintf("       Create an NTLDR Bootsector for Windows 9x                                ");
  delay(5);
  cprintf("       Make Windows 95 dual-boot with Windows 98                                ");
  delay(5);
  cprintf("       Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)   ");
  delay(5);
  cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
  delay(5);
  cprintf("                                                                                ");
  delay(5);
  cprintf("                                                                                ");
  delay(5);
  cprintf("                                                                                ");
  delay(5);
  cprintf("    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch).     ");
  delay(5);
  cprintf("                                                                                ");
  delay(5);
  cprintf("    Use the up and down keys to move the highlight to your choice.              ");
  delay(5);
  cprintf("                                                                                ");
  delay(5);
  cprintf("    When you are ready to continue, press ENTER.                                ");
  delay(5);
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  delay(5);
  cprintf("                                                                                ");
  MultiInstalls();

}

void MultiInstalls() {

  textcolor(BLACK);
  textbackground(LIGHTGRAY);
//  clrscr();
  gotoxy(1, 25);
  cprintf("  ENTER=Continue  F3=Quit");
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
  cprintf("       Make Windows 1.0 run in MS-DOS 6 and above                               ");
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
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  cprintf("                                                                                ");
  numsvar = '2';
  if (colsbar == '1') MultiInsGrp01();
  else if (colsbar == '2') MultiInsGrp02();
  else if (colsbar == '3') MultiInsGrp03();
  else if (colsbar == '4') MultiInsGrp04();
  else if (colsbar == '5') MultiInsGrp05();
  else if (colsbar == '6') MultiInsGrp06();
  else if (colsbar == '7') MultiInsGrp07();
  else if (colsbar == '8') MultiInsGrp08();

}

void MultiInsGrp01() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 14);
  cprintf("Patch NTLDR to boot both Windows NT 3.x and Windows XP");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  colsbar = '1';
  EnterLoopKey4();

}

void MultiInsGrp02() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 7);
  cprintf("Make Windows 1,0 run in MS-DOS 6 and above");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 9);
  cprintf("Update IO.SYS to run Windows 3.x in MS-DOS 7.1");
  colsbar = '2';
  EnterLoopKey4();

}

void MultiInsGrp03() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 9);
  cprintf("Update IO.SYS to run Windows 3.x in MS-DOS 7.1");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 10);
  cprintf("Patch Windows 9x to boot with more than 1GB RAM");
  colsbar = '3';
  EnterLoopKey4();

}

void MultiInsGrp04() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 9);
  cprintf("Update IO.SYS to run Windows 3.x in MS-DOS 7.1");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 10);
  cprintf("Patch Windows 9x to boot with more than 1GB RAM");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 11);
  cprintf("Create an NTLDR Bootsector for Windows 9x");
  colsbar = '4';
  EnterLoopKey4();

}

void MultiInsGrp05() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 10);
  cprintf("Patch Windows 9x to boot with more than 1GB RAM");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 11);
  cprintf("Create an NTLDR Bootsector for Windows 9x");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 12);
  cprintf("Make Windows 95 dual-boot with Windows 98");
  colsbar = '5';
  EnterLoopKey4();

}

void MultiInsGrp06() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 11);
  cprintf("Create an NTLDR Bootsector for Windows 9x");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 12);
  cprintf("Make Windows 95 dual-boot with Windows 98");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  colsbar = '6';
  EnterLoopKey4();

}

void MultiInsGrp07() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 12);
  cprintf("Make Windows 95 dual-boot with Windows 98");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 14);
  cprintf("Patch NTLDR to boot both Windows NT 3.x and Windows XP");
  colsbar = '7';
  EnterLoopKey4();

}

void MultiInsGrp08() {

  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy(8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  textbackground(LIGHTGRAY);
  textcolor(BLUE);
  gotoxy (8, 14);
  cprintf("Patch NTLDR to boot both Windows NT 3.x and Windows XP");
  textbackground(BLUE);
  textcolor(LIGHTGRAY);
  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  colsbar = '8';
  EnterLoopKey4();

}

/*

  Old group and statements
  ------------------------

void EnterLoopKey4() {

  yn13 = '\0';
  yn13 = getch();
  yn13 = tolower(yn13);
  if (yn13 == 13) {

    MultiInstalls();

  }

  else if (yn13 == 'q') {

    numsvar = '2';
    UserQuitCheck();

  }

  else {

    EnterLoopKey4();

  }

}

*/

void EnterLoopKey4() {

  yn13 = getch();
  if (yn13 == 13) MultiInstalls();
  else if (yn13 == 0 || yn13 == 0xE0) { // Execute if the key is a special key

    yn13 = getch();
    if (yn13 == 72) { // Up arrow key

      if (colsbar == '1') MultiInsGrp08();
      else if (colsbar == '2') MultiInsGrp01();
      else if (colsbar == '3') MultiInsGrp02();
      else if (colsbar == '4') MultiInsGrp03();
      else if (colsbar == '5') MultiInsGrp04();
      else if (colsbar == '6') MultiInsGrp05();
      else if (colsbar == '7') MultiInsGrp06();
      else if (colsbar == '8') MultiInsGrp07();

    }

    else if (yn13 == 80) { // Down arrow key

      if (colsbar == '1') MultiInsGrp02();
      else if (colsbar == '2') MultiInsGrp03();
      else if (colsbar == '3') MultiInsGrp04();
      else if (colsbar == '4') MultiInsGrp05();
      else if (colsbar == '5') MultiInsGrp06();
      else if (colsbar == '6') MultiInsGrp07();
      else if (colsbar == '7') MultiInsGrp08();
      else if (colsbar == '8') MultiInsGrp01();

    }

    else if (yn13 == 0x3D) UserQuitCheck();
    else EnterLoopKey4();

  }

  else EnterLoopKey4();

}