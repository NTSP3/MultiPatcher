#include <dirent.h>
#include <stdio.h>
#include <conio.h>

FILE *filechk;
void WhileLoopRule();
void ProgramOption();
void OpenQuickExit();
void UsrOptSelect1();
void UsrOptSelect2();
void UsrOptSelect3();
void DevOptSelect1();
void DevOptSelect2();
void DevOptSelect3();
void DevOptSelect4();
void DevOptSelect5();
void SetMultiValue();
void LoadScrsCheck();
void WelcomeWindow();
void WelWinNoTimer();
char currscr;
char uparrow;
char downarr;
int devmenu;
int denychk;
int denyani;
int devmode;
int fbfmode;
int ncolopt;
int nocolor;
int optboot;
int yesorno;
int colsbar;
int main(int argc, char* argv[]) {

  if (argc > 1 && strcmp(argv[1], "/??") == 0) {

    printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
    printf("\r\n   /CL         Load setup in monochrome mode");
    printf("\r\n   /NC         Skip file check");
    printf("\r\n   /NH         Do not hide cursor (DEV only)");
    printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
    printf("\r\n   /NI         Do not load animations");
    printf("\r\n   /??         Show program syntax");
    printf("\r\n   /?          Run Option Selector\r\n");
    exit(0);

  }

  else if (argc > 1) {

    if (strcmp(argv[1], "/NC") == 0 || strcmp(argv[1], "/nc") == 0 || strcmp(argv[1], "/nC") == 0 || strcmp(argv[1], "/Nc") == 0) {

      denychk = '1';

    }

    else if (strcmp(argv[1], "/?") == 0) {

      if (argc > 2) {

        printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
        printf("\r\n   /CL         Load setup in monochrome mode");
        printf("\r\n   /NC         Skip file check");
        printf("\r\n   /NH         Do not hide cursor (DEV only)");
        printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
        printf("\r\n   /NI         Do not load animations");
        printf("\r\n   /??         Show program syntax");
        printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
        printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
        exit(0);

      }

      else {

      currscr = '1';
      WhileLoopRule();

      }


    }

    else if (strcmp(argv[1], "/NH") == 0 || strcmp(argv[1], "/nh") == 0 || strcmp(argv[1], "/nH") == 0 || strcmp(argv[1], "/Nh") == 0 || strcmp(argv[1], "/TI") == 0 || strcmp(argv[1], "/ti") == 0 || strcmp(argv[1], "/Ti") == 0 || strcmp(argv[1], "/tI") == 0) {

      printf("\r\nThis option is available only for the developer.\r\n");
      exit(0);

    }

    else if (strcmp(argv[1], "/NI") == 0 || strcmp(argv[1], "/ni") == 0 || strcmp(argv[1], "/nI") == 0 || strcmp(argv[1], "/Ni") == 0) {

      denyani = '1';

    }

    else if (strcmp(argv[1], "/CL") == 0 || strcmp(argv[1], "/cl") == 0 || strcmp(argv[1], "/cL" ) == 0 || strcmp(argv[1], "/Cl" ) == 0) {

      nocolor = '1';
      ncolopt = '1';

    }

    else if (strcmp(argv[1], "/developer-option-show-inputcursor") == 0) {

      devmode = '1';

    }

    else if (strcmp(argv[1], "/developer-option-enable-fbfmode") == 0) {

      fbfmode = '1';

    }

    else if (strcmp(argv[1], "/developer-option-hidden-loadmenu-true") == 0) {

      if (argc > 2) {

        printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
        printf("\r\n   /CL         Load setup in monochrome mode");
        printf("\r\n   /NC         Skip file check");
        printf("\r\n   /NH         Do not hide cursor (DEV only)");
        printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
        printf("\r\n   /NI         Do not load animations");
        printf("\r\n   /??         Show program syntax");
        printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
        printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
        exit(0);

      }

      else {

      devmenu = '1';
      currscr = '1';
      WhileLoopRule();

      }

    }

    else {

      printf("\r\nInvalid argument. Use /?? for help.\r\n");
      exit(0);

    }

    if (argc > 2 && strcmp(argv[2], "/?") == 0 || strcmp(argv[2], "/??") == 0) {

      printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
      printf("\r\n   /CL         Load setup in monochrome mode");
      printf("\r\n   /NC         Skip file check");
      printf("\r\n   /NH         Do not hide cursor (DEV only)");
      printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
      printf("\r\n   /NI         Do not load animations");
      printf("\r\n   /??         Show program syntax");
      printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
      printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
      exit(0);

    }

    else if (argc > 2) {

      if (strcmp(argv[2], "/NC") == 0 || strcmp(argv[2], "/nc") == 0 || strcmp(argv[2], "/nC") == 0 || strcmp(argv[2], "/Nc") == 0) {

	denychk = '1';

      }

      else if (strcmp(argv[2], "/NH") == 0 || strcmp(argv[2], "/nh") == 0 || strcmp(argv[2], "/nH") == 0 || strcmp(argv[2], "/Nh") == 0 || strcmp(argv[2], "/TI") == 0 || strcmp(argv[2], "/ti") == 0 || strcmp(argv[2], "/Ti") == 0 || strcmp(argv[2], "/tI") == 0) {

	printf("\r\nThis option is available only for the developer.\r\n");
	exit(0);

      }

      else if (strcmp(argv[2], "/NI") == 0 || strcmp(argv[2], "/ni") == 0 || strcmp(argv[2], "/nI") == 0 || strcmp(argv[2], "/Ni") == 0) {

	denyani = '1';

      }

      else if (strcmp(argv[2], "/CL") == 0 || strcmp(argv[2], "/cl") == 0 || strcmp(argv[2], "/cL" ) == 0 || strcmp(argv[2], "/Cl" ) == 0) {

	nocolor = '1';
	ncolopt = '1';

      }

      else if (strcmp(argv[2], "/developer-option-show-inputcursor") == 0) {

	devmode = '1';

      }

      else if (strcmp(argv[2], "/developer-option-enable-fbfmode") == 0) {

	fbfmode = '1';

      }

      else {

	printf("\r\nInvalid arguments. Use /?? for help.\r\n");
	exit(0);

      }

      if (argc > 3 && strcmp(argv[3], "/?") == 0 || strcmp(argv[3], "/??") == 0) {

	printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
	printf("\r\n   /CL         Load setup in monochrome mode");
	printf("\r\n   /NC         Skip file check");
	printf("\r\n   /NH         Do not hide cursor (DEV only)");
	printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
	printf("\r\n   /NI         Do not load animations");
	printf("\r\n   /??         Show Program Syntax");
	printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
	printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
	exit(0);

      }

      else if (argc > 3) {

	if (strcmp(argv[3], "/NC") == 0 || strcmp(argv[3], "/nc") == 0 || strcmp(argv[3], "/nC") == 0 || strcmp(argv[3], "/Nc") == 0) {

	  denychk = '1';

	}

	else if (strcmp(argv[3], "/NH") == 0 || strcmp(argv[3], "/nh") == 0 || strcmp(argv[3], "/nH") == 0 || strcmp(argv[3], "/Nh") == 0 || strcmp(argv[3], "/TI") == 0 || strcmp(argv[3], "/ti") == 0 || strcmp(argv[3], "/Ti") == 0 || strcmp(argv[3], "/tI") == 0) {

	  printf("\r\nThis option is available only for the developer.\r\n");
	  exit(0);

	}

	else if (strcmp(argv[3], "/NI") == 0 || strcmp(argv[3], "/ni") == 0 || strcmp(argv[3], "/nI") == 0 || strcmp(argv[3], "/Ni") == 0) {

	  denyani = '1';

	}

	else if (strcmp(argv[3], "/CL") == 0 || strcmp(argv[3], "/cl") == 0 || strcmp(argv[3], "/cL" ) == 0 || strcmp(argv[3], "/Cl" ) == 0) {

	  nocolor = '1';
	  ncolopt = '1';

	}

	else if (strcmp(argv[3], "/developer-option-show-inputcursor") == 0) {

	  devmode = '1';

	}

	else if (strcmp(argv[3], "/developer-option-enable-fbfmode") == 0) {

	  fbfmode = '1';

	}

	else {

	   printf("\r\nInvalid arguments. Use /?? for help.\r\n");
	   exit(0);

	}

	if (argc > 4 && strcmp(argv[4], "/?") == 0 || strcmp(argv[4], "/??") == 0) {

	  printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
	  printf("\r\n   /CL         Load setup in monochrome mode");
	  printf("\r\n   /NC         Skip file check");
	  printf("\r\n   /NH         Do not hide cursor (DEV only)");
	  printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
	  printf("\r\n   /NI         Do not load animations");
	  printf("\r\n   /??         Show Program Syntax");
	  printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
	  printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
	  exit(0);

	}

	else if (argc > 4) {

	  if (strcmp(argv[4], "/NC") == 0 || strcmp(argv[4], "/nc") == 0 || strcmp(argv[4], "/nC") == 0 || strcmp(argv[4], "/Nc") == 0) {

	    denychk = '1';

	  }

	  else if (strcmp(argv[4], "/NH") == 0 || strcmp(argv[4], "/nh") == 0 || strcmp(argv[4], "/nH") == 0 || strcmp(argv[4], "/Nh") == 0 || strcmp(argv[4], "/TI") == 0 || strcmp(argv[4], "/ti") == 0 || strcmp(argv[4], "/Ti") == 0 || strcmp(argv[4], "/tI") == 0) {

	    printf("\r\nThis option is available only for the developer.\r\n");
	    exit(0);

	  }

	  else if (strcmp(argv[4], "/NI") == 0 || strcmp(argv[4], "/ni") == 0 || strcmp(argv[4], "/nI") == 0 || strcmp(argv[4], "/Ni") == 0) {

	    denyani = '1';

	  }

	  else if (strcmp(argv[4], "/CL") == 0 || strcmp(argv[4], "/cl") == 0 || strcmp(argv[4], "/cL" ) == 0 || strcmp(argv[4], "/Cl" ) == 0) {

	    nocolor = '1';
	    ncolopt = '1';

	  }

	  else if (strcmp(argv[4], "/developer-option-show-inputcursor") == 0) {

	    devmode = '1';

	  }

	  else if (strcmp(argv[4], "/developer-option-enable-fbfmode") == 0) {

	    fbfmode = '1';

	  }

	  else {

	   printf("\r\nInvalid arguments. Use /?? for help.\r\n");
	   exit(0);

	  }

	  if (argc > 5 && strcmp(argv[5], "/?") == 0 || strcmp(argv[5], "/??") == 0) {

	    printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
	    printf("\r\n   /CL         Load setup in monochrome mode");
	    printf("\r\n   /NC         Skip file check");
	    printf("\r\n   /NH         Do not hide cursor (DEV only)");
	    printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
	    printf("\r\n   /NI         Do not load animations");
	    printf("\r\n   /??         Show Program Syntax");
	    printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
	    printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
	    exit(0);

	  }

	  else if (argc > 5) {

	    if (strcmp(argv[5], "/NC") == 0 || strcmp(argv[5], "/nc") == 0 || strcmp(argv[5], "/nC") == 0 || strcmp(argv[5], "/Nc") == 0) {

	      getch();
	      denychk = '1';

	    }

	    else if (strcmp(argv[5], "/NH") == 0 || strcmp(argv[5], "/nh") == 0 || strcmp(argv[5], "/nH") == 0 || strcmp(argv[5], "/Nh") == 0 || strcmp(argv[5], "/TI") == 0 || strcmp(argv[5], "/ti") == 0 || strcmp(argv[5], "/Ti") == 0 || strcmp(argv[5], "/tI") == 0) {

	      printf("\r\nThis option is available only for the developer.\r\n");
	      exit(0);

	    }

	    else if (strcmp(argv[5], "/NI") == 0 || strcmp(argv[5], "/ni") == 0 || strcmp(argv[5], "/nI") == 0 || strcmp(argv[5], "/Ni") == 0) {

	      denyani = '1';

	    }

	    else if (strcmp(argv[5], "/CL") == 0 || strcmp(argv[5], "/cl") == 0 || strcmp(argv[5], "/cL" ) == 0 || strcmp(argv[5], "/Cl" ) == 0) {

	      nocolor = '1';
	      ncolopt = '1';

	    }

	    else if (strcmp(argv[5], "/developer-option-show-inputcursor") == 0) {

	      devmode = '1';

	    }

	    else if (strcmp(argv[5], "/developer-option-enable-fbfmode") == 0) {

	      fbfmode = '1';

	    }

	    else {

	     printf("\r\nInvalid arguments. Use /?? for help.\r\n");
	     exit(0);

	    }

	    if (argc > 6) {

	      if (strcmp(argv[6], "/?") == 0 || strcmp(argv[6], "/??") == 0) {

		printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
		printf("\r\n   /CL         Load setup in monochrome mode");
		printf("\r\n   /NC         Skip file check");
		printf("\r\n   /NH         Do not hide cursor (DEV only)");
		printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
		printf("\r\n   /NI         Do not load animations");
		printf("\r\n   /??         Show Program Syntax");
		printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
		printf("\r\n\nNote: Using /? and /?? with other options will only launch help.\r\n");
		exit(0);

	      }

	      else if (strcmp(argv[6], "/NH") == 0 || strcmp(argv[6], "/nh") == 0 || strcmp(argv[6], "/nH") == 0 || strcmp(argv[6], "/Nh") == 0 || strcmp(argv[6], "/TI") == 0 || strcmp(argv[6], "/ti") == 0 || strcmp(argv[6], "/Ti") == 0 || strcmp(argv[6], "/tI") == 0 || strcmp(argv[7], "/NH") == 0 || strcmp(argv[7], "/nh") == 0 || strcmp(argv[7], "/nH") == 0 || strcmp(argv[7], "/Nh") == 0 || strcmp(argv[7], "/TI") == 0 || strcmp(argv[7], "/ti") == 0 || strcmp(argv[7], "/Ti") == 0 || strcmp(argv[7], "/tI") == 0) {

		printf("\r\nThis option is available only for the developer.\r\n");
		exit(0);

	      }

	      else {

		printf("\r\nInvalid or too many repeating arguments. Use /?? for help.\r\n");
		exit(0);

	      }

	    }

	  }

	}

      }

    }

  }

  WhileLoopRule();
  return 0;

}

