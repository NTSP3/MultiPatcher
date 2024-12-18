#include <stdio.h>
#include <conio.h>
#define shell system

//Last updated: 30th December, 2023;

//The MSE WIN.COM update to Windows 3.1!
//
//Made by novabits (formerly Wintelic) at https://www.youtube.com/@Novabits
//Website: https://wintelic.weebly.com
//Not to be published without permission or unless made open-source.
//Began working on coding MSE WINCOM in 30th Dec, 2023 at 10:45am.

//Uses ALTKEY 222 for Þ

const int build = 12;
char parameter[100];
int enhance;
int argpl;
int cbar;
int i;

void lnclr() {

  gotoxy(1, 1);
  textbackground(BLACK);
  clreol();
  gotoxy(1, 2);
  clreol();
  gotoxy(1, 1);
  printf("Loading files.");
  cbar = cbar + 1;
  gotoxy(cbar, 23);
  textbackground(LIGHTGRAY);
  cprintf(" ");
  delay(1);
  cprintf(" ");
  delay(1);
  cprintf(" ");
  delay(1);
  cprintf(" ");
  delay(1);
  cprintf(" ");
  delay(1);
  cbar = cbar + 4;
  gotoxy(1, 1);
  textbackground(BLACK);

}

int main(int argc, char* argv[]) {

  _setcursortype(_NOCURSOR);

  i = 1;

  while (i < argc) {

    if (strcmp(argv[i], "/?") == 0) {

      printf("\r\n         An MSE MultiPatcher program.\r\n");
      printf("  Windows 3.1 win.com update: RM/386 Swapper\r\n");
      printf("  --------------------------------------------\r\n\n");
      printf("  Syntax: WIN.COM [/r] [/386] [other commands]\r\n\n");
      printf("  /r   = Loads Windows 3.1 in Real mode\r\n");
      printf("  /386 = Loads Windows 3.1 in Protected mode\r\n\n");
      printf("  Any other parameter gets passed down to the Windows loaders.\r\n");
      _setcursortype(_NORMALCURSOR);
      return 0;

    }

    i = i + 1;

  }

  textbackground(BLACK);
  clrscr();
  gotoxy(1, 1);
  printf("Loading");
  argpl = 7927;
  enhance = 7927;
  delay(225);
  gotoxy(26, 25);
  printf("MSE RM/386 Swapper build %d", build);
  gotoxy(28, 22);
  delay(50);
  printf("Starting Windows 3.1...");
  gotoxy(1, 23);
  i = 0;

  while (i != 80) {

    i = i + 1;
    gotoxy(i, 23);
    printf("Þ");

  }

  i = 0;

  delay(200);
  gotoxy(1, 1);
  clreol();
  printf("Locating parameters");
  i = 1;

  while (i < argc) {

    if (strcmp(argv[i], "/386") == 0) {

      enhance = 1;
      argpl = i;
      break;

    }

    else if (strcmp(argv[i], "/r") == 0 || strcmp(argv[i], "/R") == 0) {

      enhance = 0;
      argpl = i;
      break;

    }

    else {

      i = i + 1;
      enhance = 1;

    }

  }

  i = 0;

  if (enhance == 7927) {

    enhance = 1;

  }

  delay(13);
  gotoxy(1, 23);
  textbackground(LIGHTGRAY);
  cprintf(" ");
  cbar = 1;
  delay(13);
  cprintf(" ");
  cbar = cbar + 1;
  delay(13);
  remove(".\\progman.bak");
  remove(".\\system.bak");
  remove(".\\control.bak");
  remove(".\\system\\kernel.bak");
  remove(".\\system\\dosswap.bak");
  remove(".\\system\\gdi.bak");
  remove(".\\system\\user.bak");
  remove(".\\system\\shell.bak");
  remove(".\\system\\commdlg.bak");
  remove(".\\system\\system.bak");
  remove(".\\system\\keyboard.bak");
  remove(".\\system\\comm.bak");
  remove(".\\system\\sound.bak");
  remove(".\\system\\mouse.bak");
  rename(".\\progman.exe", ".\\progman.bak");
  rename(".\\system.exe", ".\\system.bak");
  rename(".\\control.exe", ".\\control.bak");
  rename(".\\system\\kernel.exe", ".\\system\\kernel.bak");
  rename(".\\system\\dosswap.exe", ".\\system\\dosswap.bak");
  rename(".\\system\\gdi.exe", ".\\system\\gdi.bak");
  rename(".\\system\\user.exe", ".\\system\\user.bak");
  rename(".\\system\\shell.dll", ".\\system\\shell.bak");
  rename(".\\system\\commdlg.dll", ".\\system\\commdlg.bak");
  rename(".\\system\\system.drv", ".\\system\\system.bak");
  rename(".\\system\\keyboard.drv", ".\\system\\keyboard.bak");
  rename(".\\system\\comm.drv", ".\\system\\comm.bak");
  rename(".\\system\\sound.drv", ".\\system\\sound.bak");
  rename(".\\system\\mouse.drv", ".\\system\\mouse.bak");

  if (enhance == 1) {

    gotoxy(21, 22);
    printf("Starting Windows 3.1 in Protected mode");
    gotoxy(1, 1);
    shell("copy .\\mse\\promode\\progman.exe .\\progman.exe");
    lnclr();
    shell("copy .\\mse\\promode\\system.ini .\\system.ini");
    lnclr();
    shell("copy .\\mse\\promode\\control.exe .\\control.exe");
    lnclr();
    shell("copy .\\mse\\promode\\kernel.exe .\\system\\kernel.exe");
    lnclr();
    shell("copy .\\mse\\promode\\dosswap.exe .\\system\\dosswap.exe");
    lnclr();
    shell("copy .\\mse\\promode\\gdi.exe .\\system\\gdi.exe");
    lnclr();
    shell("copy .\\mse\\promode\\user.exe .\\system\\user.exe");
    lnclr();
    shell("copy .\\mse\\promode\\shell.dll .\\system\\shell.dll");
    lnclr();
    shell("copy .\\mse\\promode\\commdlg.dll .\\system\\commdlg.dll");
    lnclr();
    shell("copy .\\mse\\promode\\system.drv .\\system\\system.drv");
    lnclr();
    shell("copy .\\mse\\promode\\keyboard.drv .\\system\\keyboard.drv");
    lnclr();
    shell("copy .\\mse\\promode\\comm.drv .\\system\\comm.drv");
    lnclr();
    shell("copy .\\mse\\promode\\sound.drv .\\system\\sound.drv");
    lnclr();
    shell("copy .\\mse\\promode\\mouse.drv .\\system\\mouse.drv");
    lnclr();
    parameter[0] = '\0';

    if (argc > 1) {

      if (argpl == 7927) {

        i = 1;

        while (i < argc) {

          sprintf(parameter + strlen(parameter), "%s ", argv[i]);
          i = i + 1;

        }

      }

      else {

        i = 1;

        while (i < argc) {

          if (i == argpl) {

            i = i + 1;
            continue;

          }

          sprintf(parameter + strlen(parameter), "%s ", argv[i]);
          i = i + 1;

        }

      }

    }

    gotoxy(1, 1);
    clreol();
    printf("Starting Windows");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 10) {

      i = i + 1;
      gotoxy(i + 70, 23);
      cprintf(" ");
      delay(1);

    }

    gotoxy(1, 1);
    textbackground(BLACK);
    delay(255);
    clrscr();
    shell(".\\prowin.com");
    clrscr();
    gotoxy(1, 1);
    printf("Saving settings");
    delay(100);
    remove(".\\promode\\system.bak");
    rename(".\\promode\\system.ini", ".\\promode\\system.bak");
    gotoxy(1, 1);
    shell("copy .\\system.ini .\\promode\\system.ini");
    gotoxy(1, 1);
    clrscr();

  }

  else if (enhance == 0) {

    gotoxy(24, 22);
    printf("Starting Windows 3.1 in Real mode");
    gotoxy(1, 1);
    shell("copy .\\mse\\winx16\\progman.exe .\\progman.exe");
    lnclr();
    shell("copy .\\mse\\winx16\\system.ini .\\system.ini");
    lnclr();
    shell("copy .\\mse\\winx16\\control.exe .\\control.exe");
    lnclr();
    shell("copy .\\mse\\winx16\\kernel.exe .\\system\\kernel.exe");
    lnclr();
    shell("copy .\\mse\\winx16\\dosswap.exe .\\system\\dosswap.exe");
    lnclr();
    shell("copy .\\mse\\winx16\\gdi.exe .\\system\\gdi.exe");
    lnclr();
    shell("copy .\\mse\\winx16\\user.exe .\\system\\user.exe");
    lnclr();
    shell("copy .\\mse\\winx16\\shell.dll .\\system\\shell.dll");
    lnclr();
    shell("copy .\\mse\\winx16\\commdlg.dll .\\system\\commdlg.dll");
    lnclr();
    shell("copy .\\mse\\winx16\\system.drv .\\system\\system.drv");
    lnclr();
    shell("copy .\\mse\\winx16\\keyboard.drv .\\system\\keyboard.drv");
    lnclr();
    shell("copy .\\mse\\winx16\\comm.drv .\\system\\comm.drv");
    lnclr();
    shell("copy .\\mse\\winx16\\sound.drv .\\system\\sound.drv");
    lnclr();
    shell("copy .\\mse\\winx16\\mouse.drv .\\system\\mouse.drv");
    lnclr();
    parameter[0] = '\0';

    if (argc > 1) {

      if (argpl == 7927) {

        i = 1;

        while (i < argc) {

          sprintf(parameter + strlen(parameter), "%s ", argv[i]);
          i = i + 1;

        }

      }

      else {

        i = 1;

        while (i < argc) {

          if (i == argpl) {

            i = i + 1;
            continue;

          }

          sprintf(parameter + strlen(parameter), "%s ", argv[i]);
          i = i + 1;

        }

      }

    }

    gotoxy(1, 1);
    clreol();
    printf("Starting Windows");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 10) {

      i = i + 1;
      gotoxy(i + 70, 23);
      cprintf(" ");
      delay(1);

    }

    gotoxy(1, 1);
    textbackground(BLACK);
    delay(255);
    clrscr();
    shell(".\\win16.com");
    clrscr();
    gotoxy(1, 1);
    printf("Saving settings");
    delay(100);
    remove(".\\winx16\\system.bak");
    rename(".\\winx16\\system.ini", ".\\winx16\\system.bak");
    gotoxy(1, 1);
    shell("copy .\\system.ini .\\winx16\\system.ini");
    gotoxy(1, 1);
    clrscr();

  }

  _setcursortype(_NORMALCURSOR);
  return 0;

}


























