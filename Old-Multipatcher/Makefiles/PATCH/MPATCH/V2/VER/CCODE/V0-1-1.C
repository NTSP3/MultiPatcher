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

void SetupWindow();

int main() { /* Program starts here */

  SetupWindow(); /* Skip to the first portion of the Setup */
  return 0; /* Exit program and return value 0 (success) to the system */

}


void SetupWindow() {
  /* Beginning of a portion */

  textcolor(LIGHTGRAY);
  textbackground(BLUE);
  clrscr(); /* Clear Screen */
  cprintf("\n MultiPatcher Setup by Wintelic\r"); /* Output text */
  cprintf("\n様様様様様様様様様様様様様様様様\r");

} /* End of a portion */