void WhileLoopRule() {

  textbackground(BLACK);
  uparrow = 24;
  downarr = 25;
  clrscr();
  while(1) {

    if (currscr == '\0') SetMultiValue();
    if (currscr == '1') ProgramOption();
    if (currscr == '2') UsrOptSelect1();
    if (currscr == '3' && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) UsrOptSelect3();
       if (yesorno == 80) UsrOptSelect2();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == '3' && yesorno == 13) { nocolor = '1'; ncolopt = '1'; SetMultiValue(); }
    if (currscr == '3' && yesorno != (13 || 0 || 0xE0)) UsrOptSelect1();
    if (currscr == '4' && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) UsrOptSelect1();
       if (yesorno == 80) UsrOptSelect3();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == '4' && yesorno == 13) { denychk = '1'; SetMultiValue(); }
    if (currscr == '4' && yesorno != (13 || 0 || 0xE0)) UsrOptSelect2();
    if (currscr == '5' && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) UsrOptSelect2();
       if (yesorno == 80) UsrOptSelect1();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == '5' && yesorno == 13) { denyani = '1'; SetMultiValue(); }
    if (currscr == '5' && yesorno != (13 || 0 || 0xE0)) UsrOptSelect3();
    if (currscr == '6') DevOptSelect1();
    if (currscr == '7' && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) DevOptSelect5();
       if (yesorno == 80) DevOptSelect2();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == '7' && yesorno == 13) { nocolor = '1'; ncolopt = '1'; SetMultiValue(); }
    if (currscr == '7' && yesorno != (13 || 0 || 0xE0)) DevOptSelect1();
    if (currscr == '8' && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) DevOptSelect1();
       if (yesorno == 80) DevOptSelect3();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == '8' && yesorno == 13) { denychk = '1'; SetMultiValue(); }
    if (currscr == '8' && yesorno != (13 || 0 || 0xE0)) DevOptSelect2();
    if (currscr == '9' && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) DevOptSelect2();
       if (yesorno == 80) DevOptSelect4();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == '9' && yesorno == 13) { denyani = '1'; SetMultiValue(); }
    if (currscr == '9' && yesorno != (13 || 0 || 0xE0)) DevOptSelect3();
    if (currscr == 10 && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) DevOptSelect3();
       if (yesorno == 80) DevOptSelect5();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == 10 && yesorno == 13) { fbfmode = '1'; SetMultiValue(); }
    if (currscr == 10 && yesorno != (13 || 0 || 0xE0)) DevOptSelect4();
    if (currscr == 11 && (yesorno == 0 || yesorno == 0xE0)) {

       yesorno = getch();
       if (yesorno == 72) DevOptSelect4();
       if (yesorno == 80) DevOptSelect1();
       if (yesorno == 0x3D) OpenQuickExit();

    }

    if (currscr == 11 && yesorno == 13) { devmode = '1'; SetMultiValue(); }
    if (currscr == 11 && yesorno != (13 || 0 || 0xE0)) DevOptSelect5();
    if (currscr == 12) LoadScrsCheck();
    if (currscr == 13) WelWinNoTimer();
    if (currscr == 14) WelcomeWindow();
    if (currscr == 15) WelcomeWindow();
    if (currscr == 16) WelWinNoTimer();
    if (currscr == 17 && (yesorno == 0 || yesorno == 0xE0)) {

      yesorno = getch();
      if (yesorno == 0x3D) exit(0);

    }

    if (currscr == 17 && yesorno != (13 || 0 || 0xE0)) WelWinNoTimer();

  }

}

