#include <stdio.h>
#include <conio.h>

int main() {
  int key;
  while (1) {
    if (kbhit()) {
      key = getch();
      if (key == 0x3D) {
	textbackground(LIGHTGRAY);
	textcolor(RED);
	cprintf("F3 key Í is pressed!\n");
	break;
      }
    }
  }
  return 0;
}