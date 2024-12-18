#include <conio.h>
#include <stdio.h>

void MultiInstalls();
void MultiInsGrp01();
void MultiInsGrp02();
void EnterLoopKey4();

char cBar;
char yn13;

int main() {

  clrscr();
  MultiInstalls();
  return 0;

}

void MultiInstalls() {

  printf("Welcome to my debug program!\r\n");
  printf("Now checking...\r\n");
  if (cBar == '1') MultiInsGrp01();
  else if (cBar == '2') MultiInsGrp02();
  else {

    cBar = '1';
    MultiInstalls();

  }

}

void MultiInsGrp01() {

  printf("Now you are in Group 1!\r\n");
  printf("Setting cBar as 1\r\n");
  cBar = '1';
  printf("Done.\r\n");
  EnterLoopKey4();

}

void MultiInsGrp02() {

  printf("Now you are in Group 2!\r\n");
  printf("Setting cBar as 2\r\n");
  cBar = '2';
  EnterLoopKey4();

}

void EnterLoopKey4() {

  printf("You are now in EnterLoopKey4 group.\r\n\n");
  printf("Press keys - F3, UP, DOWN, OR ENTER (ENTER = QUIT)\r\n");
  yn13 = getch();
  printf("Now checking...\r\n");

  if (yn13 == 13) {

    printf("\nYou pressed the ENTER key! Now quitting...\r\n");
    exit(0);

  }

  else if (yn13 == 0 || yn13 == 0xE0) {

    printf("\nYou pressed a special key! Now checking...\r\n");
    yn13 = getch();

    if (yn13 == 0x3D) {

      printf("\nYou pressed the F3 key! Now going to EnterLoopKey4 again.\r\n\n");
      EnterLoopKey4();

    }


    if (yn13 == 72) {

      printf("You pressed the UP arrow key! Now going to EnterLoopKey4 again.\r\n\n");
      EnterLoopKey4();

    }

    else if (yn13 == 80) {

      printf("You pressed the DOWN arrow key! Now going to EnterLoopKey4 again.\r\n\n");
      EnterLoopKey4();

    }

    else {

      printf("You pressed a special key that isn't the up or down arrow keys!\n");
      printf("Now going to EnterLoopKey4 again.\r\n\n");
      EnterLoopKey4();

    }

  }

  else {

    printf("You pressed an invalid key! Now going to EnterLoopKey4 again.\r\n\n");
    EnterLoopKey4();

  }

}