void ProgramOption() {

  _setcursortype(_NOCURSOR);
  optboot = '1';
  clrscr();
  gotoxy(1, 1);
  cprintf(".");
  delay(150);
  cprintf(".");
  delay(125);
  cprintf(".");
  delay(100);
  gotoxy(1, 1);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("MultiPatcher V1.0");
  cprintf("\r\n\n");
  cprintf("Please select the option that you want the program to start in:\r\n\n\n");
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  cprintf("    Run without checking for files                    \r\n");
  cprintf("    Run without enabling animations                   \r\n");
  if (devmenu != '1') {

    textcolor(DARKGRAY);
    cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
    cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
    currscr = '2';

  }

  else {

    cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
    cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
    currscr = '6';

  }

  textcolor(LIGHTGRAY);
  cprintf("\n");
  cprintf("Use %c", uparrow);
  cprintf(" and %c", downarr);
  cprintf(" to move the highlight to your choice.\r\n");
  cprintf("Press ENTER to choose.\r\n");
  cprintf("Press F3 to exit.\r\n");

}

void UsrOptSelect1() {

  gotoxy(1, 8);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without enabling animations                   \r\n");
  gotoxy(1, 6);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  gotoxy(1, 7);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without checking for files                    \r\n");
  currscr = '3';
  yesorno = getch();

}

