#include <stdio.h>
#include <conio.h>

void UpperCase();
void LowerCase();
int yn13;
int crsr;
int main() {

  crsr = '1';
  while(1) {

    if (crsr == '1') UpperCase();
    else if (crsr == '2' && yn13 == 'e') LowerCase();
    else if (crsr == '3' && yn13 == 'e') UpperCase();
    else if (yn13 == 'q') exit(0);

  }

}

void UpperCase() {

  printf("\n PRESS E TO VIEW LOWERCASE LETTERS. PRESS Q TO QUIT.\r\n");
  crsr = '2';
  yn13 = getch();
  yn13 = tolower(yn13);

}

void LowerCase() {

  printf("\n press e to view uppercase letters. press q to quit.\r\n");
  crsr = '3';
  yn13 = getch();
  yn13 = tolower(yn13);

}