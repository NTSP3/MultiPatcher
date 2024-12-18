#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ea();

int main() {

  ea();
  return 0;

}

void ea() {

  int e = system("dir .\util");
  if (e == 0) {

    system("echo correct > ea.txt");

  }

  else {

    system("echo wrong > ea.txt");

  }

  getch();

}