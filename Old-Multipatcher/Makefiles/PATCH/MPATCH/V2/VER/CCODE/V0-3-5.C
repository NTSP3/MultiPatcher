#include <conio.h> // Include Control Input Output Library
#include <stdio.h> // Include Standard Input Output Library

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

 186 = บ
 187 = ป
 188 = ผ
 200 = ศ
 201 = ษ
 205 = อ

*/

/* Void group */
void WelcomeWindow(); // Declare function for later use
void EnterLoopKey1(); // Declare function for later use
void UserQuitCheck(); // Declare function for later use
void LicenseOption(); // Declare function for later use
/* Char group */
char yn13; // Declare variable for later use
/* Integers and main */
int ExitCode; // Declare an integer holder for later use
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
  cprintf("  ENTER=Continue  Q=Exit"); // Print text function + Color options - Needs to be put before main text outputs for control bar at the bottom
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
  cprintf("    To quit the MultiPatcher program, press Q.                                  ");
  cprintf("                                                                                ");
  EnterLoopKey1();

} // Ending of a function

void EnterLoopKey1() {

  yn13 = '\0';
  yn13 = getch(); // Save the key pressed by the user in a variable
  yn13 = tolower(yn13); // Covert the key pressed by the user into it's lower case value
  if (yn13 == 13) { // Run statements if a given condition is true or false

    LicenseOption();

  }

  else if (yn13 == 'q') {

    ExitCode = 1;
    UserQuitCheck();

  }

  else {

    EnterLoopKey1();

  }

}

void UserQuitCheck() {

  gotoxy (14, 12);
  textcolor(RED);
  textbackground(LIGHTGRAY);
  cprintf("bordertest\r\n");
  cprintf("hello");

}

void LicenseOption() {



}








