#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <dir.h>

#define shell system

//Last updated: 2nd January, 2024;

//The MultiBoot System Essentials (MSE)/MultiPatcher!
//
//Made by novabits (formerly Wintelic) at https://www.youtube.com/@Novabits
//Website: https://wintelic.weebly.com
//Not to be published without permission or unless made open-source.
//Began working on coding MSE in 19th Dec, 2023 at around 11:00am.

//The code at QuitAnimation section looks very silly. This is because I wrote
//that part of code before I learned more C and while loops (those code were
//made before NTP4.0) but it works and I didn't want to spend my time
//re-writing it.

/*
   Alt key codes used in this program
   ----------------------------------

   24 = up arrow key
   25 = down arrow key
   176 = °
   177 = ±
   178  =²
   179 = ³
   182 = ¶
   186 = ÷
   187 = »
   188 = ¼
   196 = ִ
   199 = ַ
   200 = ָ
   201 = ֹ
   205 = ֽ
   220 = Ü
   221 = Ý
   222 = Þ
   223 = ß
   249 = ש
   250 = ת

*/

FILE *file;

const int ver = 1; //MSE major ver
const int sver = 0; //MSE minor ver
const int ydate = 2024; //Compiled Year
const int mdate = 1; //Compileed Month
const int ddate = 2; //Compiled Date
const int build = 100; //Build number
char ctemp[100]; //Character temp 1
char ctmp2[50]; //Character temp 2
char ltkey; //Get the key pressed
int Error = 0; //Alert error
int cbar = 0; //User choice
int i = 0; //Count number #1
int n = 0; //Count number #2

char WinPath[49] = "C:\\WINDOWS"; //Windows Path
char OutPath[49] = "C:\\"; //Output Path

char C1T2Path[49] = "C:\\CONFIG.SYS"; //Choice 1 Tab 2 Path
char C3T2Path[4] = "SYS"; //Choice 3 Tab 2 Extension
char DOSVer[20] = "Included"; //Choice 3 MS-DOS Ver

int tKey = 0; //CHOICE 1 & 3 User TAB

int fsCheck(char *filename) {

  struct ffblk ffblk;

  if(findfirst(filename, &ffblk, 0) == 0) {

    return 1;

  }

  return 0;

}

int UserChoice() {

  first:
    if (cbar == 1) {

      gotoxy(8, 7);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);
      cprintf("Make Windows 1.0 run in MS-DOS 6 and above");

    }

    else if (cbar == 2) {

      gotoxy(8, 8);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);
      cprintf("Patch Windows 3.1 to run in Real mode (Experimental-Risk)");

    }

    else if (cbar == 3) {

      gotoxy(8, 9);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);
      cprintf("Create an NTLDR Bootsector for Windows 9x");
      //cprintf("Boot Windows 9x with more than 512MB RAM");

    }

    else if (cbar == 4) {

      gotoxy(8, 10);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);
      cprintf("Update Windows NT 4.0 IDE driver (Experimental-Risk)");

    }

    else if (cbar == 5) {

      gotoxy(8, 11);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);
      cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
      //cprintf("Make Windows 95 dual-boot with Windows 98 (Experimental)");

    }

    /*else if (cbar == 6) {

      gotoxy(8, 12);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);


    }

    else if (cbar == 7) {

      gotoxy(8, 13);
      textbackground(LIGHTGRAY);
      textcolor(BLUE);


    }*/

  Ch2: //Choice 2
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0x3D) {

      ltkey = '\0';
      return 1;

    }

    else if (ltkey == 13 || ltkey == 10) {

      return 2;

    }

    else if (ltkey == 72) {

      if (cbar == 1) {

        gotoxy(8, 7);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
        gotoxy(8, 11);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
        cbar = 5;
        goto Ch2;

      }

      else if (cbar == 2) {

        gotoxy(8, 8);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Patch Windows 3.1 to run in Real mode (Experimental-Risk)");
        gotoxy(8, 7);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
        cbar = 1;
        goto Ch2;

      }

      else if (cbar == 3) {

        gotoxy(8, 9);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Create an NTLDR Bootsector for Windows 9x");
        gotoxy(8, 8);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Patch Windows 3.1 to run in Real mode (Experimental-Risk)");
        cbar = 2;
        goto Ch2;

      }

      else if (cbar == 4) {

        gotoxy(8, 10);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Update Windows NT 4.0 IDE driver (Experimental-Risk)");
        gotoxy(8, 9);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Create an NTLDR Bootsector for Windows 9x");
        cbar = 3;
        goto Ch2;

      }

      else if (cbar == 5) {

        gotoxy(8, 11);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
        gotoxy(8, 10);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Update Windows NT 4.0 IDE driver (Experimental-Risk)");
        cbar = 4;
        goto Ch2;

      }

      /*else if (cbar == 6) {

        gotoxy(8, 12);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
        gotoxy(8, 11);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Update Windows NT 4.0 IDE driver (Experimental-Risk)");
        cbar = 5;
        goto Ch2;

      }*/

    }

    else if (ltkey == 80) {

      if (cbar == 1) {

        gotoxy(8, 7);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
        gotoxy(8, 8);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Patch Windows 3.1 to run in Real mode (Experimental-Risk)");
        cbar = 2;
        goto Ch2;

      }

      else if (cbar == 2) {

        gotoxy(8, 8);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Patch Windows 3.1 to run in Real mode (Experimental-Risk)");
        gotoxy(8, 9);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Create an NTLDR Bootsector for Windows 9x");
        cbar = 3;
        goto Ch2;

      }

      else if (cbar == 3) {

        gotoxy(8, 9);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Create an NTLDR Bootsector for Windows 9x");
        gotoxy(8, 10);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Update Windows NT 4.0 IDE driver (Experimental-Risk)");
        cbar = 4;
        goto Ch2;

      }

      else if (cbar == 4) {

        gotoxy(8, 10);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Update Windows NT 4.0 IDE driver (Experimental-Risk)");
        gotoxy(8, 11);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
        cbar = 5;
        goto Ch2;

      }

      else if (cbar == 5) {

        gotoxy(8, 11);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
        gotoxy(8, 7);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
        cbar = 1;
        goto Ch2;

      }

      /*else if (cbar == 6) {

        gotoxy(8, 12);
        textbackground(BLUE);
        textcolor(LIGHTGRAY);
        cprintf("Patch NTLDR using NTPatcher (Requires Windows XP or NT Version 5.1)");
        gotoxy(8, 7);
        textbackground(LIGHTGRAY);
        textcolor(BLUE);
        cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
        cbar = 1;
        goto Ch2;

      }*/

    }

    else {

      goto Ch2;

    }

  return 0;

}

