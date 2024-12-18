#include <conio.h>
#include <stdio.h>


int main() {

int key;

printf("Press the up arrow key");
while (1) {

  key = bioskey(0);
  if ((key & 0xFFFF) == 0x4800) {
    printf("Great");
    break;
  }
}
}