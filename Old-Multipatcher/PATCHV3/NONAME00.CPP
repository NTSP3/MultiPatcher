#include <stdio.h>
#include <dos.h>
#include <conio.h>


void executecommand(const char* command) {

  union REGS regs;
  regs.h.ah = 0x4C;
  regs.h.al = 0;
  int86(0x21, &regs, &regs);
  regs.h.ah = 0x48;
  regs.x.dx = (unsigned int)command;
  int86(0x21, &regs, &regs);

}

int main() {

  const char* doscommand = "dir";
  executecommand(doscommand);
  getch();
  return 0;

}