void UsrOptSelect2() {

  gotoxy(1, 6);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  gotoxy(1, 7);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run without checking for files                    \r\n");
  gotoxy(1, 8);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without enabling animations                   \r\n");
  currscr = '4';
  yesorno = getch();

}

void UsrOptSelect3() {

  gotoxy(1, 7);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without checking for files                    \r\n");
  gotoxy(1, 8);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run without enabling animations                   \r\n");
  gotoxy(1, 6);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  currscr = '5';
  yesorno = getch();

}

void DevOptSelect1() {

  gotoxy(1, 10);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
  gotoxy(1, 6);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  gotoxy(1, 7);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without checking for files                    \r\n");
  currscr = '7';
  yesorno = getch();

}

void DevOptSelect2() {

  gotoxy(1, 6);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  gotoxy(1, 7);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run without checking for files                    \r\n");
  gotoxy(1, 8);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without enabling animations                   \r\n");
  currscr = '8';
  yesorno = getch();

}

void DevOptSelect3() {

  gotoxy(1, 7);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without checking for files                    \r\n");
  gotoxy(1, 8);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run without enabling animations                   \r\n");
  gotoxy(1, 9);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
  currscr = '9';
  yesorno = getch();

}

void DevOptSelect4() {

  gotoxy(1, 8);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run without enabling animations                   \r\n");
  gotoxy(1, 9);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
  gotoxy(1, 10);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
  currscr = 10;
  yesorno = getch();

}