void QuitAnimation(int screen) {

  if (screen == 7927) {

    goto bSkip;

  }

  textbackground(LIGHTGRAY);
  gotoxy (1, 25);
  cprintf("                                                                               ");
  gotoxy(40, 11);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(41, 12);
  cprintf("  ");
  delay(20);
  textbackground(LIGHTGRAY);
  gotoxy(40, 10);
  cprintf(" ");
  gotoxy(40, 12);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(41, 11);
  cprintf("  ");
  gotoxy(41, 13);
  cprintf("  ");
  delay(20);
  textbackground(LIGHTGRAY);
  gotoxy(40, 9);
  cprintf(" ");
  gotoxy(40, 13);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(41, 10);
  cprintf("  ");
  gotoxy(41, 14);
  cprintf("  ");
  delay(20);
  textbackground(LIGHTGRAY);
  gotoxy(40, 8);
  cprintf(" ");
  gotoxy(40, 14);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(41, 9);
  cprintf("  ");
  gotoxy(41, 15);
  cprintf("  ");
  delay(20);
  textbackground(LIGHTGRAY);
  gotoxy(40, 7);
  cprintf(" ");
  gotoxy(40, 15);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(41, 8);
  cprintf("  ");
  gotoxy(41, 16);
  cprintf("  ");
  delay(20);
  textbackground(LIGHTGRAY);
  gotoxy(40, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(41, 17);
  cprintf("  ");
  delay(20);
  textbackground(LIGHTGRAY);
  gotoxy(41, 11);
  cprintf(" ");
  gotoxy(41, 10);
  cprintf(" ");
  gotoxy(41, 12);
  cprintf(" ");
  gotoxy(41, 9);
  cprintf(" ");
  gotoxy(41, 13);
  cprintf(" ");
  gotoxy(41, 8);
  cprintf(" ");
  gotoxy(41, 14);
  cprintf(" ");
  gotoxy(41, 7);
  cprintf(" ");
  gotoxy(41, 15);
  cprintf(" ");
  gotoxy(41, 16);
  cprintf(" ");
  gotoxy(39, 11);
  cprintf(" ");
  gotoxy(39, 10);
  cprintf(" ");
  gotoxy(39, 12);
  cprintf(" ");
  gotoxy(39, 9);
  cprintf(" ");
  gotoxy(39, 13);
  cprintf(" ");
  gotoxy(39, 8);
  cprintf(" ");
  gotoxy(39, 14);
  cprintf(" ");
  gotoxy(39, 7);
  cprintf(" ");
  gotoxy(39, 15);
  cprintf(" ");
  gotoxy(39, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(42, 12);
  cprintf("  ");
  gotoxy(42, 11);
  cprintf("  ");
  gotoxy(42, 13);
  cprintf("  ");
  gotoxy(42, 10);
  cprintf("  ");
  gotoxy(42, 14);
  cprintf("  ");
  gotoxy(42, 9);
  cprintf("  ");
  gotoxy(42, 15);
  cprintf("  ");
  gotoxy(42, 8);
  cprintf("  ");
  gotoxy(42, 16);
  cprintf("  ");
  gotoxy(42, 17);
  cprintf("  ");
  gotoxy(40, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(42, 11);
  cprintf(" ");
  gotoxy(42, 10);
  cprintf(" ");
  gotoxy(42, 12);
  cprintf(" ");
  gotoxy(42, 9);
  cprintf(" ");
  gotoxy(42, 13);
  cprintf(" ");
  gotoxy(42, 8);
  cprintf(" ");
  gotoxy(42, 14);
  cprintf(" ");
  gotoxy(42, 7);
  cprintf(" ");
  gotoxy(42, 15);
  cprintf(" ");
  gotoxy(42, 16);
  cprintf(" ");
  gotoxy(38, 11);
  cprintf(" ");
  gotoxy(38, 10);
  cprintf(" ");
  gotoxy(38, 12);
  cprintf(" ");
  gotoxy(38, 9);
  cprintf(" ");
  gotoxy(38, 13);
  cprintf(" ");
  gotoxy(38, 8);
  cprintf(" ");
  gotoxy(38, 14);
  cprintf(" ");
  gotoxy(38, 7);
  cprintf(" ");
  gotoxy(38, 15);
  cprintf(" ");
  gotoxy(38, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(43, 12);
  cprintf("  ");
  gotoxy(43, 11);
  cprintf("  ");
  gotoxy(43, 13);
  cprintf("  ");
  gotoxy(43, 10);
  cprintf("  ");
  gotoxy(43, 14);
  cprintf("  ");
  gotoxy(43, 9);
  cprintf("  ");
  gotoxy(43, 15);
  cprintf("  ");
  gotoxy(43, 8);
  cprintf("  ");
  gotoxy(43, 16);
  cprintf("  ");
  gotoxy(43, 17);
  cprintf("  ");
  gotoxy(39, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(43, 11);
  cprintf(" ");
  gotoxy(43, 10);
  cprintf(" ");
  gotoxy(43, 12);
  cprintf(" ");
  gotoxy(43, 9);
  cprintf(" ");
  gotoxy(43, 13);
  cprintf(" ");
  gotoxy(43, 8);
  cprintf(" ");
  gotoxy(43, 14);
  cprintf(" ");
  gotoxy(43, 7);
  cprintf(" ");
  gotoxy(43, 15);
  cprintf(" ");
  gotoxy(43, 16);
  cprintf(" ");
  gotoxy(37, 11);
  cprintf(" ");
  gotoxy(37, 10);
  cprintf(" ");
  gotoxy(37, 12);
  cprintf(" ");
  gotoxy(37, 9);
  cprintf(" ");
  gotoxy(37, 13);
  cprintf(" ");
  gotoxy(37, 8);
  cprintf(" ");
  gotoxy(37, 14);
  cprintf(" ");
  gotoxy(37, 7);
  cprintf(" ");
  gotoxy(37, 15);
  cprintf(" ");
  gotoxy(37, 16);
  cprintf(" ");
  delay(10);
  textbackground(BLACK);
  gotoxy(44, 12);
  cprintf("  ");
  gotoxy(44, 11);
  cprintf("  ");
  gotoxy(44, 13);
  cprintf("  ");
  gotoxy(44, 10);
  cprintf("  ");
  gotoxy(44, 14);
  cprintf("  ");
  gotoxy(44, 9);
  cprintf("  ");
  gotoxy(44, 15);
  cprintf("  ");
  gotoxy(44, 8);
  cprintf("  ");
  gotoxy(44, 16);
  cprintf("  ");
  gotoxy(44, 17);
  cprintf("  ");
  gotoxy(38, 17);
  cprintf(" ");
  textbackground(LIGHTGRAY);
  gotoxy(44, 11);
  cprintf(" ");
  gotoxy(44, 10);
  cprintf(" ");
  gotoxy(44, 12);
  cprintf(" ");
  gotoxy(44, 9);
  cprintf(" ");
  gotoxy(44, 13);
  cprintf(" ");
  gotoxy(44, 8);
  cprintf(" ");
  gotoxy(44, 14);
  cprintf(" ");
  gotoxy(44, 7);
  cprintf(" ");
  gotoxy(44, 15);
  cprintf(" ");
  gotoxy(44, 16);
  cprintf(" ");
  gotoxy(36, 11);
  cprintf(" ");
  gotoxy(36, 10);
  cprintf(" ");
  gotoxy(36, 12);
  cprintf(" ");
  gotoxy(36, 9);
  cprintf(" ");
  gotoxy(36, 13);
  cprintf(" ");
  gotoxy(36, 8);
  cprintf(" ");
  gotoxy(36, 14);
  cprintf(" ");
  gotoxy(36, 7);
  cprintf(" ");
  gotoxy(36, 15);
  cprintf(" ");
  gotoxy(36, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(45, 12);
  cprintf("  ");
  gotoxy(45, 11);
  cprintf("  ");
  gotoxy(45, 13);
  cprintf("  ");
  gotoxy(45, 10);
  cprintf("  ");
  gotoxy(45, 14);
  cprintf("  ");
  gotoxy(45, 9);
  cprintf("  ");
  gotoxy(45, 15);
  cprintf("  ");
  gotoxy(45, 8);
  cprintf("  ");
  gotoxy(45, 16);
  cprintf("  ");
  gotoxy(45, 17);
  cprintf("  ");
  gotoxy(37, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(45, 11);
  cprintf(" ");
  gotoxy(45, 10);
  cprintf(" ");
  gotoxy(45, 12);
  cprintf(" ");
  gotoxy(45, 9);
  cprintf(" ");
  gotoxy(45, 13);
  cprintf(" ");
  gotoxy(45, 8);
  cprintf(" ");
  gotoxy(45, 14);
  cprintf(" ");
  gotoxy(45, 7);
  cprintf(" ");
  gotoxy(45, 15);
  cprintf(" ");
  gotoxy(45, 16);
  cprintf(" ");
  gotoxy(35, 11);
  cprintf(" ");
  gotoxy(35, 10);
  cprintf(" ");
  gotoxy(35, 12);
  cprintf(" ");
  gotoxy(35, 9);
  cprintf(" ");
  gotoxy(35, 13);
  cprintf(" ");
  gotoxy(35, 8);
  cprintf(" ");
  gotoxy(35, 14);
  cprintf(" ");
  gotoxy(35, 7);
  cprintf(" ");
  gotoxy(35, 15);
  cprintf(" ");
  gotoxy(35, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(46, 12);
  cprintf("  ");
  gotoxy(46, 11);
  cprintf("  ");
  gotoxy(46, 13);
  cprintf("  ");
  gotoxy(46, 10);
  cprintf("  ");
  gotoxy(46, 14);
  cprintf("  ");
  gotoxy(46, 9);
  cprintf("  ");
  gotoxy(46, 15);
  cprintf("  ");
  gotoxy(46, 8);
  cprintf("  ");
  gotoxy(46, 16);
  cprintf("  ");
  gotoxy(46, 17);
  cprintf("  ");
  gotoxy(36, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(46, 11);
  cprintf(" ");
  gotoxy(46, 10);
  cprintf(" ");
  gotoxy(46, 12);
  cprintf(" ");
  gotoxy(46, 9);
  cprintf(" ");
  gotoxy(46, 13);
  cprintf(" ");
  gotoxy(46, 8);
  cprintf(" ");
  gotoxy(46, 14);
  cprintf(" ");
  gotoxy(46, 7);
  cprintf(" ");
  gotoxy(46, 15);
  cprintf(" ");
  gotoxy(46, 16);
  cprintf(" ");
  gotoxy(34, 11);
  cprintf(" ");
  gotoxy(34, 10);
  cprintf(" ");
  gotoxy(34, 12);
  cprintf(" ");
  gotoxy(34, 9);
  cprintf(" ");
  gotoxy(34, 13);
  cprintf(" ");
  gotoxy(34, 8);
  cprintf(" ");
  gotoxy(34, 14);
  cprintf(" ");
  gotoxy(34, 7);
  cprintf(" ");
  gotoxy(34, 15);
  cprintf(" ");
  gotoxy(34, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(47, 12);
  cprintf("  ");
  gotoxy(47, 11);
  cprintf("  ");
  gotoxy(47, 13);
  cprintf("  ");
  gotoxy(47, 10);
  cprintf("  ");
  gotoxy(47, 14);
  cprintf("  ");
  gotoxy(47, 9);
  cprintf("  ");
  gotoxy(47, 15);
  cprintf("  ");
  gotoxy(47, 8);
  cprintf("  ");
  gotoxy(47, 16);
  cprintf("  ");
  gotoxy(47, 17);
  cprintf("  ");
  gotoxy(35, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(47, 11);
  cprintf(" ");
  gotoxy(47, 10);
  cprintf(" ");
  gotoxy(47, 12);
  cprintf(" ");
  gotoxy(47, 9);
  cprintf(" ");
  gotoxy(47, 13);
  cprintf(" ");
  gotoxy(47, 8);
  cprintf(" ");
  gotoxy(47, 14);
  cprintf(" ");
  gotoxy(47, 7);
  cprintf(" ");
  gotoxy(47, 15);
  cprintf(" ");
  gotoxy(47, 16);
  cprintf(" ");
  gotoxy(33, 11);
  cprintf(" ");
  gotoxy(33, 10);
  cprintf(" ");
  gotoxy(33, 12);
  cprintf(" ");
  gotoxy(33, 9);
  cprintf(" ");
  gotoxy(33, 13);
  cprintf(" ");
  gotoxy(33, 8);
  cprintf(" ");
  gotoxy(33, 14);
  cprintf(" ");
  gotoxy(33, 7);
  cprintf(" ");
  gotoxy(33, 15);
  cprintf(" ");
  gotoxy(33, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(48, 12);
  cprintf("  ");
  gotoxy(48, 11);
  cprintf("  ");
  gotoxy(48, 13);
  cprintf("  ");
  gotoxy(48, 10);
  cprintf("  ");
  gotoxy(48, 14);
  cprintf("  ");
  gotoxy(48, 9);
  cprintf("  ");
  gotoxy(48, 15);
  cprintf("  ");
  gotoxy(48, 8);
  cprintf("  ");
  gotoxy(48, 16);
  cprintf("  ");
  gotoxy(48, 17);
  cprintf("  ");
  gotoxy(34, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(48, 11);
  cprintf(" ");
  gotoxy(48, 10);
  cprintf(" ");
  gotoxy(48, 12);
  cprintf(" ");
  gotoxy(48, 9);
  cprintf(" ");
  gotoxy(48, 13);
  cprintf(" ");
  gotoxy(48, 8);
  cprintf(" ");
  gotoxy(48, 14);
  cprintf(" ");
  gotoxy(48, 7);
  cprintf(" ");
  gotoxy(48, 15);
  cprintf(" ");
  gotoxy(48, 16);
  cprintf(" ");
  gotoxy(32, 11);
  cprintf(" ");
  gotoxy(32, 10);
  cprintf(" ");
  gotoxy(32, 12);
  cprintf(" ");
  gotoxy(32, 9);
  cprintf(" ");
  gotoxy(32, 13);
  cprintf(" ");
  gotoxy(32, 8);
  cprintf(" ");
  gotoxy(32, 14);
  cprintf(" ");
  gotoxy(32, 7);
  cprintf(" ");
  gotoxy(32, 15);
  cprintf(" ");
  gotoxy(32, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(49, 12);
  cprintf("  ");
  gotoxy(49, 11);
  cprintf("  ");
  gotoxy(49, 13);
  cprintf("  ");
  gotoxy(49, 10);
  cprintf("  ");
  gotoxy(49, 14);
  cprintf("  ");
  gotoxy(49, 9);
  cprintf("  ");
  gotoxy(49, 15);
  cprintf("  ");
  gotoxy(49, 8);
  cprintf("  ");
  gotoxy(49, 16);
  cprintf("  ");
  gotoxy(49, 17);
  cprintf("  ");
  gotoxy(33, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(49, 11);
  cprintf(" ");
  gotoxy(49, 10);
  cprintf(" ");
  gotoxy(49, 12);
  cprintf(" ");
  gotoxy(49, 9);
  cprintf(" ");
  gotoxy(49, 13);
  cprintf(" ");
  gotoxy(49, 8);
  cprintf(" ");
  gotoxy(49, 14);
  cprintf(" ");
  gotoxy(49, 7);
  cprintf(" ");
  gotoxy(49, 15);
  cprintf(" ");
  gotoxy(49, 16);
  cprintf(" ");
  gotoxy(31, 11);
  cprintf(" ");
  gotoxy(31, 10);
  cprintf(" ");
  gotoxy(31, 12);
  cprintf(" ");
  gotoxy(31, 9);
  cprintf(" ");
  gotoxy(31, 13);
  cprintf(" ");
  gotoxy(31, 8);
  cprintf(" ");
  gotoxy(31, 14);
  cprintf(" ");
  gotoxy(31, 7);
  cprintf(" ");
  gotoxy(31, 15);
  cprintf(" ");
  gotoxy(31, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(50, 12);
  cprintf("  ");
  gotoxy(50, 11);
  cprintf("  ");
  gotoxy(50, 13);
  cprintf("  ");
  gotoxy(50, 10);
  cprintf("  ");
  gotoxy(50, 14);
  cprintf("  ");
  gotoxy(50, 9);
  cprintf("  ");
  gotoxy(50, 15);
  cprintf("  ");
  gotoxy(50, 8);
  cprintf("  ");
  gotoxy(50, 16);
  cprintf("  ");
  gotoxy(50, 17);
  cprintf("  ");
  gotoxy(32, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(50, 11);
  cprintf(" ");
  gotoxy(50, 10);
  cprintf(" ");
  gotoxy(50, 12);
  cprintf(" ");
  gotoxy(50, 9);
  cprintf(" ");
  gotoxy(50, 13);
  cprintf(" ");
  gotoxy(50, 8);
  cprintf(" ");
  gotoxy(50, 14);
  cprintf(" ");
  gotoxy(50, 7);
  cprintf(" ");
  gotoxy(50, 15);
  cprintf(" ");
  gotoxy(50, 16);
  cprintf(" ");
  gotoxy(30, 11);
  cprintf(" ");
  gotoxy(30, 10);
  cprintf(" ");
  gotoxy(30, 12);
  cprintf(" ");
  gotoxy(30, 9);
  cprintf(" ");
  gotoxy(30, 13);
  cprintf(" ");
  gotoxy(30, 8);
  cprintf(" ");
  gotoxy(30, 14);
  cprintf(" ");
  gotoxy(30, 7);
  cprintf(" ");
  gotoxy(30, 15);
  cprintf(" ");
  gotoxy(30, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(51, 12);
  cprintf("  ");
  gotoxy(51, 11);
  cprintf("  ");
  gotoxy(51, 13);
  cprintf("  ");
  gotoxy(51, 10);
  cprintf("  ");
  gotoxy(51, 14);
  cprintf("  ");
  gotoxy(51, 9);
  cprintf("  ");
  gotoxy(51, 15);
  cprintf("  ");
  gotoxy(51, 8);
  cprintf("  ");
  gotoxy(51, 16);
  cprintf("  ");
  gotoxy(51, 17);
  cprintf("  ");
  gotoxy(31, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(51, 11);
  cprintf(" ");
  gotoxy(51, 10);
  cprintf(" ");
  gotoxy(51, 12);
  cprintf(" ");
  gotoxy(51, 9);
  cprintf(" ");
  gotoxy(51, 13);
  cprintf(" ");
  gotoxy(51, 8);
  cprintf(" ");
  gotoxy(51, 14);
  cprintf(" ");
  gotoxy(51, 7);
  cprintf(" ");
  gotoxy(51, 15);
  cprintf(" ");
  gotoxy(51, 16);
  cprintf(" ");
  gotoxy(29, 11);
  cprintf(" ");
  gotoxy(29, 10);
  cprintf(" ");
  gotoxy(29, 12);
  cprintf(" ");
  gotoxy(29, 9);
  cprintf(" ");
  gotoxy(29, 13);
  cprintf(" ");
  gotoxy(29, 8);
  cprintf(" ");
  gotoxy(29, 14);
  cprintf(" ");
  gotoxy(29, 7);
  cprintf(" ");
  gotoxy(29, 15);
  cprintf(" ");
  gotoxy(29, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(52, 12);
  cprintf("  ");
  gotoxy(52, 11);
  cprintf("  ");
  gotoxy(52, 13);
  cprintf("  ");
  gotoxy(52, 10);
  cprintf("  ");
  gotoxy(52, 14);
  cprintf("  ");
  gotoxy(52, 9);
  cprintf("  ");
  gotoxy(52, 15);
  cprintf("  ");
  gotoxy(52, 8);
  cprintf("  ");
  gotoxy(52, 16);
  cprintf("  ");
  gotoxy(52, 17);
  cprintf("  ");
  gotoxy(30, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(52, 11);
  cprintf(" ");
  gotoxy(52, 10);
  cprintf(" ");
  gotoxy(52, 12);
  cprintf(" ");
  gotoxy(52, 9);
  cprintf(" ");
  gotoxy(52, 13);
  cprintf(" ");
  gotoxy(52, 8);
  cprintf(" ");
  gotoxy(52, 14);
  cprintf(" ");
  gotoxy(52, 7);
  cprintf(" ");
  gotoxy(52, 15);
  cprintf(" ");
  gotoxy(52, 16);
  cprintf(" ");
  gotoxy(28, 11);
  cprintf(" ");
  gotoxy(28, 10);
  cprintf(" ");
  gotoxy(28, 12);
  cprintf(" ");
  gotoxy(28, 9);
  cprintf(" ");
  gotoxy(28, 13);
  cprintf(" ");
  gotoxy(28, 8);
  cprintf(" ");
  gotoxy(28, 14);
  cprintf(" ");
  gotoxy(28, 7);
  cprintf(" ");
  gotoxy(28, 15);
  cprintf(" ");
  gotoxy(28, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(53, 12);
  cprintf("  ");
  gotoxy(53, 11);
  cprintf("  ");
  gotoxy(53, 13);
  cprintf("  ");
  gotoxy(53, 10);
  cprintf("  ");
  gotoxy(53, 14);
  cprintf("  ");
  gotoxy(53, 9);
  cprintf("  ");
  gotoxy(53, 15);
  cprintf("  ");
  gotoxy(53, 8);
  cprintf("  ");
  gotoxy(53, 16);
  cprintf("  ");
  gotoxy(53, 17);
  cprintf("  ");
  gotoxy(29, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(53, 11);
  cprintf(" ");
  gotoxy(53, 10);
  cprintf(" ");
  gotoxy(53, 12);
  cprintf(" ");
  gotoxy(53, 9);
  cprintf(" ");
  gotoxy(53, 13);
  cprintf(" ");
  gotoxy(53, 8);
  cprintf(" ");
  gotoxy(53, 14);
  cprintf(" ");
  gotoxy(53, 7);
  cprintf(" ");
  gotoxy(53, 15);
  cprintf(" ");
  gotoxy(53, 16);
  cprintf(" ");
  gotoxy(27, 11);
  cprintf(" ");
  gotoxy(27, 10);
  cprintf(" ");
  gotoxy(27, 12);
  cprintf(" ");
  gotoxy(27, 9);
  cprintf(" ");
  gotoxy(27, 13);
  cprintf(" ");
  gotoxy(27, 8);
  cprintf(" ");
  gotoxy(27, 14);
  cprintf(" ");
  gotoxy(27, 7);
  cprintf(" ");
  gotoxy(27, 15);
  cprintf(" ");
  gotoxy(27, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(54, 12);
  cprintf("  ");
  gotoxy(54, 11);
  cprintf("  ");
  gotoxy(54, 13);
  cprintf("  ");
  gotoxy(54, 10);
  cprintf("  ");
  gotoxy(54, 14);
  cprintf("  ");
  gotoxy(54, 9);
  cprintf("  ");
  gotoxy(54, 15);
  cprintf("  ");
  gotoxy(54, 8);
  cprintf("  ");
  gotoxy(54, 16);
  cprintf("  ");
  gotoxy(54, 17);
  cprintf("  ");
  gotoxy(28, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(54, 11);
  cprintf(" ");
  gotoxy(54, 10);
  cprintf(" ");
  gotoxy(54, 12);
  cprintf(" ");
  gotoxy(54, 9);
  cprintf(" ");
  gotoxy(54, 13);
  cprintf(" ");
  gotoxy(54, 8);
  cprintf(" ");
  gotoxy(54, 14);
  cprintf(" ");
  gotoxy(54, 7);
  cprintf(" ");
  gotoxy(54, 15);
  cprintf(" ");
  gotoxy(54, 16);
  cprintf(" ");
  gotoxy(26, 11);
  cprintf(" ");
  gotoxy(26, 10);
  cprintf(" ");
  gotoxy(26, 12);
  cprintf(" ");
  gotoxy(26, 9);
  cprintf(" ");
  gotoxy(26, 13);
  cprintf(" ");
  gotoxy(26, 8);
  cprintf(" ");
  gotoxy(26, 14);
  cprintf(" ");
  gotoxy(26, 7);
  cprintf(" ");
  gotoxy(26, 15);
  cprintf(" ");
  gotoxy(26, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(55, 12);
  cprintf("  ");
  gotoxy(55, 11);
  cprintf("  ");
  gotoxy(55, 13);
  cprintf("  ");
  gotoxy(55, 10);
  cprintf("  ");
  gotoxy(55, 14);
  cprintf("  ");
  gotoxy(55, 9);
  cprintf("  ");
  gotoxy(55, 15);
  cprintf("  ");
  gotoxy(55, 8);
  cprintf("  ");
  gotoxy(55, 16);
  cprintf("  ");
  gotoxy(55, 17);
  cprintf("  ");
  gotoxy(27, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(55, 11);
  cprintf(" ");
  gotoxy(55, 10);
  cprintf(" ");
  gotoxy(55, 12);
  cprintf(" ");
  gotoxy(55, 9);
  cprintf(" ");
  gotoxy(55, 13);
  cprintf(" ");
  gotoxy(55, 8);
  cprintf(" ");
  gotoxy(55, 14);
  cprintf(" ");
  gotoxy(55, 7);
  cprintf(" ");
  gotoxy(55, 15);
  cprintf(" ");
  gotoxy(55, 16);
  cprintf(" ");
  gotoxy(25, 11);
  cprintf(" ");
  gotoxy(25, 10);
  cprintf(" ");
  gotoxy(25, 12);
  cprintf(" ");
  gotoxy(25, 9);
  cprintf(" ");
  gotoxy(25, 13);
  cprintf(" ");
  gotoxy(25, 8);
  cprintf(" ");
  gotoxy(25, 14);
  cprintf(" ");
  gotoxy(25, 7);
  cprintf(" ");
  gotoxy(25, 15);
  cprintf(" ");
  gotoxy(25, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(56, 12);
  cprintf("  ");
  gotoxy(56, 11);
  cprintf("  ");
  gotoxy(56, 13);
  cprintf("  ");
  gotoxy(56, 10);
  cprintf("  ");
  gotoxy(56, 14);
  cprintf("  ");
  gotoxy(56, 9);
  cprintf("  ");
  gotoxy(56, 15);
  cprintf("  ");
  gotoxy(56, 8);
  cprintf("  ");
  gotoxy(56, 16);
  cprintf("  ");
  gotoxy(56, 17);
  cprintf("  ");
  gotoxy(26, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(56, 11);
  cprintf(" ");
  gotoxy(56, 10);
  cprintf(" ");
  gotoxy(56, 12);
  cprintf(" ");
  gotoxy(56, 9);
  cprintf(" ");
  gotoxy(56, 13);
  cprintf(" ");
  gotoxy(56, 8);
  cprintf(" ");
  gotoxy(56, 14);
  cprintf(" ");
  gotoxy(56, 7);
  cprintf(" ");
  gotoxy(56, 15);
  cprintf(" ");
  gotoxy(56, 16);
  cprintf(" ");
  gotoxy(24, 11);
  cprintf(" ");
  gotoxy(24, 10);
  cprintf(" ");
  gotoxy(24, 12);
  cprintf(" ");
  gotoxy(24, 9);
  cprintf(" ");
  gotoxy(24, 13);
  cprintf(" ");
  gotoxy(24, 8);
  cprintf(" ");
  gotoxy(24, 14);
  cprintf(" ");
  gotoxy(24, 7);
  cprintf(" ");
  gotoxy(24, 15);
  cprintf(" ");
  gotoxy(24, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(57, 12);
  cprintf("  ");
  gotoxy(57, 11);
  cprintf("  ");
  gotoxy(57, 13);
  cprintf("  ");
  gotoxy(57, 10);
  cprintf("  ");
  gotoxy(57, 14);
  cprintf("  ");
  gotoxy(57, 9);
  cprintf("  ");
  gotoxy(57, 15);
  cprintf("  ");
  gotoxy(57, 8);
  cprintf("  ");
  gotoxy(57, 16);
  cprintf("  ");
  gotoxy(57, 17);
  cprintf("  ");
  gotoxy(25, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(57, 11);
  cprintf(" ");
  gotoxy(57, 10);
  cprintf(" ");
  gotoxy(57, 12);
  cprintf(" ");
  gotoxy(57, 9);
  cprintf(" ");
  gotoxy(57, 13);
  cprintf(" ");
  gotoxy(57, 8);
  cprintf(" ");
  gotoxy(57, 14);
  cprintf(" ");
  gotoxy(57, 7);
  cprintf(" ");
  gotoxy(57, 15);
  cprintf(" ");
  gotoxy(57, 16);
  cprintf(" ");
  gotoxy(23, 11);
  cprintf(" ");
  gotoxy(23, 10);
  cprintf(" ");
  gotoxy(23, 12);
  cprintf(" ");
  gotoxy(23, 9);
  cprintf(" ");
  gotoxy(23, 13);
  cprintf(" ");
  gotoxy(23, 8);
  cprintf(" ");
  gotoxy(23, 14);
  cprintf(" ");
  gotoxy(23, 7);
  cprintf(" ");
  gotoxy(23, 15);
  cprintf(" ");
  gotoxy(23, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(58, 12);
  cprintf("  ");
  gotoxy(58, 11);
  cprintf("  ");
  gotoxy(58, 13);
  cprintf("  ");
  gotoxy(58, 10);
  cprintf("  ");
  gotoxy(58, 14);
  cprintf("  ");
  gotoxy(58, 9);
  cprintf("  ");
  gotoxy(58, 15);
  cprintf("  ");
  gotoxy(58, 8);
  cprintf("  ");
  gotoxy(58, 16);
  cprintf("  ");
  gotoxy(58, 17);
  cprintf("  ");
  gotoxy(24, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(58, 11);
  cprintf(" ");
  gotoxy(58, 10);
  cprintf(" ");
  gotoxy(58, 12);
  cprintf(" ");
  gotoxy(58, 9);
  cprintf(" ");
  gotoxy(58, 13);
  cprintf(" ");
  gotoxy(58, 8);
  cprintf(" ");
  gotoxy(58, 14);
  cprintf(" ");
  gotoxy(58, 7);
  cprintf(" ");
  gotoxy(58, 15);
  cprintf(" ");
  gotoxy(58, 16);
  cprintf(" ");
  gotoxy(22, 11);
  cprintf(" ");
  gotoxy(22, 10);
  cprintf(" ");
  gotoxy(22, 12);
  cprintf(" ");
  gotoxy(22, 9);
  cprintf(" ");
  gotoxy(22, 13);
  cprintf(" ");
  gotoxy(22, 8);
  cprintf(" ");
  gotoxy(22, 14);
  cprintf(" ");
  gotoxy(22, 7);
  cprintf(" ");
  gotoxy(22, 15);
  cprintf(" ");
  gotoxy(22, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(59, 12);
  cprintf("  ");
  gotoxy(59, 11);
  cprintf("  ");
  gotoxy(59, 13);
  cprintf("  ");
  gotoxy(59, 10);
  cprintf("  ");
  gotoxy(59, 14);
  cprintf("  ");
  gotoxy(59, 9);
  cprintf("  ");
  gotoxy(59, 15);
  cprintf("  ");
  gotoxy(59, 8);
  cprintf("  ");
  gotoxy(59, 16);
  cprintf("  ");
  gotoxy(59, 17);
  cprintf("  ");
  gotoxy(23, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(59, 11);
  cprintf(" ");
  gotoxy(59, 10);
  cprintf(" ");
  gotoxy(59, 12);
  cprintf(" ");
  gotoxy(59, 9);
  cprintf(" ");
  gotoxy(59, 13);
  cprintf(" ");
  gotoxy(59, 8);
  cprintf(" ");
  gotoxy(59, 14);
  cprintf(" ");
  gotoxy(59, 7);
  cprintf(" ");
  gotoxy(59, 15);
  cprintf(" ");
  gotoxy(59, 16);
  cprintf(" ");
  gotoxy(21, 11);
  cprintf(" ");
  gotoxy(21, 10);
  cprintf(" ");
  gotoxy(21, 12);
  cprintf(" ");
  gotoxy(21, 9);
  cprintf(" ");
  gotoxy(21, 13);
  cprintf(" ");
  gotoxy(21, 8);
  cprintf(" ");
  gotoxy(21, 14);
  cprintf(" ");
  gotoxy(21, 7);
  cprintf(" ");
  gotoxy(21, 15);
  cprintf(" ");
  gotoxy(21, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(60, 12);
  cprintf("  ");
  gotoxy(60, 11);
  cprintf("  ");
  gotoxy(60, 13);
  cprintf("  ");
  gotoxy(60, 10);
  cprintf("  ");
  gotoxy(60, 14);
  cprintf("  ");
  gotoxy(60, 9);
  cprintf("  ");
  gotoxy(60, 15);
  cprintf("  ");
  gotoxy(60, 8);
  cprintf("  ");
  gotoxy(60, 16);
  cprintf("  ");
  gotoxy(60, 17);
  cprintf("  ");
  gotoxy(22, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(60, 11);
  cprintf(" ");
  gotoxy(60, 10);
  cprintf(" ");
  gotoxy(60, 12);
  cprintf(" ");
  gotoxy(60, 9);
  cprintf(" ");
  gotoxy(60, 13);
  cprintf(" ");
  gotoxy(60, 8);
  cprintf(" ");
  gotoxy(60, 14);
  cprintf(" ");
  gotoxy(60, 7);
  cprintf(" ");
  gotoxy(60, 15);
  cprintf(" ");
  gotoxy(60, 16);
  cprintf(" ");
  gotoxy(20, 11);
  cprintf(" ");
  gotoxy(20, 10);
  cprintf(" ");
  gotoxy(20, 12);
  cprintf(" ");
  gotoxy(20, 9);
  cprintf(" ");
  gotoxy(20, 13);
  cprintf(" ");
  gotoxy(20, 8);
  cprintf(" ");
  gotoxy(20, 14);
  cprintf(" ");
  gotoxy(20, 7);
  cprintf(" ");
  gotoxy(20, 15);
  cprintf(" ");
  gotoxy(20, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(61, 12);
  cprintf("  ");
  gotoxy(61, 11);
  cprintf("  ");
  gotoxy(61, 13);
  cprintf("  ");
  gotoxy(61, 10);
  cprintf("  ");
  gotoxy(61, 14);
  cprintf("  ");
  gotoxy(61, 9);
  cprintf("  ");
  gotoxy(61, 15);
  cprintf("  ");
  gotoxy(61, 8);
  cprintf("  ");
  gotoxy(61, 16);
  cprintf("  ");
  gotoxy(61, 17);
  cprintf("  ");
  gotoxy(21, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(61, 11);
  cprintf(" ");
  gotoxy(61, 10);
  cprintf(" ");
  gotoxy(61, 12);
  cprintf(" ");
  gotoxy(61, 9);
  cprintf(" ");
  gotoxy(61, 13);
  cprintf(" ");
  gotoxy(61, 8);
  cprintf(" ");
  gotoxy(61, 14);
  cprintf(" ");
  gotoxy(61, 7);
  cprintf(" ");
  gotoxy(61, 15);
  cprintf(" ");
  gotoxy(61, 16);
  cprintf(" ");
  gotoxy(19, 11);
  cprintf(" ");
  gotoxy(19, 10);
  cprintf(" ");
  gotoxy(19, 12);
  cprintf(" ");
  gotoxy(19, 9);
  cprintf(" ");
  gotoxy(19, 13);
  cprintf(" ");
  gotoxy(19, 8);
  cprintf(" ");
  gotoxy(19, 14);
  cprintf(" ");
  gotoxy(19, 7);
  cprintf(" ");
  gotoxy(19, 15);
  cprintf(" ");
  gotoxy(19, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(62, 12);
  cprintf("  ");
  gotoxy(62, 11);
  cprintf("  ");
  gotoxy(62, 13);
  cprintf("  ");
  gotoxy(62, 10);
  cprintf("  ");
  gotoxy(62, 14);
  cprintf("  ");
  gotoxy(62, 9);
  cprintf("  ");
  gotoxy(62, 15);
  cprintf("  ");
  gotoxy(62, 8);
  cprintf("  ");
  gotoxy(62, 16);
  cprintf("  ");
  gotoxy(62, 17);
  cprintf("  ");
  gotoxy(20, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(62, 11);
  cprintf(" ");
  gotoxy(62, 10);
  cprintf(" ");
  gotoxy(62, 12);
  cprintf(" ");
  gotoxy(62, 9);
  cprintf(" ");
  gotoxy(62, 13);
  cprintf(" ");
  gotoxy(62, 8);
  cprintf(" ");
  gotoxy(62, 14);
  cprintf(" ");
  gotoxy(62, 7);
  cprintf(" ");
  gotoxy(62, 15);
  cprintf(" ");
  gotoxy(62, 16);
  cprintf(" ");
  gotoxy(18, 11);
  cprintf(" ");
  gotoxy(18, 10);
  cprintf(" ");
  gotoxy(18, 12);
  cprintf(" ");
  gotoxy(18, 9);
  cprintf(" ");
  gotoxy(18, 13);
  cprintf(" ");
  gotoxy(18, 8);
  cprintf(" ");
  gotoxy(18, 14);
  cprintf(" ");
  gotoxy(18, 7);
  cprintf(" ");
  gotoxy(18, 15);
  cprintf(" ");
  gotoxy(18, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(63, 12);
  cprintf("  ");
  gotoxy(63, 11);
  cprintf("  ");
  gotoxy(63, 13);
  cprintf("  ");
  gotoxy(63, 10);
  cprintf("  ");
  gotoxy(63, 14);
  cprintf("  ");
  gotoxy(63, 9);
  cprintf("  ");
  gotoxy(63, 15);
  cprintf("  ");
  gotoxy(63, 8);
  cprintf("  ");
  gotoxy(63, 16);
  cprintf("  ");
  gotoxy(63, 17);
  cprintf("  ");
  gotoxy(19, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(63, 11);
  cprintf(" ");
  gotoxy(63, 10);
  cprintf(" ");
  gotoxy(63, 12);
  cprintf(" ");
  gotoxy(63, 9);
  cprintf(" ");
  gotoxy(63, 13);
  cprintf(" ");
  gotoxy(63, 8);
  cprintf(" ");
  gotoxy(63, 14);
  cprintf(" ");
  gotoxy(63, 7);
  cprintf(" ");
  gotoxy(63, 15);
  cprintf(" ");
  gotoxy(63, 16);
  cprintf(" ");
  gotoxy(17, 11);
  cprintf(" ");
  gotoxy(17, 10);
  cprintf(" ");
  gotoxy(17, 12);
  cprintf(" ");
  gotoxy(17, 9);
  cprintf(" ");
  gotoxy(17, 13);
  cprintf(" ");
  gotoxy(17, 8);
  cprintf(" ");
  gotoxy(17, 14);
  cprintf(" ");
  gotoxy(17, 7);
  cprintf(" ");
  gotoxy(17, 15);
  cprintf(" ");
  gotoxy(17, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(64, 12);
  cprintf("  ");
  gotoxy(64, 11);
  cprintf("  ");
  gotoxy(64, 13);
  cprintf("  ");
  gotoxy(64, 10);
  cprintf("  ");
  gotoxy(64, 14);
  cprintf("  ");
  gotoxy(64, 9);
  cprintf("  ");
  gotoxy(64, 15);
  cprintf("  ");
  gotoxy(64, 8);
  cprintf("  ");
  gotoxy(64, 16);
  cprintf("  ");
  gotoxy(64, 17);
  cprintf("  ");
  gotoxy(18, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(64, 11);
  cprintf(" ");
  gotoxy(64, 10);
  cprintf(" ");
  gotoxy(64, 12);
  cprintf(" ");
  gotoxy(64, 9);
  cprintf(" ");
  gotoxy(64, 13);
  cprintf(" ");
  gotoxy(64, 8);
  cprintf(" ");
  gotoxy(64, 14);
  cprintf(" ");
  gotoxy(64, 7);
  cprintf(" ");
  gotoxy(64, 15);
  cprintf(" ");
  gotoxy(64, 16);
  cprintf(" ");
  gotoxy(16, 11);
  cprintf(" ");
  gotoxy(16, 10);
  cprintf(" ");
  gotoxy(16, 12);
  cprintf(" ");
  gotoxy(16, 9);
  cprintf(" ");
  gotoxy(16, 13);
  cprintf(" ");
  gotoxy(16, 8);
  cprintf(" ");
  gotoxy(16, 14);
  cprintf(" ");
  gotoxy(16, 7);
  cprintf(" ");
  gotoxy(16, 15);
  cprintf(" ");
  gotoxy(16, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(65, 12);
  cprintf("  ");
  gotoxy(65, 11);
  cprintf("  ");
  gotoxy(65, 13);
  cprintf("  ");
  gotoxy(65, 10);
  cprintf("  ");
  gotoxy(65, 14);
  cprintf("  ");
  gotoxy(65, 9);
  cprintf("  ");
  gotoxy(65, 15);
  cprintf("  ");
  gotoxy(65, 8);
  cprintf("  ");
  gotoxy(65, 16);
  cprintf("  ");
  gotoxy(65, 17);
  cprintf("  ");
  gotoxy(17, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(65, 11);
  cprintf(" ");
  gotoxy(65, 10);
  cprintf(" ");
  gotoxy(65, 12);
  cprintf(" ");
  gotoxy(65, 9);
  cprintf(" ");
  gotoxy(65, 13);
  cprintf(" ");
  gotoxy(65, 8);
  cprintf(" ");
  gotoxy(65, 14);
  cprintf(" ");
  gotoxy(65, 7);
  cprintf(" ");
  gotoxy(65, 15);
  cprintf(" ");
  gotoxy(65, 16);
  cprintf(" ");
  gotoxy(15, 11);
  cprintf(" ");
  gotoxy(15, 10);
  cprintf(" ");
  gotoxy(15, 12);
  cprintf(" ");
  gotoxy(15, 9);
  cprintf(" ");
  gotoxy(15, 13);
  cprintf(" ");
  gotoxy(15, 8);
  cprintf(" ");
  gotoxy(15, 14);
  cprintf(" ");
  gotoxy(15, 7);
  cprintf(" ");
  gotoxy(15, 15);
  cprintf(" ");
  gotoxy(15, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(66, 12);
  cprintf("  ");
  gotoxy(66, 11);
  cprintf("  ");
  gotoxy(66, 13);
  cprintf("  ");
  gotoxy(66, 10);
  cprintf("  ");
  gotoxy(66, 14);
  cprintf("  ");
  gotoxy(66, 9);
  cprintf("  ");
  gotoxy(66, 15);
  cprintf("  ");
  gotoxy(66, 8);
  cprintf("  ");
  gotoxy(66, 16);
  cprintf("  ");
  gotoxy(66, 17);
  cprintf("  ");
  gotoxy(16, 17);
  cprintf(" ");
  delay(10);
  textbackground(LIGHTGRAY);
  gotoxy(14, 11);
  cprintf(" ");
  gotoxy(14, 10);
  cprintf(" ");
  gotoxy(14, 12);
  cprintf(" ");
  gotoxy(14, 9);
  cprintf(" ");
  gotoxy(14, 13);
  cprintf(" ");
  gotoxy(14, 8);
  cprintf(" ");
  gotoxy(14, 14);
  cprintf(" ");
  gotoxy(14, 7);
  cprintf(" ");
  gotoxy(14, 15);
  cprintf(" ");
  gotoxy(14, 16);
  cprintf(" ");
  textbackground(BLACK);
  gotoxy(15, 17);
  cprintf(" ");
  textcolor(DARKGRAY);
  textbackground(BLACK);

  if (screen == 1) {

    gotoxy(66, 10);
    cprintf("ed");
    gotoxy(66, 14);
    cprintf("od");
    gotoxy(15, 17);
    cprintf("sed to make a backup of your files and installation.");

  }

  else if (screen == 2) {

    gotoxy(66, 13);

    if (cbar == 7) {

      textbackground(BROWN);
      textcolor(BLACK);

    }

    cprintf("si");

  }

  else if (screen == 3) {

    gotoxy(66, 12);
    cprintf("in");
    gotoxy(15, 17);
    cprintf("cher needs the location of your CONFIG.SYS DOS file");
    textbackground(BROWN);
    gotoxy(66, 10);
    cprintf("  ");
    gotoxy(66, 15);
    cprintf("  ");

  }

  else if (screen == 4) {

    gotoxy(15, 17);
    cprintf("t to change the values, press ESC.");

  }

  else if (screen == 5) {

    gotoxy(66, 12);
    cprintf("in");
    textbackground(BROWN);
    gotoxy(66, 10);
    cprintf("  ");

  }

  else if (screen == 6) {

    gotoxy(15, 17);
    cprintf("e MultiPatcher program, press F3.");

  }

  else if (screen == 7) {

    gotoxy(66, 10);
    textbackground(BROWN);
    cprintf(" ");
    textbackground(BLACK);
    gotoxy(66, 12);
    cprintf("r");
    gotoxy(66, 13);
    cprintf("ec");
    gotoxy(15, 17);
    cprintf("file Extension is the extension that comes after the");

  }

  else if (screen == 8) {

    gotoxy(15, 17);
    cprintf("t to change the values, press F3.");

  }

  else if (screen == 9) {

    gotoxy(66, 12);
    cprintf("ts");

  }

  else if (screen == 10) {

    textbackground(BROWN);
    gotoxy(66, 10);
    cprintf("  ");
    textbackground(BLACK);
    gotoxy(66, 12);
    cprintf("n");

  }

  else if (screen == 11) {

    gotoxy(15, 17);
    cprintf("e MultiPatcher program, press F3");

  }

  else {

    gotoxy(1, 1);
    printf("Error: Function not defined (QuitAnimation)");
    exit(1);

  }

  textcolor(RED);
  textbackground(LIGHTGRAY);
  gotoxy (14, 11);
  cprintf("                         ֹ»                         ");
  gotoxy (14, 12);
  cprintf("                         ָ¼                         ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                        ֹֽֽ»                        ");
  gotoxy (14, 12);
  cprintf("                        ָֽֽ¼                        ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                       ֹֽֽֽֽ»                       ");
  gotoxy (14, 12);
  cprintf("                       ָֽֽֽֽ¼                       ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                      ֹֽֽֽֽֽֽ»                      ");
  gotoxy (14, 12);
  cprintf("                      ָֽֽֽֽֽֽ¼                      ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                     ֹֽֽֽֽֽֽֽֽ»                     ");
  gotoxy (14, 12);
  cprintf("                     ָֽֽֽֽֽֽֽֽ¼                     ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                    ֹֽֽֽֽֽֽֽֽֽֽ»                    ");
  gotoxy (14, 12);
  cprintf("                    ָֽֽֽֽֽֽֽֽֽֽ¼                    ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                   ֹֽֽֽֽֽֽֽֽֽֽֽֽ»                   ");
  gotoxy (14, 12);
  cprintf("                   ָֽֽֽֽֽֽֽֽֽֽֽֽ¼                   ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                  ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»                  ");
  gotoxy (14, 12);
  cprintf("                  ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼                  ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                 ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»                 ");
  gotoxy (14, 12);
  cprintf("                 ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼                 ");
  delay(15);
  gotoxy (14, 11);
  cprintf("                ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»                ");
  gotoxy (14, 12);
  cprintf("                ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼                ");
  delay(15);
  gotoxy (14, 11);
  cprintf("               ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»               ");
  gotoxy (14, 12);
  cprintf("               ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼               ");
  delay(15);
  gotoxy (14, 11);
  cprintf("              ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»              ");
  gotoxy (14, 12);
  cprintf("              ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼              ");
  delay(15);
  gotoxy (14, 11);
  cprintf("             ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»             ");
  gotoxy (14, 12);
  cprintf("             ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼             ");
  delay(15);
  gotoxy (14, 11);
  cprintf("            ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»            ");
  gotoxy (14, 12);
  cprintf("            ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼            ");
  delay(15);
  gotoxy (14, 11);
  cprintf("           ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»           ");
  gotoxy (14, 12);
  cprintf("           ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼           ");
  delay(15);
  gotoxy (14, 11);
  cprintf("          ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»          ");
  gotoxy (14, 12);
  cprintf("          ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼          ");
  delay(15);
  gotoxy (14, 11);
  cprintf("         ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»         ");
  gotoxy (14, 12);
  cprintf("         ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼         ");
  delay(15);
  gotoxy (14, 11);
  cprintf("        ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»        ");
  gotoxy (14, 12);
  cprintf("        ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼        ");
  delay(15);
  gotoxy (14, 11);
  cprintf("       ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»       ");
  gotoxy (14, 12);
  cprintf("       ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼       ");
  delay(15);
  gotoxy (14, 11);
  cprintf("      ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»      ");
  gotoxy (14, 12);
  cprintf("      ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼      ");
  delay(15);
  gotoxy (14, 11);
  cprintf("     ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»     ");
  gotoxy (14, 12);
  cprintf("     ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼     ");
  delay(15);
  gotoxy (14, 11);
  cprintf("    ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»    ");
  gotoxy (14, 12);
  cprintf("    ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼    ");
  delay(15);
  gotoxy (14, 11);
  cprintf("   ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»   ");
  gotoxy (14, 12);
  cprintf("   ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼   ");
  delay(15);
  gotoxy (14, 11);
  cprintf("  ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»  ");
  gotoxy (14, 12);
  cprintf("  ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼  ");
  delay(15);
  gotoxy (14, 11);
  cprintf(" ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ» ");
  gotoxy (14, 12);
  cprintf(" ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼ ");
  delay(15);
  gotoxy (14, 11);
  cprintf("ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»");
  gotoxy (14, 12);
  cprintf("ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼");
  delay(50);
  gotoxy (14, 10);
  cprintf("ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»");
  gotoxy (14, 11);
  cprintf("÷                                                  ÷");
  gotoxy (14, 12);
  cprintf("ִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִַ¶");
  gotoxy (14, 13);
  cprintf("ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼");
  delay(50);
  gotoxy (14, 9);
  cprintf("ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»");
  gotoxy (14, 10);
  cprintf("÷                                                  ÷");
  gotoxy (14, 11);
  cprintf("÷                                                  ÷");
  gotoxy (14, 12);
  cprintf("÷                                                  ÷");
  gotoxy (14, 13);
  cprintf("ִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִַ¶");
  gotoxy (14, 14);
  cprintf("ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼");
  delay(50);
  gotoxy (14, 8);
  cprintf("ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»");
  gotoxy (14, 9);
  cprintf("÷                                                  ÷");
  gotoxy (14, 10);
  cprintf("÷                                                  ÷");
  gotoxy (14, 11);
  cprintf("÷                                                  ÷");
  gotoxy (14, 12);
  cprintf("÷                                                  ÷");
  gotoxy (14, 13);
  cprintf("ִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִַ¶");
  gotoxy (14, 14);
  cprintf("÷                                                  ÷");
  gotoxy (14, 15);
  cprintf("ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼");
  delay(50);
  gotoxy (14, 7);
  cprintf("ֹֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ»");
  gotoxy (14, 8);
  cprintf("÷                                                  ÷");
  gotoxy (14, 9);
  cprintf("÷                                                  ÷");
  gotoxy (14, 10);
  cprintf("÷                                                  ÷");
  gotoxy (14, 11);
  cprintf("÷                                                  ÷");
  gotoxy (14, 12);
  cprintf("÷                                                  ÷");
  gotoxy (14, 13);
  cprintf("÷                                                  ÷");
  gotoxy (14, 14);
  cprintf("ִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִִַ¶");
  gotoxy (14, 15);
  cprintf("÷                                                  ÷");
  gotoxy (14, 16);
  cprintf("ָֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽֽ¼");
  delay(50);
  gotoxy (17, 8);
  cprintf("M");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("l");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("P");
  delay(5);
  cprintf("a");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("c");
  delay(5);
  cprintf("h");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("r");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("c");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("m");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf("l");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("l");
  delay(5);
  cprintf("y");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("y");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("r");
  delay(5);
  gotoxy (17, 9);
  cprintf("c");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("m");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("r");
  delay(5);
  cprintf(".");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("I");
  delay(5);
  cprintf("f");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("y");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("q");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("S");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("w");
  delay(5);
  cprintf(",");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("y");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("w");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("l");
  delay(5);
  cprintf("l");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("d");
  delay(5);
  gotoxy (17, 10);
  cprintf("t");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("r");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("S");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("a");
  delay(5);
  cprintf("g");
  delay(5);
  cprintf("a");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf("a");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("c");
  delay(5);
  cprintf("h");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("W");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("d");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("w");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("f");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("l");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf(".");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf(" ");
  delay(5);
  gotoxy (20, 12);
  cprintf("ש");
  delay(5);
  cprintf("T");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("c");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("S");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf(",");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf("r");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("E");
  delay(5);
  cprintf("N");
  delay(5);
  cprintf("T");
  delay(5);
  cprintf("E");
  delay(5);
  cprintf("R");
  delay(5);
  cprintf(".");
  delay(5);
  gotoxy (20, 13);
  cprintf("ש");
  delay(5);
  cprintf("T");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("q");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("S");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf(",");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("p");
  delay(5);
  cprintf("r");
  delay(5);
  cprintf("e");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf("s");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("F");
  delay(5);
  cprintf("3");
  delay(5);
  cprintf(".");
  delay(5);
  gotoxy (17, 15);
  cprintf("F");
  delay(5);
  cprintf("3");
  delay(5);
  cprintf("=");
  delay(5);
  cprintf("Q");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf(" ");
  delay(5);
  cprintf("E");
  delay(5);
  cprintf("N");
  delay(5);
  cprintf("T");
  delay(5);
  cprintf("E");
  delay(5);
  cprintf("R");
  delay(5);
  cprintf("=");
  delay(5);
  cprintf("C");
  delay(5);
  cprintf("o");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("t");
  delay(5);
  cprintf("i");
  delay(5);
  cprintf("n");
  delay(5);
  cprintf("u");
  delay(5);
  cprintf("e");

  Ch1F:
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0x3D) {

    bSkip:
      gotoxy(1, 1);
      textbackground(BLUE);
      textcolor(BLACK);
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(7);
      cprintf("                                                                                ");
      delay(500);
      gotoxy(1, 1);
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      cprintf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
      delay(500);
      gotoxy(1, 1);
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      cprintf("±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±±");
      delay(500);
      gotoxy(1, 1);
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      cprintf("²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²²");
      delay(500);
      textbackground(BLACK);
      clrscr();
      textcolor(BLUE);
      gotoxy(1, 1);
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      cprintf(":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::");
      delay(500);
      gotoxy(1, 1);
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("שששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      cprintf("ששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששש");
      delay(500);
      gotoxy(1, 1);
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      cprintf("תתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתתת");
      delay(500);
      textcolor(LIGHTGRAY);
      clrscr();
      _setcursortype(_NORMALCURSOR);
      gotoxy(1, 1);
      exit(0);

    }

    else if (ltkey == 13 || ltkey == 10) {

      textbackground(BLUE);
      textcolor(LIGHTGRAY);
      gotoxy(14, 7);
      i = 0;
      delay(20);

      while (i != 10) { //Remove vertical shadow

        i = i + 1;
        gotoxy(66, 7 + i);
        cprintf("  ");

      }

      i = 0;

      while (i !=  51) { //Remove horizontal shadow

        i = i + 1;
        gotoxy(14 + i, 17);
        cprintf(" ");

      }

      i = 0;
      delay(20);
      gotoxy(14, 7);
      cprintf("ֹ");

      while (i != 50) { //Top bar #1

        i = i + 1;
        gotoxy(14 + i, 7);
        cprintf("Ü");

      }

      cprintf("»");
      i = 0;

      while (i != 8) { //Right bar #1

        i = i + 1;
        gotoxy(65, 7 + i);
        cprintf("Ý");

      }

      i = 0;

      while (i != 8) { //Left bar #1

        i = i + 1;
        gotoxy(14, 7 + i);
        cprintf("Þ");

      }

      i = 0;
      gotoxy(14, 16);
      cprintf("ָ");

      while (i != 50) { //Bottom bar #1

        i = i + 1;
        gotoxy(14 + i, 16);
        cprintf("ß");

      }

      cprintf("¼");
      i = 0;
      delay(20);

      while (i != 52) { //Top bar - 1

        i = i + 1;
        gotoxy(13 + i, 7);
        cprintf(" ");

      }

      i = 0;

      while (i != 10) { //Right bar - 1

        i = i + 1;
        gotoxy(65, 6 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 10) { //Left bar - 1

        i = i + 1;
        gotoxy(14, 6 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 51) { //Bottom bar - 1

        i = i + 1;
        gotoxy(13 + i, 16);
        cprintf(" ");

      }


      i = 0;
      delay(20);
      gotoxy(15, 8);
      cprintf("ֹ");

      while (i != 48) { //Top bar #1

        i = i + 1;
        gotoxy(15 + i, 8);
        cprintf("Ü");

      }

      cprintf("»");
      i = 0;

      while (i != 6) { //Right bar #1

        i = i + 1;
        gotoxy(64, 8 + i);
        cprintf("Ý");

      }

      i = 0;

      while (i != 6) { //Left bar #1

        i = i + 1;
        gotoxy(15, 8 + i);
        cprintf("Þ");

      }

      i = 0;
      gotoxy(15, 15);
      cprintf("ָ");

      while (i != 48) { //Bottom bar #1

        i = i + 1;
        gotoxy(15 + i, 15);
        cprintf("ß");

      }

      cprintf("¼");
      i = 0;
      delay(20);

      while (i != 50) { //Top bar - 1

        i = i + 1;
        gotoxy(14 + i, 8);
        cprintf(" ");

      }

      i = 0;

      while (i != 8) { //Right bar - 1

        i = i + 1;
        gotoxy(64, 7 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 8) { //Left bar - 1

        i = i + 1;
        gotoxy(15, 7 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 49) { //Bottom bar - 1

        i = i + 1;
        gotoxy(14 + i, 15);
        cprintf(" ");

      }

      i = 0;
      delay(20);
      gotoxy(16, 9);
      cprintf("ֹ");

      while (i != 46) { //Top bar #1

        i = i + 1;
        gotoxy(16 + i, 9);
        cprintf("Ü");

      }

      cprintf("»");
      i = 0;

      while (i != 5) { //Right bar #1

        i = i + 1;
        gotoxy(63, 9 + i);
        cprintf("Ý");

      }

      i = 0;

      while (i != 5) { //Left bar #1

        i = i + 1;
        gotoxy(16, 9 + i);
        cprintf("Þ");

      }

      i = 0;
      gotoxy(16, 14);
      cprintf("ָ");

      while (i != 46) { //Bottom bar #1

        i = i + 1;
        gotoxy(16 + i, 14);
        cprintf("ß");

      }

      cprintf("¼");
      i = 0;
      delay(20);

      while (i != 48) { //Top bar - 1

        i = i + 1;
        gotoxy(15 + i, 9);
        cprintf(" ");

      }

      i = 0;

      while (i != 6) { //Right bar - 1

        i = i + 1;
        gotoxy(63, 8 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 6) { //Left bar - 1

        i = i + 1;
        gotoxy(16, 8 + i);
        cprintf(" ");

      }

      i = 0;
      delay(20);

      while (i != 47) { //Bottom bar - 1

        i = i + 1;
        gotoxy(15 + i, 14);
        cprintf(" ");

      }

      i = 0;
      delay(20);
      gotoxy(17, 10);
      cprintf("ֹ");

      while (i != 44) { //Top bar #1

        i = i + 1;
        gotoxy(17 + i, 10);
        cprintf("Ü");

      }

      cprintf("»");
      i = 0;

      while (i != 3) { //Right bar #1

        i = i + 1;
        gotoxy(62, 10 + i);
        cprintf("Ý");

      }

      i = 0;

      while (i != 3) { //Left bar #1

        i = i + 1;
        gotoxy(17, 10 + i);
        cprintf("Þ");

      }

      i = 0;
      gotoxy(17, 13);
      cprintf("ָ");

      while (i != 44) { //Bottom bar #1

        i = i + 1;
        gotoxy(17 + i, 13);
        cprintf("ß");

      }

      cprintf("¼");
      i = 0;
      delay(20);

      while (i != 46) { //Top bar - 1

        i = i + 1;
        gotoxy(16 + i, 10);
        cprintf(" ");

      }

      i = 0;

      while (i != 4) { //Right bar - 1

        i = i + 1;
        gotoxy(62, 9 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 4) { //Left bar - 1

        i = i + 1;
        gotoxy(17, 9 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 45) { //Bottom bar - 1

        i = i + 1;
        gotoxy(16 + i, 13);
        cprintf(" ");

      }

      i = 0;
      delay(20);
      gotoxy(18, 11);
      cprintf("ֹ");

      while (i != 42) { //Top bar #1

        i = i + 1;
        gotoxy(18 + i, 11);
        cprintf("Ü");

      }

      cprintf("»");
      i = 0;
      gotoxy(18, 12);
      cprintf("ָ");

      while (i != 42) { //Bottom bar #1

        i = i + 1;
        gotoxy(18 + i, 12);
        cprintf("ß");

      }

      cprintf("¼");
      i = 0;
      delay(20);

      /*

      while (i != 44) { //Top bar - 1

        i = i + 1;
        gotoxy(17 + i, 11);
        cprintf(" ");

      }

      i = 0;

      while (i != 2) { //Right bar - 1

        i = i + 1;
        gotoxy(61, 10 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 2) { //Left bar - 1

        i = i + 1;
        gotoxy(18, 10 + i);
        cprintf(" ");

      }

      i = 0;

      while (i != 43) { //Bottom bar - 1

        i = i + 1;
        gotoxy(17 + i, 12);
        cprintf(" ");

      }

      */

      i = 18;
      n = 61;
      //delay(20);

      SmClr: //Smooth Clear
        delay(20);
        gotoxy(i, 11);
        cprintf(" ");
        gotoxy(i, 12);
        cprintf(" ");
        gotoxy(n, 11);
        cprintf(" ");
        gotoxy(n, 12);
        cprintf(" ");

        if (i != 40) {

          i = i + 1;
          n = n - 1;
          goto SmClr;

        }


    }

    else {

      goto Ch1F;

    }

}

void DrawBoot(char* type) {

  if (strcmp(type, "topdown") == 0) {

    textbackground(BLUE);
    i = 3;

    while (i != 12) {

      i = i + 1;
      gotoxy(1, i);
      delay(5);
      clreol();

    }

    gotoxy(9, 3);
    cprintf(".");

    while (i != 24) {

      i = i + 1;
      gotoxy(1, i);
      delay(5);
      clreol();

    }

    gotoxy(10, 3);
    cprintf(".");
    i = 0;
    delay(5);

  }

  else if (strcmp(type, "downup") == 0) {

    textbackground(LIGHTGRAY);
    gotoxy(1, 25);
    clreol();
    textbackground(BLUE);
    gotoxy(1, 24);
    i = 25;

    while (i != 4) {

      i = i - 1;
      gotoxy(1, i);
      clreol();
      delay(5);

    }

    i = 0;
    delay(200);

  }

  else if (strcmp(type, "freset") == 0) {

    textbackground(BLACK);
    gotoxy(1, 25);
    i = 25;

    while (i != 1) {

      i = i - 1;
      gotoxy(1, i);
      clreol();
      delay(5);

    }

    i = 0;
    delay(200);

  }

  else {

    gotoxy(1, 1);
    printf("Error: Function not defined (drawboot)");
    exit(1);

  }

}

int main() {//int vcount, char* var[]) {

  begin:

    //printf("hello world & args1: %s", var[1]); (REF)
    textcolor(LIGHTGRAY);
    textbackground(BLACK);
    clrscr();
    cprintf("MultiBoot System Essentials %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);
    delay(200);
    _setcursortype(_NOCURSOR);
    clrscr();
    cprintf(".");
    delay(150);
    cprintf(".");
    delay(125);
    cprintf(".");
    delay(100);
    clrscr();
    gotoxy (1, 1);
    cprintf("Loading MultiPatcher\r\n\n");
    gotoxy (1, 3);
    cprintf(".");
    delay(50);
    cprintf(".");
    delay(50);
    /*

      Start checking for files (found or not found) here in future.

    */
    cprintf(".");
    delay(50);
    cprintf(".");
    delay(50);
    cprintf(".");
    delay(50);
    cprintf(".");
    delay(50);
    textbackground(LIGHTGRAY);
    clrscr();
    textbackground(BLACK);
    i = 0;

    while (i != 24) {

      i = i + 1;
      gotoxy (1, i);
      clreol();

    }

    i = 0;
    gotoxy(1, 1);
    clreol();
    cprintf("Loading MultiPatcher\r\n");
    clreol();
    cprintf(" MSE MultiPatcher Setup\r\n");
    clreol();
    cprintf(".......\r\n");
    textbackground(BLUE);
    delay(5);
    gotoxy(1, 1);
    clreol();
    cprintf("Loading MultiPatcher\r\n");
    delay(5);
    clreol();
    cprintf(" MSE MultiPatcher Setup\r\n");
    delay(5);
    clreol();
    cprintf("........\r\n");
    DrawBoot("topdown");
    delay(15);
    gotoxy(1, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(2, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(3, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(4, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(5, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(6, 3);
    cprintf("ֽ");
    gotoxy(4, 5);
    textcolor(WHITE);
    cprintf("Welcome to Setup.\r\n");
    delay(15);
    gotoxy(7, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    delay(15);
    gotoxy(8, 3);
    cprintf("ֽ");
    textcolor(LIGHTGRAY);
    gotoxy(5, 7);
    cprintf("The Setup program for the MultiPatcher version %d.%d patches some files\r\n", ver, sver);
    delay(15);
    gotoxy(9, 3);
    cprintf("ֽ");
    gotoxy(5, 8);
    textcolor(LIGHTGRAY);
    cprintf("to successfully boot one OS alongside another with ease.\r\n");
    delay(15);
    gotoxy(10, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(11, 3);
    cprintf("ֽ");
    gotoxy(5, 10);
    textcolor(CYAN);
    cprintf("Info: Existing versions of **SOME** Windows files will be backed up with\r\n");
    delay(15);
    gotoxy(12, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    gotoxy(11, 11);
    textcolor(CYAN);
    cprintf("the extension .BAK. If a file with the .BAK extension exist,\r\n");
    delay(15);
    gotoxy(13, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    gotoxy(11, 12);
    textcolor(CYAN);
    cprintf("the file with the .BAK extension will be deleted.\r\n");
    delay(15);
    gotoxy(14, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    delay(15);
    gotoxy(15, 3);
    cprintf("ֽ");
    gotoxy(5, 14);
    textcolor(RED);
    cprintf("Notice: Make sure that you are running this program without modifications.\r\n");
    delay(15);
    gotoxy(16, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    gotoxy(13, 15);
    textcolor(RED);
    cprintf("I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!\r\n");
    delay(15);
    gotoxy(17, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    delay(15);
    gotoxy(18, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    gotoxy(5, 17);
    textcolor(GREEN);
    cprintf("It is advised to make a backup of your files and installation.\r\n");
    delay(15);
    gotoxy(19, 3);
    textcolor(LIGHTGRAY);
    cprintf("ֽ");
    delay(15);
    gotoxy(20, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(21, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(22, 3);
    cprintf("ֽ");
    delay(15);
    gotoxy(23, 3);
    cprintf("ֽ");
    gotoxy(5, 22);
    textcolor(LIGHTGRAY);
    cprintf("When you are ready to continue, press ENTER.\r\n");
    delay(15);
    gotoxy(24, 3);
    cprintf("ֽ");
    gotoxy(5, 23);
    cprintf("To quit the MultiPatcher program, press F3.\r\n");
    delay(15);
    gotoxy(25, 3);
    cprintf("ֽ");
    delay(5);
    i = 0;

    while (i != 20) {

      i = i + 1;
      gotoxy(i, 1);
      cprintf(" ");
      delay(5);

    }

    i = 0;
    delay(15);
    textcolor(BLACK);
    textbackground(LIGHTGRAY);
    gotoxy(3, 25);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);
    textbackground(BLUE);

  Ch1: //Choice 1
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0x3D) {

      ltkey = '\0';
      QuitAnimation(1);
      textcolor(LIGHTGRAY);
      gotoxy(5, 7);
      cprintf("The Setup program for the MultiPatcher version %d.%d patches some files\r\n", ver, sver);
      gotoxy(5, 8);
      cprintf("to successfully boot one OS alongside another with ease.\r\n");
      gotoxy(5, 10);
      textcolor(CYAN);
      cprintf("Info: Existing versions of **SOME** Windows files will be backed up with\r\n");
      gotoxy(5, 11);
      cprintf("the extension .BAK. If a file with the .BAK extension exist,\r\n");
      gotoxy(5, 12);
      cprintf("the file with the .BAK extension will be deleted.\r\n");
      gotoxy(5, 14);
      textcolor(RED);
      cprintf("Notice: Make sure that you are running this program without modifications.\r\n");
      gotoxy(13, 15);
      cprintf("I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!\r\n");
      gotoxy(5, 17);
      textcolor(GREEN);
      cprintf("It is advised to make a backup of your files and installation.\r\n");
      textcolor(BLACK);
      textbackground(LIGHTGRAY);
      gotoxy(3, 25);
      cprintf("ENTER=Continue  F3=Quit");
      gotoxy(44, 25);
      cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);
      textbackground(BLUE);
      goto Ch1;

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS1;

    }

    else {

      goto Ch1;

    }

  TS1: //Transtition 1
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   What do you want the Setup to do?\r\n\n");
    delay(5);
    textcolor(LIGHTGRAY);
    delay(5);
    cprintf("       Make Windows 1.0 run in MS-DOS 6 and above\r\n");
    delay(5);
    cprintf("       Patch Windows 3.1 to run in Real Mode (Experimental-Risk)\r\n");
    delay(5);
    //cprintf("       Boot Windows 9x with more than 512MB RAM\r\n");
    delay(5);
    cprintf("       Create an NTLDR Bootsector for Windows 9x\r\n");
    delay(5);
    //cprintf("       Make Windows 95 dual-boot with Windows 98 (Experimental)\r\n");
    delay(5);
    cprintf("       Update Windows NT 4.0 IDE driver (Experimental-Risk)\r\n");
    delay(5);
    cprintf("       Patch NTLDR using NTPatcher (Requires Windows XP or NT version 5.1)\r\n\n\n");
    delay(15);
    cprintf("    Use %c", 24);
    cprintf(" and %c", 25);
    cprintf(" to move the highlight to your choice.\r\n\n\n");
    delay(15);
    cprintf("    When you are ready to continue, press ENTER.\r\n");
    delay(5);
    cprintf("    To quit the MultiPatcher program, press F3.");
    delay(5);
    cbar = 1;

  S1: //Screen 1
    gotoxy(1, 5);
    textcolor(WHITE);
    cprintf("   What do you want the Setup to do?\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("       Make Windows 1.0 run in MS-DOS 6 and above\r\n");
    cprintf("       Patch Windows 3.1 to run in Real Mode (Experimental-Risk)\r\n");
    //cprintf("       Boot Windows 9x with more than 512MB RAM\r\n");
    cprintf("       Create an NTLDR Bootsector for Windows 9x\r\n");
    //cprintf("       Make Windows 95 dual-boot with Windows 98 (Experimental)\r\n");
    cprintf("       Update Windows NT 4.0 IDE driver (Experimental-Risk)\r\n");
    cprintf("       Patch NTLDR using NTPatcher (Requires Windows XP or NT version 5.1)\r\n\n\n");
    cprintf("    Use %c", 24);
    cprintf(" and %c", 25);
    cprintf(" to move the highlight to your choice.\r\n\n\n");
    cprintf("    When you are ready to continue, press ENTER.\r\n");
    cprintf("    To quit the MultiPatcher program, press F3.");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);
    i = '\0';
    i = UserChoice();

    if (i == 1) {

      QuitAnimation(2);
      goto S1;

    }

    else if (i == 2) {

      i = '\0';
      DrawBoot("downup");

      if (cbar == 2) {

        goto TS2c2;

      }

      else if (cbar == 5) {

        clrscr();
        shell(".\\file\\c5app1.exe");
        clrscr();
        textcolor(LIGHTGRAY);
        textbackground(BLACK);
        _setcursortype(_NORMALCURSOR);
        gotoxy(1, 1);
        return 0;

      }

      else {

        goto TS2;

      }

    }

    else {

      gotoxy(1, 1);
      printf("Main error from UserChoice: The integer returned is unknown or blocked.");
      return 1;

    }

  TS2:
    textbackground(BLUE);
    textcolor(WHITE);
    delay(5);
    gotoxy(1, 5);
    cprintf("   Where do you want MultiPatcher installed?\r\n\n");
    delay(10);
    textcolor(LIGHTGRAY);
    cprintf("    MultiPatcher needs a couple of settings to work. Please specify\r\n");
    delay(5);
    cprintf("    them to continue.\r\n\n");
    delay(10);

    if (cbar == 1) {

      goto TS2c1;

    }

    else if (cbar == 2) {

      goto TS2c2p2;

    }

    else if (cbar == 3) {

      goto TS2c3;

    }

    else if (cbar == 4) {

      goto TS2c4p2;

    }

    else {

     gotoxy(1, 1);
     printf("Function not implemented yet!");
     return 1;

    }

  TS2c1: //Transition 2 Choice 1
    textcolor(WHITE);
    cprintf("    Windows 1.0 Path: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the path where Windows 1.0 is installed in\r\n");
    delay(5);
    cprintf("      order to determine the location of the BIN file.\r\n\n");
    delay(10);
    textcolor(DARKGRAY);
    cprintf("    Config.sys Path:  ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the location of your CONFIG.SYS DOS file\r\n");
    delay(5);
    cprintf("      to make the changes take effect fully.\r\n\n");
    delay(10);
    textcolor(LIGHTGRAY);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    delay(5);
    cprintf("    Press <-TAB-> to cycle between the two sections.\r\n");
    delay(5);
    tKey = 1;

  S2c1: //Screen 2 Choice 1

    textcolor(LIGHTGRAY);
    textbackground(BLUE);
    gotoxy(14, 7);
    cprintf("her needs a couple of settings to work. Please speci");
    gotoxy(14, 8);
    cprintf("ontinue.");

    if (tKey == 1) {

      textcolor(WHITE);

    }

    else if (tKey == 2) {

      textcolor(DARKGRAY);

    }

    gotoxy(5, 10);
    cprintf("Windows 1.0 Path: ");
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(23, 10);
    cprintf("%s", WinPath);

    if (tKey == 1) {

      cprintf("Ü");
      textcolor(WHITE);

    }

    else if (tKey == 2) {

      textcolor(DARKGRAY);

    }

    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the path where Windows 1.0 is installed in\r\n");
    cprintf("      order to determine the location of the BIN file.\r\n\n");

    if (tKey == 2) {

      textcolor(WHITE);

    }

    else if (tKey == 1) {

      textcolor(DARKGRAY);

    }

    cprintf("    Config.sys Path:  ");
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(23, 15);
    cprintf("%s", C1T2Path);

    if (tKey == 2) {

      cprintf("Ü");
      textcolor(WHITE);

    }

    else if (tKey == 1) {

      textcolor(DARKGRAY);

    }

    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the location of your CONFIG.SYS DOS file\r\n");
    cprintf("      to make the changes take effect fully.\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    cprintf("    Press <-TAB-> to cycle between the two sections.\r\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch3: //Choice 3
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(3);
        goto S2c1;

      }

      else {

        goto Ch3;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c1p2;

    }

    else if (ltkey == 8) { //Backspace Key

      if ((tKey == 1) && (strlen(WinPath) > 0)) {

        WinPath[strlen(WinPath) - 1] = '\0'; //Remove one char from end
        goto S2c1;

      }

      else if ((tKey == 2) && (strlen(C1T2Path) > 0)) {

        C1T2Path[strlen(C1T2Path) - 1] = '\0';
        goto S2c1;

      }

      else {

        goto Ch3;

      }

    }

    else if (ltkey == 9) { //TAB key

      if (tKey == 1) {

        tKey = 2;

      }

      else if (tKey == 2) {

        tKey = 1;

      }

      goto S2c1;

    }

    else {

      if ((tKey == 1) && (strlen(WinPath) < 48)) {

        if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '\\' || ltkey == ':' || ltkey == '.' || ltkey == '-')) {

          goto Ch3;

        }

        else {

          strncat(WinPath, &ltkey, 1);
          goto S2c1;

        }

      }

      else if ((tKey == 2) && (strlen(C1T2Path) < 48)) {


        if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '\\' || ltkey == ':' || ltkey == '.' || ltkey == '-')) {

          goto Ch3;

        }

        else {

          strncat(C1T2Path, &ltkey, 1);
          goto S2c1;

        }

      }

      else {

        goto Ch3;

      }

    }

  TS2c1p2: //Transition 2 Choice 1 Part 2
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    delay(5);
    textcolor(LIGHTGRAY);
    delay(5);
    cprintf("    Please make sure that these are the correct paths.\r\n\n");
    delay(10);
    textcolor(WHITE);
    cprintf("      Windows 1.0:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", WinPath);
    delay(10);
    textcolor(WHITE);
    cprintf("      Config.sys:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n\n\n", C1T2Path);
    delay(20);
    cprintf("    If the above values are correct, press ENTER to install.\r\n\n");
    delay(10);
    cprintf("    If you want to change the values, press ESC.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);

  S2c1p2: //Screen 2 Choice 1 Part 2
    gotoxy(1, 5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    Please make sure that these are the correct paths.\r\n\n");
    textcolor(WHITE);
    cprintf("      Windows 1.0:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", WinPath);
    textcolor(WHITE);
    cprintf("      Config.sys:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n\n\n", C1T2Path);
    cprintf("    If the above values are correct, press ENTER to install.\r\n\n");
    cprintf("    If you want to change the values, press ESC.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue ESC=Cancel F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch4: //Choice 4
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS2;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(4);
        goto S2c1p2;

      }

      else {

        goto Ch4;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c1p3;

    }

  TS2c1p3: //Transition 2 Choice 1 Part 3
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Installing...\r\n\n");
    gotoxy(53, 4);
    cprintf("Console Output");
    delay(10);
    gotoxy(40, 5);
    sprintf(ctemp, "echo  MultiPatcher %d.%d.%d", ver, sver, build);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(40, 6);
    system("echo ---------------------");
    gotoxy(1, 7);
    clreol();
    gotoxy(40, 7);
    sprintf(ctemp, "echo Copy: Setver to %s",  WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 8);
    clreol();
    sprintf(ctemp, "%s\\SETVER.BAK", WinPath);

    if (fsCheck(ctemp)) {

      remove(ctemp);

    }

    ctemp [0] = '\0';
    ctmp2 [0] = '\0';
    sprintf(ctemp, "%s\\SETVER.EXE", WinPath);
    sprintf(ctmp2, "%s\\SETVER.BAK", WinPath);

    if (fsCheck(ctemp)) {

      rename(ctemp, ctmp2);

    }

    gotoxy(40, 8);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\c1file1.sup %s\\SETVER.EXE >NUL", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 9);
    clreol();
    gotoxy(40, 9);
    system("echo Updating reported version");
    strncpy(ctmp2, WinPath, 2);
    sprintf(ctemp, "%s", ctmp2);
    system(ctemp);
    ctemp[0] = '\0';
    ctmp2[0] = '\0';
    sprintf(ctemp, "cd %s", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "%s\\SETVER.EXE WIN100.BIN 3.31", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 10);
    clreol();
    gotoxy(40, 10);
    system("echo Updating Configuration");
    gotoxy(1, 11);
    clreol();
    gotoxy(40, 11);
    sprintf(ctemp, "echo DEVICE=%s\\SETVER.EXE >> %s", WinPath, C1T2Path);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 9);
    delay(5);
    cprintf("    MultiPatcher is now done. If you\r\n");
    delay(5);
    cprintf("    had entered everything correctly,\r\n");
    delay(5);
    cprintf("    it should work.\r\n\n");
    delay(10);
    cprintf("    Have fun!\r\n\n\n\n\n\n");
    delay(30);
    textcolor(LIGHTGRAY);
    cprintf("    To re-run MSE from the beginning, press R.\r\n\n");
    delay(10);
    cprintf("    To select another option, press ESCAPE.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ESC=Options R=Restart F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch5: //Choice 5
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS1;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(7927);

      }

      else {

        goto Ch5;

      }

    }

    else if (ltkey == 'R' || ltkey == 'r') {

      ltkey = '\0';
      DrawBoot("freset");
      goto begin;

    }

    else {

      goto Ch5;

    }

  TS2c2: //Transition 2 Choice 2
    textcolor(WHITE);
    cprintf("\r\n   Do you want to continue?\r\n\n");
    delay(10);
    cprintf("      THE WINDOWS 3.1 REAL-MODE PATCH COULD POTENTIALLY RENDER YOUR SYSTEM\r\n");
    delay(5);
    cprintf("      UNBOOTABLE! THIS IS ONLY NEEDED TO BE INSTALLED IF YOUR SYSTEM\r\n");
    delay(5);
    cprintf("      CANNOT BOOT NORMALLY (WIN3.1 WON'T BOOT, BUT 3.0 BOOTS IN REAL-MODE\r\n");
    delay(5);
    cprintf("      OR SOMETHING) IN PROTECTED MODE. THIS MAY ALSO REDUCE THE COMPATIBILITY\r\n");
    delay(5);
    cprintf("      OF WINDOWS 3.1 WITH SOME APPS. IT CONTAINS FILES FROM OLDER WINDOWS\r\n");
    delay(5);
    cprintf("      BUILDS (WINDOWS 3.1.026d).\r\n\n\n");
    delay(15);
    textcolor(LIGHTGRAY);
    cprintf("    Press ENTER to continue.\r\n\n");
    delay(10);
    cprintf("    Any other key will bring you back to the previous screen.\r\n");
    delay(5);
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch6: //Choice 6
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 13) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2;

    }

    else {

      if (ltkey == 0) {

        ltkey = getch();

      }

      DrawBoot("downup");
      goto TS1;

    }



  TS2c2p2: //Transition 2 Choice 2 Part 2
    textcolor(WHITE);
    cprintf("    Windows 3.1 Path: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the path where Windows 3.1 is installed in\r\n");
    delay(5);
    cprintf("      order to patch it.\r\n\n");
    textcolor(LIGHTGRAY);
    delay(10);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    delay(5);
    cprintf("    You can type 0-9, A-Z, a-z, '-', '.', ':' ,& '\'.\r\n\n\n");
    delay(15);
    cprintf("    When you are ready to continue, press ENTER.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n");
    delay(5);

  S2c2p2: //Screen 2 Choice 2 Part 2
    textcolor(LIGHTGRAY);
    textbackground(BLUE);
    gotoxy(14, 7);
    cprintf("her needs a couple of settings to work. Please speci");
    gotoxy(14, 8);
    cprintf("ontinue.");
    gotoxy(5, 10);
    textcolor(WHITE);
    cprintf("Windows 3.1 Path: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(23, 10);
    textcolor(BLACK);
    cprintf("%sÜ", WinPath);
    textbackground(BLUE);
    textcolor(WHITE);
    cprintf("\r\n\n      MultiPatcher needs the path where Windows 3.1 is installed in\r\n");
    cprintf("      order to patch it.\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    cprintf("    You can type 0-9, A-Z, a-z, '-', '.', ':' ,& '\'.\r\n\n\n");
    cprintf("    When you are ready to continue, press ENTER.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch7: //Choice 7
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(5);
        goto S2c2p2;

      }

      else {

        goto Ch7;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c2p3;

    }

    else if (ltkey == 8) { //Backspace Key

      if (strlen(WinPath) > 0) {

        WinPath[strlen(WinPath) - 1] = '\0'; //Remove one char from end
        goto S2c2p2;

      }

      else {

        goto Ch7;

      }

    }

    else if (strlen(WinPath) < 48) {

      if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '\\' || ltkey == ':' || ltkey == '.' || ltkey == '-')) {

        goto Ch7;

      }

      else {

        strncat(WinPath, &ltkey, 1);
        goto S2c2p2;

      }

    }

    else {

      goto Ch7;

    }

  TS2c2p3: //Transition 2 Choice 2 Part 3
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    delay(5);
    textcolor(LIGHTGRAY);
    delay(5);
    cprintf("    Please make sure that this is the correct path.\r\n\n");
    delay(10);
    textcolor(WHITE);
    cprintf("      Windows 3.1:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n\n\n", WinPath);
    delay(20);
    cprintf("    If the above value is correct, press ENTER to install.\r\n\n");
    delay(10);
    cprintf("    If you want to change the value, press ESC.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);

  S2c2p3: //Screen 2 Choice 2 Part 3
    gotoxy(1, 5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    Please make sure that this is the correct path.\r\n\n");
    textcolor(WHITE);
    cprintf("      Windows 3.1:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n\n\n", WinPath);
    cprintf("    If the above value is correct, press ENTER to install.\r\n\n");
    cprintf("    If you want to change the value, press ESC.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue ESC=Cancel F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch8: //Choice 8
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS2;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(6);
        goto S2c2p3;

      }

      else {

        goto Ch8;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c2p4;

    }

  TS2c2p4: //Transition 2 Choice 2 Part 4
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Installing...\r\n\n");
    gotoxy(53, 4);
    cprintf("Console Output");
    delay(10);
    gotoxy(40, 5);
    sprintf(ctemp, "echo  MultiPatcher %d.%d.%d", ver, sver, build);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(40, 6);
    system("echo ---------------------");
    gotoxy(1, 7);
    clreol();
    gotoxy(40, 7);
    sprintf(ctemp, "echo Checking existing files");
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 8);
    clreol();
    gotoxy(40, 8);
    sprintf(ctemp, "%s\\mse\\promode", WinPath);
    remove(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "%s\\mse\\winx16", WinPath);
    remove(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "md %s\\mse", WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "md %s\\mse\\promode", WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "md %s\\mse\\winx16", WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 9);
    clreol();
    gotoxy(40, 9);
    system("echo Copying current SYS files");
    sprintf(ctemp, "%s\\win.com", WinPath);
    sprintf(ctmp2, "%s\\prowin.com", WinPath);
    rename(ctemp, ctmp2);
    ctemp[0] = '\0';
    ctmp2[0] = '\0';
    sprintf(ctemp, "copy %s\\progman.exe %s\\mse\\promode\\progman.exe >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system.ini %s\\mse\\promode\\system.ini >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\control.exe %s\\mse\\promode\\control.exe >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\kernel.exe %s\\mse\\promode\\kernel.exe >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\dosswap.exe %s\\mse\\promode\\dosswap.exe >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\gdi.exe %s\\mse\\promode\\gdi.exe >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\user.exe %s\\mse\\promode\\user.exe >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\shell.dll %s\\mse\\promode\\shell.dll >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\commdlg.dll %s\\mse\\promode\\commdlg.dll >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\system.drv %s\\mse\\promode\\system.drv >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\keyboard.drv %s\\mse\\promode\\keyboard.drv >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\mouse.drv %s\\mse\\promode\\mouse.drv >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\comm.drv %s\\mse\\promode\\comm.drv >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy %s\\system\\sound.drv %s\\mse\\promode\\sound.drv >nul ", WinPath, WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 10);
    clreol();
    gotoxy(40, 10);
    system("echo Copying Patch files");
    sprintf(ctemp, "copy .\\file\\C2file1.sup %s\\MSE\\WINX16\\PROGMAN.EXE >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file2.sup %s\\MSE\\WINX16\\CONTROL.EXE >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file3.sup %s\\MSE\\WINX16\\SYSTEM.INI >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file4.sup %s\\MSE\\WINX16\\KERNEL.EXE >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file5.sup %s\\MSE\\WINX16\\DOSSWAP.EXE >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file6.sup %s\\MSE\\WINX16\\GDI.EXE >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file7.sup %s\\MSE\\WINX16\\USER.EXE >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file8.sup %s\\MSE\\WINX16\\SHELL.DLL >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file9.sup %s\\MSE\\WINX16\\COMMDLG.DLL >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file10.sup %s\\MSE\\WINX16\\SYSTEM.DRV >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file11.sup %s\\MSE\\WINX16\\KEYBOARD.DRV >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file12.sup %s\\MSE\\WINX16\\MOUSE.DRV >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file13.sup %s\\MSE\\WINX16\\COMM.DRV >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file14.sup %s\\MSE\\WINX16\\SOUND.DRV >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    sprintf(ctemp, "copy .\\file\\C2file15.sup %s\\WIN16.COM >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 11);
    clreol();
    gotoxy(40, 11);
    system("echo Updating WIN.COM");
    sprintf(ctemp, "copy .\\file\\C2file16.sup %s\\WIN.COM >nul ", WinPath);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Installing...\r\n\n");
    gotoxy(53, 4);
    cprintf("Console Output");
    gotoxy(1, 9);
    delay(5);
    cprintf("    MultiPatcher is now done. If you\r\n");
    delay(5);
    cprintf("    had entered everything correctly,\r\n");
    delay(5);
    cprintf("    it should work.\r\n\n");
    delay(10);
    cprintf("    Have fun!\r\n\n\n\n\n\n");
    delay(30);
    textcolor(LIGHTGRAY);
    cprintf("    To re-run MSE from the beginning, press R.\r\n\n");
    delay(10);
    cprintf("    To select another option, press ESCAPE.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ESC=Options R=Restart F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch9: //Choice 9
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS1;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(7927);

      }

      else {

        goto Ch5;

      }

    }

    else if (ltkey == 'R' || ltkey == 'r') {

      ltkey = '\0';
      DrawBoot("freset");
      goto begin;

    }

    else {

      goto Ch5;

    }

  TS2c3: //Transition 2 Choice 3
    textcolor(WHITE);
    cprintf("    Output Path: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the path to output the Windows bootsector to.\r\n");
    delay(5);
    cprintf("      THE PATH MUST EXIST! It is recommended to use your boot directory.\r\n\n");
    delay(10);
    textcolor(DARKGRAY);
    cprintf("    Bootfile Extension:  ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 3) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      The Bootfile Extension is the extension that comes after the\r\n");
    delay(5);
    cprintf("      name of your IO and MSDOS files. Example: If name is MSDOS.MSE,\r\n");
    delay(5);
    cprintf("      you should put the extension as MSE. (IMPORTANT!)\r\n\n");
    delay(10);
    textcolor(LIGHTGRAY);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    delay(5);
    cprintf("    Press <-TAB-> to cycle between the two sections.\r\n");
    delay(5);
    tKey = 1;

  S2c3: //Screen 2 Choice 3
    textcolor(LIGHTGRAY);
    textbackground(BLUE);
    gotoxy(14, 7);
    cprintf("her needs a couple of settings to work. Please speci");
    gotoxy(14, 8);
    cprintf("ontinue.");

    if (tKey == 1) {

      textcolor(WHITE);

    }

    else if (tKey == 2) {

      textcolor(DARKGRAY);

    }

    gotoxy(5, 10);
    cprintf("Output Path: ");
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(18, 10);
    cprintf("%s", OutPath);

    if (tKey == 1) {

      cprintf("Ü");
      textcolor(WHITE);

    }

    else if (tKey == 2) {

      textcolor(DARKGRAY);

    }

    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the path to output the Windows bootsector to.\r\n");
    cprintf("      THE PATH MUST EXIST! It is recommended to use your boot directory.\r\n\n");

    if (tKey == 2) {

      textcolor(WHITE);

    }

    else if (tKey == 1) {

      textcolor(DARKGRAY);

    }

    cprintf("    Bootfile Extension: ");
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    i = 0;

    while (i != 4) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(25, 15);
    cprintf("%s", C3T2Path);

    if (tKey == 2) {

      cprintf("Ü");
      textcolor(WHITE);

    }

    else if (tKey == 1) {

      textcolor(DARKGRAY);

    }

    textbackground(BLUE);
    cprintf("\r\n\n      The Bootfile Extension is the extension that comes after the\r\n");
    cprintf("      name of your IO and MSDOS files. Example: If name is MSDOS.MSE,\r\n");
    cprintf("      you should put the extension as MSE. (IMPORTANT!)\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    cprintf("    Press <-TAB-> to cycle between the two sections.\r\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch10: //Choice 10
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(7);
        goto S2c3;

      }

      else {

        goto Ch10;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c3p2;

    }

    else if (ltkey == 8) { //Backspace Key

      if ((tKey == 1) && (strlen(OutPath) > 0)) {

        OutPath[strlen(OutPath) - 1] = '\0'; //Remove one char from end
        goto S2c3;

      }

      else if ((tKey == 2) && (strlen(C3T2Path) > 0)) {

        C3T2Path[strlen(C3T2Path) - 1] = '\0';
        goto S2c3;

      }

      else {

        goto Ch10;

      }

    }

    else if (ltkey == 9) { //TAB key

      if (tKey == 1) {

        tKey = 2;

      }

      else if (tKey == 2) {

        tKey = 1;

      }

      goto S2c3;

    }

    else {

      if ((tKey == 1) && (strlen(OutPath) < 48)) {

        if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '\\' || ltkey == ':' || ltkey == '.' || ltkey == '-')) {

          goto Ch10;

        }

        else {

          strncat(OutPath, &ltkey, 1);
          goto S2c3;

        }

      }

      else if ((tKey == 2) && (strlen(C3T2Path) < 3)) {


        if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '-')) {

          goto Ch10;

        }

        else {

          strncat(C3T2Path, &ltkey, 1);
          goto S2c3;

        }

      }

      else {

        goto Ch10;

      }

    }

  TS2c3p2: //Transition 2 Choice 3 Part 2
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   What's your current MS-DOS Version?\r\n\n");
    delay(5);
    textcolor(LIGHTGRAY);
    delay(5);
    cprintf("    Please provide the MS-DOS version that you are in currently.\r\n\n");
    delay(10);
    textcolor(WHITE);
    cprintf("    MS-DOS Version: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 9) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs your current MS-DOS Version to run the\r\n");
    delay(5);
    cprintf("      appropriate version of DEBUG. If your system has DEBUG in its\r\n");
    delay(5);
    cprintf("      path variable, you can type \"Included\". Other options are:\r\n");
    delay(5);
    cprintf("      \"5.0\" for DOS 5.0, \"6.22\" for DOS 6.22, and \"7.1\" for DOS 7.1.\r\n");
    delay(5);
    cprintf("      These are case-sensitive, so make sure you type correctly!\r\n\n\n");
    delay(15);
    textcolor(LIGHTGRAY);
    cprintf("    When you are ready to continue, press ENTER.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n");
    delay(5);

  S2c3p2: //Screen 2 Choice 3 Part 2
    gotoxy(1, 5);
    textbackground(BLUE);
    textcolor(WHITE);
    cprintf("   What's your current MS-DOS Version?\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    Please provide the MS-DOS version that you are in currently.\r\n\n");
    textcolor(WHITE);
    cprintf("    MS-DOS Version: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 9) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(21, 9);
    textcolor(BLACK);
    cprintf("%sÜ", DOSVer);
    textbackground(BLUE);
    textcolor(WHITE);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs your current MS-DOS Version to run the\r\n");
    cprintf("      appropriate version of DEBUG. If your system has DEBUG in its\r\n");
    cprintf("      path variable, you can type \"Included\". Other options are:\r\n");
    cprintf("      \"5.0\" for DOS 5.0, \"6.22\" for DOS 6.22, and \"7.1\" for DOS 7.1.\r\n");
    cprintf("      These are case-sensitive, so make sure you type correctly!\r\n\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    When you are ready to continue, press ENTER.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");

    if (Error != 1) {


      gotoxy(30, 25);
      cprintf("              ³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

    }

    else {

      gotoxy(30, 25);
      cprintf("³ Error: The variable must contain a valid value!");
      Error = 0;


    }


  Ch12: //Choice 12
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(9);
        goto S2c3p2;

      }

      else {

        goto Ch12;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';

      if (!(strcmp(DOSVer, "Included") == 0 || strcmp(DOSVer, "5.0") == 0 || strcmp(DOSVer, "6.22") == 0 || strcmp(DOSVer, "7.1") == 0)) {

        Error = 1;
        goto S2c3p2;

      }

      DrawBoot("downup");
      goto TS2c3p3;

    }

    else if (ltkey == 8) { //Backspace Key

      if (strlen(DOSVer) > 0) {

        DOSVer[strlen(DOSVer) - 1] = '\0'; //Remove one char from end
        goto S2c3p2;

      }

      else {

        goto Ch12;

      }

    }

    else if (strlen(DOSVer) < 8) {

      if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '\\' || ltkey == ':' || ltkey == '.' || ltkey == '-')) {

        goto Ch12;

      }

      else {

        strncat(DOSVer, &ltkey, 1);
        goto S2c3p2;

      }

    }

    else {

      goto Ch12;

    }



  TS2c3p3: //Transition 2 Choice 3 Part 3
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    delay(5);
    textcolor(LIGHTGRAY);
    delay(5);
    cprintf("    Please make sure that these are the correct paths.\r\n\n");
    delay(10);
    textcolor(WHITE);
    cprintf("      Output Path:");

    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", OutPath);
    delay(10);
    textcolor(WHITE);
    cprintf("      Bootfile Extension:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", C3T2Path);
    delay(10);
    textcolor(WHITE);
    cprintf("      DEBUG Version:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", DOSVer);
    delay(10);
    cprintf("    If the above values are correct, press ENTER to install.\r\n\n");
    delay(10);
    cprintf("    If you want to change the values, press ESC.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);

  S2c3p3: //Screen 2 Choice 3 Part 3
    gotoxy(1, 5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    Please make sure that these are the correct paths.\r\n\n");
    textcolor(WHITE);
    cprintf("      Output Path:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", OutPath);
    textcolor(WHITE);
    cprintf("      Bootfile Extension:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", C3T2Path);
    textcolor(WHITE);
    cprintf("      DEBUG Version:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n", DOSVer);
    cprintf("    If the above values are correct, press ENTER to install.\r\n\n");
    cprintf("    If you want to change the values, press ESC.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch11: //Choice 11
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS2;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(8);
        goto S2c3p3;

      }

      else {

        goto Ch11;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c3p4;

    }

  TS2c3p4: //Transition 2 Choice 3 Part 4
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Installing...\r\n\n");
    gotoxy(53, 4);
    cprintf("Console Output");
    delay(10);
    gotoxy(40, 5);
    sprintf(ctemp, "echo  MultiPatcher %d.%d.%d", ver, sver, build);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(40, 6);
    system("echo ---------------------");
    gotoxy(1, 7);
    clreol();
    gotoxy(40, 7);
    sprintf(ctemp, "echo Compiling temp file");
    system(ctemp);
    ctemp[0] = '\0';

    file = fopen(".\\file\\C3FILE1.SUP", "w");

      fprintf(file, "L 100 2 0 1\n");
      fprintf(file, "e 2E0 \"%s\"\n", C3T2Path);
      fprintf(file, "e 2EB \"%s\"\n", C3T2Path);
      fprintf(file, "R BX\n");
      fprintf(file, "0\n");
      fprintf(file, "R CX\n");
      fprintf(file, "200\n");
      fprintf(file, "N %s\\boot.dat\n", OutPath);
      fprintf(file, "W\n");
      fprintf(file, "Q\n");

    fclose(file);

    gotoxy(1, 8);
    clreol();
    gotoxy(40, 8);
    system("echo Checking existing files");

    sprintf(ctemp, "%s\\boot.bak", OutPath);

    if (fsCheck(ctemp)) {

      remove(ctemp);

    }

    ctemp[0] = '\0';
    sprintf(ctemp, "%s\\boot.dat", OutPath);

    if (fsCheck(ctemp)) {

      ctemp[0] = '\0';
      sprintf(ctemp, "%s\\boot.dat", OutPath);
      sprintf(ctmp2, "%s\\boot.bak", OutPath);
      rename(ctemp, ctmp2);
      ctmp2[0] = '\0';

    }

    ctemp[0] = '\0';
    gotoxy(1, 9);
    clreol();
    gotoxy(40, 9);
    system("echo Building bootsector as BOOT.DAT");

    if (strcmp(DOSVer, "5.0") == 0) {

      shell(".\\file\\C3APP1.EXE <file\\C3FILE1.SUP >NUL");

    }

    else if (strcmp(DOSVer, "6.22") == 0) {

      shell(".\\file\\C3APP2.EXE <file\\C3FILE1.SUP >NUL");

    }

    else if (strcmp(DOSVer, "7.1") == 0) {

      shell(".\\file\\C3APP3.EXE <file\\C3FILE1.SUP >NUL");

    }

    else if (strcmp(DOSVer, "Included") == 0) {

      shell("DEBUG <file\\C3FILE1.SUP >NUL");

    }

    else {

      gotoxy(1, 1);
      printf("Error: Invalid value in variable DOSVer");
      return 0;

    }

    gotoxy(1, 10);
    clreol();
    gotoxy(40, 10);
    system("echo Clearing temporary files");
    file = fopen(".\\file\\C3FILE1.SUP", "w");
    fclose(file);
    gotoxy(1, 9);
    textcolor(WHITE);
    textbackground(BLUE);
    delay(5);
    cprintf("    MultiPatcher is now done. If you\r\n");
    delay(5);
    cprintf("    had entered everything correctly,\r\n");
    delay(5);
    cprintf("    it should work.\r\n\n");
    delay(10);
    cprintf("    Have fun!\r\n\n\n\n\n\n");
    delay(30);
    textcolor(LIGHTGRAY);
    cprintf("    To re-run MSE from the beginning, press R.\r\n\n");
    delay(10);
    cprintf("    To select another option, press ESCAPE.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ESC=Options R=Restart F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch13:
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS1;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(7927);

      }

      else {

        goto Ch13;

      }

    }

    else if (ltkey == 'R' || ltkey == 'r') {

      ltkey = '\0';
      DrawBoot("freset");
      goto begin;

    }

    else {

      goto Ch13;

    }

  TS2c4: //Transition 2 Choice 4
    textcolor(WHITE);
    cprintf("\r\n   Do you want to continue?\r\n\n");
    textcolor(RED);
    delay(10);
    cprintf("      THE WINDOWS NT 4 IDE-DRIVER UPDATE COULD POTENTIALLY RENDER YOUR SYSTEM\r\n");
    delay(5);
    cprintf("      UNBOOTABLE! THIS IS ONLY NEEDED TO BE INSTALLED IF YOUR SYSTEM\r\n");
    delay(5);
    cprintf("      CANNOT BOOT WITH BIGGER HDD PARTITIONS. THIS WILL WORK ONLY ON SOME\r\n");
    delay(5);
    cprintf("      SYSTEMS. IF YOU CONTINUE, YOU ARE AGREEING THAT YOU UNDERSTOOD THIS\r\n");
    delay(5);
    cprintf("      WARNING.\r\n\n\n");
    delay(15);
    textcolor(LIGHTGRAY);
    cprintf("    Press ENTER to continue.\r\n\n");
    delay(10);
    cprintf("    Any other key will bring you back to the previous screen.\r\n");
    delay(5);
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch14: //Choice 14
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 13) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2;

    }

    else {

      if (ltkey == 0) {

        ltkey = getch();

      }

      DrawBoot("downup");
      goto TS1;

    }

  TS2c4p2: //Transition 2 Choice 4 Part 2
    textcolor(WHITE);
    cprintf("    Windows NT Path: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    delay(10);
    textbackground(BLUE);
    cprintf("\r\n\n      MultiPatcher needs the path where Windows NT is installed in\r\n");
    delay(5);
    cprintf("      order to update its driver.\r\n\n");
    textcolor(LIGHTGRAY);
    delay(10);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    delay(5);
    cprintf("    You can type 0-9, A-Z, a-z, '-', '.', ':' ,& '\'.\r\n\n\n");
    delay(15);
    cprintf("    When you are ready to continue, press ENTER.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n");
    delay(5);

  S2c4p2: //Screen 2 Choice 4 Part 2
    textcolor(LIGHTGRAY);
    textbackground(BLUE);
    gotoxy(14, 7);
    cprintf("her needs a couple of settings to work. Please speci");
    gotoxy(14, 8);
    cprintf("ontinue.");
    gotoxy(5, 10);
    textcolor(WHITE);
    cprintf("Windows NT Path: ");
    textbackground(LIGHTGRAY);
    i = 0;

    while (i != 49) {

      i = i + 1;
      cprintf(" ");

    }

    gotoxy(22, 10);
    textcolor(BLACK);
    cprintf("%sÜ", WinPath);
    textbackground(BLUE);
    textcolor(WHITE);
    cprintf("\r\n\n      MultiPatcher needs the path where Windows NT is installed in\r\n");
    cprintf("      order to update its driver.\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    The maximum characters you can type (limit) is 48.\r\n");
    cprintf("    You can type 0-9, A-Z, a-z, '-', '.', ':' ,& '\'.\r\n\n\n");
    cprintf("    When you are ready to continue, press ENTER.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue  F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch15: //Choice 15
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(10);
        goto S2c4p2;

      }

      else {

        goto Ch15;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      goto TS2c4p3;

    }

    else if (ltkey == 8) { //Backspace Key

      if (strlen(WinPath) > 0) {

        WinPath[strlen(WinPath) - 1] = '\0'; //Remove one char from end
        goto S2c4p2;

      }

      else {

        goto Ch15;

      }

    }

    else if (strlen(WinPath) < 48) {

      if (!(isalpha(ltkey) || isdigit(ltkey) || ltkey == '\\' || ltkey == ':' || ltkey == '.' || ltkey == '-')) {

        goto Ch15;

      }

      else {

        strncat(WinPath, &ltkey, 1);
        goto S2c4p2;

      }

    }

    else {

      goto Ch15;

    }

  TS2c4p3: //Transition 2 Choice 4 Part 3
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    delay(5);
    textcolor(LIGHTGRAY);
    delay(5);
    cprintf("    Please make sure that this is the correct path.\r\n\n");
    delay(10);
    textcolor(WHITE);
    cprintf("      Windows NT:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n\n\n", WinPath);
    delay(20);
    cprintf("    If the above value is correct, press ENTER to install.\r\n\n");
    delay(10);
    cprintf("    If you want to change the value, press ESC.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);

  S2c4p3: //Screen 2 Choice 4 Part 3
    gotoxy(1, 5);
    textcolor(WHITE);
    cprintf("   Ready to install MultiPatcher?\r\n\n");
    textcolor(LIGHTGRAY);
    cprintf("    Please make sure that this is the correct path.\r\n\n");
    textcolor(WHITE);
    cprintf("      Windows NT:");
    textcolor(LIGHTGRAY);
    cprintf(" %s\r\n\n\n\n", WinPath);
    cprintf("    If the above value is correct, press ENTER to install.\r\n\n");
    cprintf("    If you want to change the value, press ESC.\r\n\n");
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ENTER=Continue ESC=Cancel F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch16: //Choice 16
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS2;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(11);
        goto S2c4p3;

      }

      else {

        goto Ch16;

      }

    }

    else if (ltkey == 13 || ltkey == 10) {

      ltkey = '\0';
      DrawBoot("downup");
      gotoxy(1, 1);
      printf("NEXT PAGE!");
      //goto TS2c4p4;

    }

  TS2c4p4:
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Installing...\r\n\n");
    gotoxy(53, 4);
    cprintf("Console Output");
    delay(10);
    gotoxy(40, 5);
    sprintf(ctemp, "echo  MultiPatcher %d.%d.%d", ver, sver, build);
    system(ctemp);
    ctemp[0] = '\0';
    gotoxy(40, 6);
    system("echo ---------------------");
    gotoxy(1, 7);
    clreol();
    gotoxy(40, 7);
    system("echo Checking existing files");
    sprintf(ctemp, "%s\\system32\\drivers\\atapi.sys", WinPath);
    sprintf(ctmp2, "%s\\system32\\drivers\\atapi.bak", WinPath);

    if (fsCheck(ctmp2)) {

      remove(ctmp2);

    }

    rename(ctemp, ctmp2);
    ctemp[0] = '\0';
    ctmp2[0] = '\0';
    gotoxy(1, 8);
    clreol();
    gotoxy(40, 8);
    system("echo Installing new driver");
    sprintf(ctemp, "copy .\\file\\C4file1.sup %s\\system32\\drivers\\atapi.sys",WinPath);
    shell(ctemp);
    ctemp[0] = '\0';
    gotoxy(1, 5);
    delay(5);
    textcolor(WHITE);
    cprintf("   Installing...\r\n\n");
    gotoxy(53, 4);
    cprintf("Console Output");
    gotoxy(1, 9);
    delay(5);
    cprintf("    MultiPatcher is now done. If you\r\n");
    delay(5);
    cprintf("    had entered everything correctly,\r\n");
    delay(5);
    cprintf("    it should work.\r\n\n");
    delay(10);
    cprintf("    Have fun!\r\n\n\n\n\n\n");
    delay(30);
    textcolor(LIGHTGRAY);
    cprintf("    To re-run MSE from the beginning, press R.\r\n\n");
    delay(10);
    cprintf("    To select another option, press ESCAPE.\r\n\n");
    delay(10);
    cprintf("    To quit the MultiPatcher program, press F3.\r\n\n");
    delay(10);
    gotoxy(3, 25);
    textbackground(LIGHTGRAY);
    textcolor(BLACK);
    cprintf("ESC=Options R=Restart F3=Quit");
    gotoxy(44, 25);
    cprintf("³ MSE Version %d.%d build %d #%d%d%d", ver, sver, build, ydate, mdate, ddate);

  Ch17: //Choice 17
    ltkey = '\0';
    ltkey = getch();

    if (ltkey == 27) {

      DrawBoot("downup");
      goto TS1;

    }


    else if (ltkey == 0) {

      ltkey = getch();

      if (ltkey == 0x3D) {

        ltkey = '\0';
        QuitAnimation(7927);

      }

      else {

        goto Ch17;

      }

    }

    else if (ltkey == 'R' || ltkey == 'r') {

      ltkey = '\0';
      DrawBoot("freset");
      goto begin;

    }

    else {

      goto Ch17;

    }

  end:
    getch();
    clrscr();
    textcolor(LIGHTGRAY);
    textbackground(BLACK);
    _setcursortype(_NORMALCURSOR);
    gotoxy(1, 1);
    return 0;

}







































