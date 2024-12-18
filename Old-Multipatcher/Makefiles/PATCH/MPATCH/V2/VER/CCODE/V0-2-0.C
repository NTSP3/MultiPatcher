#include <conio.h> /* Include Control Input Output Library */
#include <stdio.h> /* Include Standard Input Output Library */

/* Help */
/* = A comment */
/* Groups begin with a void statement. */
/* Use the group's name to go to that group. */
/* This code is (probably) C. */
/* int main is where the code begins executing. */
/* To end this program, use return 0. */
/* Print statements: printf = Output text, cprintf = Colored Output Text */
/* Each command has to end with a semi-colon ';' to tell the compiler that that's the end. */
/* Most commands need () at the end of the COMMAND, even if there is nothing to write. */

/* Available Colors */
/* ---------------- */
/*                  */
/* BLACK            */
/* BLUE             */
/* GREEN            */
/* CYAN             */
/* RED              */
/* MAGENTA          */
/* BROWN            */
/* LIGHTGRAY        */
/* DARKGRAY         */
/* LIGHTBLUE        */
/* LIGHTGREEN       */
/* LIGHTCYAN        */
/* LIGHTRED         */
/* LIGHTMAGENTA     */
/* YELLOW           */
/* WHITE            */

void SetupWindow();

int main() {
  /* Program starts here */


  SetupWindow();
    /* Skip to the first portion of the Setup */

  return 0;
    /* Exit program and return value 0 (success) to the system */


}

void SetupWindow() {
  /* Beginning of a portion */


  textcolor(LIGHTGRAY);
    /* Change Text Color */

  textbackground(BLUE);
    /* Change Background Color */

  clrscr();
    /* Clear Screen */

  cprintf("\n MultiPatcher by LoopKeyyX2\r\n"); /* Output text */
  cprintf("様様様様様様様様様様様様様様\r\n\n");
  textcolor(WHITE);
  cprintf("   Welcome to Setup.\r\n\n");
  textcolor(LIGHTGRAY);
  cprintf("    The Setup program for the MultiPatcher version 1.0 patches some files\r\n");
  cprintf("    to successfully boot one OS alongside another with ease.\r\n\n");
  textcolor(CYAN);
  cprintf("    Info: Existing versions of certain Windows files will be backed up with\r\n");
  cprintf("    the extension .BAK. If a file with the .BAK extension exist,\r\n");
  cprintf("    the file with the .BAK extension will be deleted.\r\n\n");
  textcolor(RED);
  cprintf("    Notice: Make sure that you are running this program without modifications.\r\n");
  cprintf("            I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!\r\n\n");
  textcolor(GREEN);
  cprintf("    It is advised to make a backup of your files and installation.\r\n\n");
  textcolor(LIGHTGRAY);
  cprintf("    When you are ready to continue, press ENTER.\r\n");
  cprintf("    To quit the MultiPatcher program, press F3.\r\n");

}
/* End of a portion */