void DevOptSelect5() {

  gotoxy(1, 9);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
  gotoxy(1, 10);
  textbackground(LIGHTGRAY);
  textcolor(BLACK);
  cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
  gotoxy(1, 6);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  currscr = 11;
  yesorno = getch();

}

void OpenQuickExit() {

  _setcursortype(_NORMALCURSOR);
  clrscr();
  printf("\n");
  exit(0);

}

void SetMultiValue() {

  currscr = 12;
  _setcursortype(_NORMALCURSOR);
  if (fbfmode == '1') getch();
  colsbar = '1';
  if (fbfmode == '1') getch();
  if (devmode != '1') {

    _setcursortype(_NOCURSOR);

  }

  if (denychk == '1') {

    textcolor(BLACK);
    if (fbfmode == '1') getch();
    textbackground(LIGHTGRAY);
    if (fbfmode == '1') getch();
    clrscr();
    if (fbfmode == '1') getch();
    gotoxy(1, 1);
    if (fbfmode == '1') getch();
    textbackground(BLACK);
    if (fbfmode == '1') getch();
    textcolor(LIGHTGRAY);
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    cprintf("                                                                                ");
    if (fbfmode == '1') getch();
    if (denyani == '1') currscr = 13;
    else currscr = 14;

  }

}

void LoadScrsCheck() {

  currscr = 15;
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  textbackground(BLACK);
  if (fbfmode == '1') getch();
  clrscr();
  if (fbfmode == '1') getch();
  gotoxy (1, 1);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  if (optboot == '1') delay(10);
  else delay(150);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  if (optboot == '1') delay(10);
  else delay(125);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  if (optboot == '1') delay(10);
  else delay(100);
  if (fbfmode == '1') getch();
  clrscr();
  if (fbfmode == '1') getch();
  gotoxy (1, 1);
  if (fbfmode == '1') getch();
  cprintf("Loading MultiPatcher");
  if (fbfmode == '1') getch();
  gotoxy (1, 3);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(50);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(50);
  if (fbfmode == '1') getch();
  if (chdir(".\\utilfs") != 0) {

    cprintf("\r\nMultiPatcher could not start because one or more required files were missing.");
    if (fbfmode == '1') getch();
    cprintf("\r\nMake sure you have the necessary files and permissions.\r\n\n");
    if (fbfmode == '1') getch();
    _setcursortype(_NORMALCURSOR);
    if (fbfmode == '1') getch();
    exit(0);

  }

  chdir("..");
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(50);
  if (fbfmode == '1') getch();
  filechk = fopen(".\\utilfs\\NTDRV.UTL", "r");
  if (fbfmode == '1') getch();
  if (filechk == NULL) {

    cprintf("\r\nMultiPatcher could not start because the following file was not found:");
    if (fbfmode == '1') getch();
    cprintf("\r\n<utilities>\\NTDRV.UTL");
    if (fbfmode == '1') getch();
    cprintf("\r\nMake sure you have the necessary files and permissions.\r\n\n");
    if (fbfmode == '1') getch();
    fclose(filechk);
    if (fbfmode == '1') getch();
    _setcursortype(_NORMALCURSOR);
    if (fbfmode == '1') getch();
    exit(0);

  }

  fclose(filechk);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(50);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(50);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(50);
  if (fbfmode == '1') getch();
  textcolor(BLACK);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  clrscr();
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  textbackground(BLACK);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("Loading MultiPatcher                                                            ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("......                                                                          ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  if (denyani == '1') currscr = 16;
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("Loading MultiPatcher                                                            ");
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  cprintf(".......                                                                         ");
  if (fbfmode == '1') getch();
  gotoxy(1, 4);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();

}

void WelcomeWindow() {

  currscr = 17;
  if (devmode != '1') {

    _setcursortype(_NOCURSOR);

  }

  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  textbackground(BLACK);
  if (fbfmode == '1') getch();
  textbackground(BLACK);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("Loading MultiPatcher                                                            ");
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".......                                                                         ");

  }

  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("Loading MultiPatcher                                                            ");
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  gotoxy(1, 5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  gotoxy(1, 6);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  gotoxy(1, 7);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  gotoxy(1, 8);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  gotoxy(1, 9);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("........                                                                        ");

  }

  gotoxy(1, 10);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 11);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 12);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 13);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 14);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 15);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 16);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 17);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 18);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf(".........                                                                       ");

  }

  gotoxy(1, 19);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("..........                                                                      ");

  }

  gotoxy(1, 20);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("..........                                                                      ");

  }

  gotoxy(1, 21);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("..........                                                                      ");

  }

  gotoxy(1, 22);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("..........                                                                      ");

  }

  gotoxy(1, 23);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (denychk == '1') {

    cprintf("                                                                                ");

  }

  else {

    cprintf("..........                                                                      ");

  }

  gotoxy(1, 24);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 5);
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   Welcome to Setup.                                                            ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("อออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 6);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออออออ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 7);
  if (fbfmode == '1') getch();
  cprintf("    The Setup program for the MultiPatcher version 1.0 patches some files       ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 8);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("    to successfully boot one OS alongside another with ease.                    ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 9);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 10);
  if (fbfmode == '1') getch();
  if (nocolor == '1') textcolor(LIGHTGRAY);
  else textcolor(CYAN);
  cprintf("    Info: Existing versions of certain Windows files will be backed up with     ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 11);

  if (nocolor == '1') {

    textcolor(LIGHTGRAY);

  }

  else {

    textcolor(CYAN);

  }

  cprintf("    the extension .BAK. If a file with the .BAK extension exist,                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 12);

  if (nocolor == '1') {

    textcolor(LIGHTGRAY);

  }

  else {

    textcolor(CYAN);

  }

  cprintf("    the file with the .BAK extension will be deleted.                           ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 13);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 14);

  if (nocolor == '1') {

    textcolor(DARKGRAY);

  }

  else {

    textcolor(RED);

  }

  cprintf("    Notice: Make sure that you are running this program without modifications.  ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 15);

  if (nocolor == '1') {

    textcolor(DARKGRAY);

  }

  else {

    textcolor(RED);

  }

  cprintf("            I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 16);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 17);

  if (nocolor == '1') {

    textcolor(LIGHTGRAY);

  }

  else {

    textcolor(GREEN);

  }

  cprintf("    It is advised to make a backup of your files and installation.              ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 18);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 19);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 20);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 21);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 22);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("    When you are ready to continue, press ENTER.                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ออออออออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 23);
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออออออออออออ");
  if (fbfmode == '1') getch();
  gotoxy(1, 24);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf(" ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("   ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("    ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("     ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("      ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("       ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("        ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("         ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("          ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("           ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("            ");
  if (fbfmode == '1') getch();
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("             ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("              ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("               ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                 ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                  ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                   ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                    ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  textcolor(BLACK);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 25);
  if (fbfmode == '1') getch();
  cprintf("  ENTER=Continue  F3=Quit");
  if (fbfmode == '1') getch();
  if (ncolopt != '1') {

    if (nocolor == '1') {

      cprintf("  F5=Add color   ");
      textbackground(BLACK);

    }

    else {

      cprintf("  F5=Remove Color");
      textbackground(BLUE);

    }

  }

  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  yesorno = getch();

}

void WelWinNoTimer() {

  currscr = 17;
  textcolor(BLACK);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 25);
  if (fbfmode == '1') getch();
  cprintf("  ENTER=Continue  F3=Quit");
  if (fbfmode == '1') getch();
  if (ncolopt != '1') {

    if (nocolor == '1') {

      if (fbfmode == '1') getch();
      cprintf("  F5=Add color   ");
      if (fbfmode == '1') getch();
      textbackground(BLACK);

    }

    else {

      if (fbfmode == '1') getch();
      cprintf("  F5=Remove Color");
      if (fbfmode == '1') getch();
      textbackground(BLUE);

    }

  }

  else if (ncolopt == '1') textbackground(BLACK);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  cprintf("อออออออออออออออออออออออออ                                                       ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   Welcome to Setup.                                                            ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("    The Setup program for the MultiPatcher version 1.0 patches some files       ");
  if (fbfmode == '1') getch();
  cprintf("    to successfully boot one OS alongside another with ease.                    ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textcolor(LIGHTGRAY);

  }

  else {

    textcolor(CYAN);

  }

  cprintf("    Info: Existing versions of certain Windows files will be backed up with     ");
  if (fbfmode == '1') getch();
  cprintf("    the extension .BAK. If a file with the .BAK extension exist,                ");
  if (fbfmode == '1') getch();
  cprintf("    the file with the .BAK extension will be deleted.                           ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textcolor(DARKGRAY);

  }

  else {

    textcolor(RED);

  }

  cprintf("    Notice: Make sure that you are running this program without modifications.  ");
  if (fbfmode == '1') getch();
  cprintf("            I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textcolor(LIGHTGRAY);

  }

  else {

    textcolor(GREEN);

  }

  cprintf("    It is advised to make a backup of your files and installation.              ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("    When you are ready to continue, press ENTER.                                ");
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  yesorno = getch();

}
