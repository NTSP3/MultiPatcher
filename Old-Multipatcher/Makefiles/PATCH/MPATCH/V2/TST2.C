#include <stdio.h>
#include <conio.h>

void ea();

int main() {

  ea();
  return 0;

}

void ea() {
  int key;
  key = getch();
  if (key == 0 || key == 0xE0) {

    key = getch();
    if (key == 72) {

      printf("Up arrow!");

    }

    else if (key == 80) {

      printf("Down arrow!");

    }

    else ea();
  }

  else ea();

}