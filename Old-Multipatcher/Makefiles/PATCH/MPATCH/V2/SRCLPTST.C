#include <stdio.h> // Include Standard Input and Output Header Library
#include <conio.h> // Include Control Input and Output Header Library
#include <dirent.h> // Include Directory Entry Header Library
#include <ctype.h> // Include Character Type Header Library
#include <stdlib.h> // Include Standard Header Library
#include <string.h> // Include String Header Library
#include <dos.h> // Include DOS Header Library

/*

  DEVELOPER'S CODE
 ==================

 Health notice: Holding the F5 button for long can cause problems for some people!

 Help
 ----

 // = A comment or a disabled command.
 Groups begin with a void statement.
 Use the group's name to go to that group.
 This code is (probably) C.
 int main is where the code begins executing.
 To end this program, use return 0.
 Print statements: printf = Output text, cprintf = Colored Output Text
 Each command has to end with a semi-colon ';' to tell the compiler that that's the end.
 Most commands need () at the end of the COMMAND, even if there is nothing to write.
 Textbackgrounds can't output the color Dark gray, so brown is used instead for places where dark gray is intended.

 Note:Alt-keys that I can't input into the compiler are stored inside a variable.

 Available Colors
 ----------------

 BLACK
 BLUE
 GREEN
 CYAN
 RED
 MAGENTA
 BROWN
 LIGHTGRAY
 DARKGRAY
 LIGHTBLUE
 LIGHTGREEN
 LIGHTCYAN
 LIGHTRED
 LIGHTMAGENTA
 YELLOW
 WHITE

 Alternate Key Codes (used in this program)
 ------------------------------------------

 4   = diamond symbol (not used)
 24  = up arrow key
 25  = down arrow key
 30  =  (replaced)
 31  =  (replaced)
 176 = °
 177 = ±
 178 = ²
 182 = ¶
 186 = º
 187 = »
 188 = ¼
 196 = Ä
 199 = Ç
 200 = È
 201 = É
 205 = Í
 219 = Û (not used)
 249 = ù
 250 = ú

 Utility File Names
 ------------------

 NTDRV.UTL = Windows NT 4.0 ATAPI.SYS replacement


*/

/* Void group */
// void CheckUserOpt2(); // Declare function for later use
void SetMultiValue(); // Declare function for later use
void LoadScrsCheck(); // Declare function for later use
void WelcomeWindow(); // Declare function for later use
void WelWinNoTimer(); // Declare function for later use
void QuitAnimation(); // Declare function for later use
void UserQuitCheck(); // Declare function for later use
void MultiInstalls(); // Declare function for later use
void GetWindowsDir(); // Declare function for later use
void GlobalNScreen(); // Declare function for later use
void EnterLoopKey1(); // Declare function for later use
void EnterLoopKey2(); // Declare function for later use
void EnterLoopKey3(); // Declare function for later use
void EnterLoopKey4(); // Declare function for later use
void EnterLoopKey5(); // Declare function for later use
void MultiInsGrp01(); // Declare function for later use
void MultiInsGrp02(); // Declare function for later use
void MultiInsGrp03(); // Declare function for later use
void MultiInsGrp04(); // Declare function for later use
void MultiInsGrp05(); // Declare function for later use
void MultiInsGrp06(); // Declare function for later use
void MultiInsGrp07(); // Declare function for later use
void MultiInsGrp08(); // Declare function for later use
void Transitions01(); // Declare function for later use
void Transitions02(); // Declare function for later use
/* Char group */
// Old - char yn13; // Declare variable for later use
// char udirchk; // Declare variable for later use
// char filechk; // Declare variable for later use
// char diamond; // Declare variable for later use
char currscr; // Declare variable for later use
char optboot; // Declare variable for later use
char devmenu; // Declare variable for later use
char menuval; // Declare variable for later use
char denychk; // Declare variable for later use
char fbfmode; // Declare variable for later use
char devmode; // Declare variable for later use
char denyani; // Declare variable for later use
char nocolor; // Declare variable for later use
char ncolopt; // Declare variable for later use
char nextscr; // Declare variable for later use
char uparrow; // Declare variable for later use
char downarr; // Declare variable for later use
char numsvar; // Declare variable for later use
char colsbar; // Declare variable for later use
char loopval; // Declare variable for later use
/* Others */
FILE *filechk; // Declare file pointer
/* Integers and main */
int yn13; // Declare integer for later use
int main(int argc, char* argv[]) { // Program starts here

  if (argc > 1 && strcmp(argv[1], "/??") == 0) { // Check if the user typed any parameter when starting the program

    printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
    printf("\r\n   /CL         Load setup in monochrome mode");
    printf("\r\n   /NC         Skip file check");
    printf("\r\n   /NH         Do not hide cursor (DEV only)"); // Use developer-option-show-inputcursor
    printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)"); // Use developer-option-enable-fbfmode
    printf("\r\n   /NI         Do not load animations");
    printf("\r\n   /??         Show program syntax");
    printf("\r\n   /?          Run Option Selector\r\n"); // Use developer-option-hidden-loadmenu-true to enable access to developer options in Menu
    exit(0);

  }

  else if (argc > 1) {

    if (strcmp(argv[1], "/NC") == 0 || strcmp(argv[1], "/nc") == 0 || strcmp(argv[1], "/nC") == 0 || strcmp(argv[1], "/Nc") == 0) {

      denychk = '1';
//      CheckUserOpt2();

    }

//    else if (argc > 1 && strcmp(argv[1], "/nc") == 0) {

//      denychk = '1';
//      SetMultiValue();

//    }

//    else if (argc > 1 && strcmp(argv[1], "/Nc") == 0) {

//      denychk = '1';
//      SetMultiValue();

//    }

//    else if (argc > 1 && strcmp(argv[1], "/nC") == 0) {

//      denychk = '1';
//      SetMultiValue();

//    }

    else if (strcmp(argv[1], "/?") == 0) {

      menuval = '1';
      currscr = '1';
     // WhileLoopRule();

    }

    else if (strcmp(argv[1], "/NH") == 0 || strcmp(argv[1], "/nh") == 0 || strcmp(argv[1], "/nH") == 0 || strcmp(argv[1], "/Nh") == 0 || strcmp(argv[1], "/TI") == 0 || strcmp(argv[1], "/ti") == 0 || strcmp(argv[1], "/Ti") == 0 || strcmp(argv[1], "/tI") == 0) {

      printf("\r\nThis option is available only for the developer.\r\n");
      exit(0);

    }

//    else if (argc > 1 && ) {

//      printf("\r\nThis option is only available for the developer only.\r\n");
//      exit(0);


//    }

    else if (strcmp(argv[1], "/NI") == 0 || strcmp(argv[1], "/ni") == 0 || strcmp(argv[1], "/nI") == 0 || strcmp(argv[1], "/Ni") == 0) {

      denyani = '1';
//      CheckUserOpt2();

    }

//    else if (argc > 1 &&  ) == 0) {

//      denyani = '1';
//      SetMultiValue();

//    }


    else if (strcmp(argv[1], "/CL") == 0 || strcmp(argv[1], "/cl") == 0 || strcmp(argv[1], "/cL" ) == 0 || strcmp(argv[1], "/Cl" ) == 0) {

      nocolor = '1';
      ncolopt = '1';
//      CheckUserOpt2();

    }

//    else if (argc > 1 &&  {

//      ncolopt = '1';
//      nocolor = '1';
//      SetMultiValue();

//    }

    else if (strcmp(argv[1], "/developer-option-show-inputcursor") == 0) {

      devmode = '1';
//      CheckUserOpt2();

    }

    else if (strcmp(argv[1], "/developer-option-enable-fbfmode") == 0) {

      fbfmode = '1';

    }

    else if (strcmp(argv[1], "/developer-option-hidden-loadmenu-true") == 0) {

      devmenu = '1';
      menuval = '1';
      currscr = '1';
      // WhileLoopRule();

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

  currscr = '1';
  textbackground(BLACK);
  clrscr();
  while(1) {

//    if (currscr == '\0') SetMultiValue();
    yn13 = tolower(yn13);
    if (currscr == '1') { // ProgramOption();

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

      uparrow = 24; // For compatibility
      downarr = 25;
      textcolor(LIGHTGRAY);
      cprintf("\n");
      cprintf("Use %c", uparrow);
      cprintf(" and %c", downarr);
      cprintf(" to move the highlight to your choice.\r\n");
      cprintf("Press ENTER to choose.\r\n");
      cprintf("Press F3 to exit.\r\n");

    }

    if (currscr == '2') {

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
      menuval = '1';
      currscr = '3';
      yn13 = getch();

    }

    if (currscr == '3' && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) {

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
        menuval = '3';
        currscr = '5';
        yn13 = getch();

      }

      if (yn13 == 80) {

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
        menuval = '2';
        currscr = '4';
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        exit(0);

      }

    }

//    if (currscr == '3' && yn13 == 13) { nocolor = '1'; ncolopt = '1'; SetMultiValue(); }
    if (currscr == '4' && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) {

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
        menuval = '1';
        currscr = '3';
        yn13 = getch();

      }

      if (yn13 == 80) {

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
        menuval = '3';
        currscr = '5';
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        return 0;

      }

    }

//    if (currscr == '4' && yn13 == 13) { denychk = '1'; SetMultiValue(); }
    if (currscr == '5' && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) {

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
        menuval = '2';
        currscr = '4';
        yn13 = getch();

      }

      if (yn13 == 80) {

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
        menuval = '1';
        currscr = '3';
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

       _setcursortype(_NORMALCURSOR);
       clrscr();
       printf("\n");
       return 0;

      }

    }

//    if (currscr == '5' && yn13 == 13) { denyani = '1'; SetMultiValue(); }
    if (currscr == '6') { // DevOptSelect1();

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
        menuval = '1';
        currscr = '7';
        yn13 = getch();

    }

    if (currscr == '7' && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) { // DevOptSelect5();

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
        menuval = '5';
        currscr = 11;
        yn13 = getch();

      }

      if (yn13 == 80) { // DevOptSelect2();

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
        menuval = '2';
        currscr = '8';
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        return 0;

      }

    }

//    if (currscr == '7' && yn13 == 13) { nocolor = '1'; ncolopt = '1'; SetMultiValue(); }
    if (currscr == '8' && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) { // DevOptSelect1();

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
        menuval = '1';
        currscr = '7';
        yn13 = getch();

      }

      if (yn13 == 80) { // DevOptSelect3();

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
        menuval = '3';
        currscr = '9';
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        return 0;

      }

    }

//    if (currscr == '8' && yn13 == 13) { denychk = '1'; SetMultiValue(); }
    if (currscr == '9' && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) { // DevOptSelect2();

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
        menuval = '2';
        currscr = '8';
        yn13 = getch();

      }

      if (yn13 == 80) { // DevOptSelect4();

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
        menuval = '4';
        currscr = 10;
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        return 0;

      }

    }

//    if (currscr == '9' && yn13 == 13) { denyani = '1'; SetMultiValue(); }
    if (currscr == 10 && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) { // DevOptSelect3();

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
        menuval = '3';
        currscr = '9';
        yn13 = getch();

      }

      if (yn13 == 80) { // DevOptSelect5();

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
        menuval = '5';
        currscr = 11;
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        return 0;

      }

    }

//    if (currscr == 10 && yn13 == 13) { fbfmode = '1'; SetMultiValue(); }
    if (currscr == 11 && (yn13 == 0 || yn13 == 0xE0)) {

      yn13 = getch();
      if (yn13 == 72) { // DevOptSelect4();

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
        menuval = '4';
        currscr = 10;
        yn13 = getch();

      }

      if (yn13 == 80) { // DevOptSelect1();

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
        menuval = '1';
        currscr = '7';
        yn13 = getch();

      }

      if (yn13 == 0x3D) {

        _setcursortype(_NORMALCURSOR);
        clrscr();
        printf("\n");
        return 0;

      }

    }

//    if (currscr == 11 && yn13 == 13) { devmode = '1'; SetMultiValue(); }

  }



}

//  WhileLoopRule(); // Skip to the first portion of the Setup
//  return 0; // Return value 0 (success) to the system
/*

void EnterLoopKey1() {

  yn13 = getch();
  if (yn13 == 13) {

    if (menuval == '1') {

      nocolor = '1';
      ncolopt = '1';
      SetMultiValue();

    }

    else if (menuval == '2') {

      denychk = '1';
      SetMultiValue();

    }

    else if (menuval == '3') {

      denyani = '1';
      SetMultiValue();

    }

    else if (menuval == '4') {

      fbfmode = '1';
      SetMultiValue();

    }

    else if (menuval == '5') {

      devmode = '1';
      SetMultiValue();

    }

    else EnterLoopKey1();

  }

  else if (yn13 == 0 || yn13 == 0xE0) {

    yn13 = getch();
    if (yn13 == 72 && devmenu != '1') {

      if (menuval == '1') UsrOptSelect3();
      else if (menuval == '2') UsrOptSelect1();
      else if (menuval == '3') UsrOptSelect2();
      else EnterLoopKey1();

    }

    else if (yn13 == 80 && devmenu != '1') {

      if (menuval == '1') UsrOptSelect2();
      else if (menuval == '2') UsrOptSelect3();
      else if (menuval == '3') UsrOptSelect1();
      else EnterLoopKey1();

    }

    else if (yn13 == 72 && devmenu == '1') {

      if (menuval == '1') DevOptSelect5();
      else if (menuval == '2') DevOptSelect1();
      else if (menuval == '3') DevOptSelect2();
      else if (menuval == '4') DevOptSelect3();
      else if (menuval == '5') DevOptSelect4();
      else EnterLoopKey1();

    }

    else if (yn13 == 80 && devmenu == '1') {

      if (menuval == '1') DevOptSelect2();
      else if (menuval == '2') DevOptSelect3();
      else if (menuval == '3') DevOptSelect4();
      else if (menuval == '4') DevOptSelect5();
      else if (menuval == '5') DevOptSelect1();
      else EnterLoopKey1();

    }

    else if (yn13 == 0x3D) {

      _setcursortype(_NORMALCURSOR);
      clrscr();
      printf("\n");
      exit(0);

    }

    else EnterLoopKey1();

  }

  else EnterLoopKey1();

}

*/

void SetMultiValue() {

  _setcursortype(_NORMALCURSOR);
  if (fbfmode == '1') getch();
  colsbar = '1';
//  diamond = 4;
  if (fbfmode == '1') getch();
  uparrow = 24;
  if (fbfmode == '1') getch();
  downarr = 25;
  if (fbfmode == '1') getch();
  if (devmode != '1') {

    _setcursortype(_NOCURSOR); //  Hide cursor
//    LoadScrsCheck();

  }

//  else {

//  udirchk = '.\util'
//  LoadScrsCheck();

//  }

  if (denychk == '1') {

    if (denyani == '1') {

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
      WelWinNoTimer();

    }

    else {

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
      WelcomeWindow();

    }

  }

  else LoadScrsCheck();

}

void LoadScrsCheck() {

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
//  gotoxy(1, 25);
//  cprintf("                         ");
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
  if (denyani == '1') WelWinNoTimer();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("Loading MultiPatcher                                                            ");
  if (fbfmode == '1') getch();
//  delay(15);
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  cprintf(".......                                                                         ");
//  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 4);
//  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                                                     ");
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
  WelcomeWindow();

}

void WelcomeWindow() { // Opening of a function

  if (devmode != '1') { //For compatibility reasons

    _setcursortype(_NOCURSOR); //  Hide cursor

  }

  textcolor(LIGHTGRAY); // Change Text Color
  if (fbfmode == '1') getch();
  textbackground(BLACK); // Change Background Color
//  if (fbfmode == '1') getch();
//  clrscr(); // Clear Screen
  if (fbfmode == '1') getch();
//  gotoxy(1, 25)x; //  Locate a part of the screen
//  cprintf("  ENTER=Continue  F3=Quit"); // Print text function + Color options - Needs to be put before main text outputs for control bar at the bottom
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
//  gotoxy(1, 1);
//  cprintf("Loading MultiPatcher                                                            ");
//  cprintf(" MultiPatcher by LoopKey                                                        ");
//  cprintf("......                                                                          ");
//  cprintf("                                                                                ");
//  delay(5);
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
//  delay(2);
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
//  delay(2);
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
//  gotoxy(1, 3);
//  cprintf("............................                                                    ");
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
  cprintf("Í");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 5);
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   Welcome to Setup.                                                            ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
//  textcolor(LIGHTBLUE);
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 6);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(LIGHTGREEN);
  cprintf("ÍÍÍÍÍÍÍÍ");
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
//  textcolor(LIGHTCYAN);
  cprintf("ÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(LIGHTRED);
  cprintf("ÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 9);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(LIGHTMAGENTA);
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(YELLOW);
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(WHITE);
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(DARKGRAY);
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 13);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(GREEN);
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(CYAN);
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(RED);
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 16);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(MAGENTA);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
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
//  textcolor(BROWN);
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 18);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(BLACK);
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 19);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(DARKGRAY);
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 20);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
//  textcolor(LIGHTGRAY);
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 21);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
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
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
  if (fbfmode == '1') getch();
  gotoxy(1, 23);
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  delay(15);
  if (fbfmode == '1') getch();
  gotoxy(1, 3);
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
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
  gotoxy(1, 25); //  Locate a part of the screen
  if (fbfmode == '1') getch();
  cprintf("  ENTER=Continue  F3=Quit"); // Print text function + Color options - Needs to be put before main text outputs for control bar at the bottom
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
  numsvar = '1';
  if (fbfmode == '1') getch();
  EnterLoopKey2();

} // Ending of a function

/*

  Old group and statements

void EnterLoopKey2() {

  yn13 = '\0';
  yn13 = getch(); // Save the key pressed by the user in a variable
  yn13 = tolower(yn13); //Convert the letter to lower case
  if (yn13 == 13) { // Run statements if a given condition is true or false

    MultiInstalls();

  }

  else if (yn13 == 'q') {

    numsvar = '1';
    UserQuitCheck();

  }

  else {

    EnterLoopKey2();

  }

}

*/

void EnterLoopKey2() {

  yn13 = getch();
  if (yn13 == 0x3F) {
    if (ncolopt != '1') {

      if (nocolor == '1') {

	nocolor = '\0';
	WelWinNoTimer();

      }

      else if (nocolor == '\0') {

	nocolor = '1';
	WelWinNoTimer();

      }

      else EnterLoopKey2();

    }

    else EnterLoopKey2();

  }

  else if (yn13 == 0x3D) {

    if (denyani == '1') UserQuitCheck();
    else QuitAnimation();

  }

  else if (yn13 == 13) {

    nextscr = '1';
    GlobalNScreen();

  }

  else EnterLoopKey2();

}

void QuitAnimation() {

  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(RED);

  }

  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy (1, 25);
  if (fbfmode == '1') getch();
  cprintf("                                                                               ");
  if (fbfmode == '1') getch();
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
  UserQuitCheck();

}

void UserQuitCheck() {

  if (numsvar == '1') {

    textbackground(BLACK);
    textcolor(DARKGRAY);
    gotoxy (66, 10);
    if (fbfmode == '1') getch();
    cprintf("ed");
    if (fbfmode == '1') getch();
    gotoxy (66, 14);
    if (fbfmode == '1') getch();
    cprintf("od");
    if (fbfmode == '1') getch();
    gotoxy (15, 17);
    if (fbfmode == '1') getch();
    cprintf("sed to make a backup of your files and installation.");
    // EnterLoopKey3();

  }

  else if (numsvar == '2') {

    gotoxy (66, 13);
    if (colsbar == '7') {

      if (nocolor == '1') {

	textcolor(DARKGRAY);
	textbackground(BLACK);

      }

      else {

	textcolor(BLACK);
	textbackground(BROWN);

      }

      if (fbfmode == '1') getch();
      cprintf("om");
      // EnterLoopKey3();

    }

    else {

      textcolor(DARKGRAY);
      textbackground(BLACK);
      if (fbfmode == '1') getch();
      cprintf("om");
      // EnterLoopKey3();

    }

  }
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(RED);

  }

  textbackground(LIGHTGRAY);
  gotoxy (14, 11);
  cprintf("                         É»                         ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                         È¼                         ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                        ÉÍÍ»                        ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                        ÈÍÍ¼                        ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                       ÉÍÍÍÍ»                       ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                       ÈÍÍÍÍ¼                       ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                      ÉÍÍÍÍÍÍ»                      ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                      ÈÍÍÍÍÍÍ¼                      ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                     ÉÍÍÍÍÍÍÍÍ»                     ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                     ÈÍÍÍÍÍÍÍÍ¼                     ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                    ÉÍÍÍÍÍÍÍÍÍÍ»                    ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                    ÈÍÍÍÍÍÍÍÍÍÍ¼                    ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                   ÉÍÍÍÍÍÍÍÍÍÍÍÍ»                   ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                   ÈÍÍÍÍÍÍÍÍÍÍÍÍ¼                   ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                  ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»                  ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                  ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼                  ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                 ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»                 ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                 ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼                 ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("                ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»                ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("                ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼                ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("               ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»               ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("               ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼               ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("              ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»              ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("              ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼              ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("             ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»             ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("             ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼             ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("            ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»            ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("            ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼            ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("           ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»           ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("           ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼           ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("          ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»          ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("          ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼          ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»         ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼         ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("        ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»        ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("        ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼        ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("       ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»       ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("       ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼       ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("      ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»      ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("      ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼      ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("     ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»     ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("     ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼     ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("    ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»    ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("    ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼    ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("   ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»   ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("   ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼   ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("  ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»  ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("  ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼  ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf(" ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ» ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf(" ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼ ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(15);
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(50);
  if (fbfmode == '1') getch();
  gotoxy (14, 10);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶");
  gotoxy (14, 13);
  if (fbfmode == '1') getch();
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(50);
  if (fbfmode == '1') getch();
  gotoxy (14, 9);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  gotoxy (14, 10);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 13);
  if (fbfmode == '1') getch();
  cprintf("ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶");
  gotoxy (14, 14);
  if (fbfmode == '1') getch();
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(50);
  if (fbfmode == '1') getch();
  gotoxy (14, 8);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  gotoxy (14, 9);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 10);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 13);
  if (fbfmode == '1') getch();
  cprintf("ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶");
  if (fbfmode == '1') getch();
  gotoxy (14, 14);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 15);
  if (fbfmode == '1') getch();
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(50);
  if (fbfmode == '1') getch();
  gotoxy (14, 7);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  gotoxy (14, 8);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 9);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 10);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 13);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 14);
  if (fbfmode == '1') getch();
  cprintf("ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶");
  if (fbfmode == '1') getch();
  gotoxy (14, 15);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 16);
  if (fbfmode == '1') getch();
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(50);
  if (fbfmode == '1') getch();
  gotoxy (17, 8);
  if (fbfmode == '1') getch();
  cprintf("M");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("l");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("P");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("a");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("c");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("h");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("r");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("c");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("m");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("l");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("l");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("y");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("y");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("r");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  if (fbfmode == '1') getch();
  gotoxy (17, 9);
  if (fbfmode == '1') getch();
  cprintf("c");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("m");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("r");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(".");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("I");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("f");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("y");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("q");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("S");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("w");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(",");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("y");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("w");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("l");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("l");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("d");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  if (fbfmode == '1') getch();
  gotoxy (17, 10);
  if (fbfmode == '1') getch();
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("r");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("S");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("a");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("g");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("a");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("a");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("c");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("h");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("W");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("d");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("w");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("f");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("l");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(".");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  if (fbfmode == '1') getch();
  gotoxy (20, 12);
  if (fbfmode == '1') getch();
  cprintf("ù");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("T");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("c");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("S");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(",");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("r");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("E");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("N");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("T");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("E");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("R");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(".");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  if (fbfmode == '1') getch();
  gotoxy (20, 13);
  if (fbfmode == '1') getch();
  cprintf("ù");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("T");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("q");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("S");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(",");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("p");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("r");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("s");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("F");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("3");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(".");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  if (fbfmode == '1') getch();
  gotoxy (17, 15);
  if (fbfmode == '1') getch();
  cprintf("F");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("3");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("=");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("Q");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf(" ");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("E");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("N");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("T");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("E");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("R");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("=");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("C");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("o");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("t");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("i");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("n");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("u");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  cprintf("e");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(5);
  EnterLoopKey3();

/*
  if (denyani != '1') delay(75);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(50);
  gotoxy (14, 8);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(40);
  gotoxy (14, 9);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(35);
  gotoxy (14, 10);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(30);
  gotoxy (14, 11);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(25);
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  gotoxy (14, 13);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 14);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  cprintf("ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶");
  if (fbfmode == '1') getch();
  gotoxy (14, 15);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  gotoxy (14, 16);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  gotoxy(14, 7);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(75);
  cprintf("ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(75);
  gotoxy (14, 8);
  if (fbfmode == '1') getch();
  cprintf("º  MultiPatcher is not completely set up on your   º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(75);
  gotoxy (14, 9);
  if (fbfmode == '1') getch();
  cprintf("º  computer. If you quit Setup now, you will need  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(40);
  gotoxy (14, 10);
  if (fbfmode == '1') getch();
  cprintf("º  to run Setup again to patch Windows files.      º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(35);
  gotoxy (14, 11);
  if (fbfmode == '1') getch();
  cprintf("º                                                  º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(30);
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("º     ùTo continue Setup, press ENTER.             º");
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(25);
  gotoxy (14, 13);
  if (fbfmode == '1') getch();
  cprintf("º     ùTo quit Setup, press F3.                    º");
  if (fbfmode == '1') getch();
  gotoxy (14, 14);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  cprintf("ÇÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¶");
  if (fbfmode == '1') getch();
  gotoxy (14, 15);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  cprintf("º  F3=Quit  ENTER=Continue                         º");
  if (fbfmode == '1') getch();
  gotoxy (14, 16);
  if (fbfmode == '1') getch();
  if (denyani != '1') delay(20);
  cprintf("ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
  if (fbfmode == '1') getch();
  gotoxy (1, 25);
  if (fbfmode == '1') getch();
  cprintf("                                                                               ");
  if (fbfmode == '1') getch();
  textbackground(BLACK);
  if (fbfmode == '1') getch();
  gotoxy (15, 17);
  if (fbfmode == '1') getch();
  cprintf("                                                     ");
  if (fbfmode == '1') getch();
  gotoxy (66, 8);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 9);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 10);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 11);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 12);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 13);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 14);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 15);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  gotoxy (66, 16);
  if (fbfmode == '1') getch();
  cprintf("  ");
  if (fbfmode == '1') getch();
  textcolor(DARKGRAY);
  if (fbfmode == '1') getch();
  if (numsvar == '1') {

    gotoxy (66, 10);
    if (fbfmode == '1') getch();
    cprintf("ed");
    if (fbfmode == '1') getch();
    gotoxy (66, 14);
    if (fbfmode == '1') getch();
    cprintf("od");
    if (fbfmode == '1') getch();
    gotoxy (15, 17);
    if (fbfmode == '1') getch();
    cprintf("sed to make a backup of your files and installation.");
    EnterLoopKey3();

  }

  else if (numsvar == '2') {

    gotoxy (66, 13);
    if (colsbar == '7') {

      if (nocolor == '1') {

	textcolor(DARKGRAY);
	textbackground(BLACK);

      }

      else {

	textcolor(BLACK);
	textbackground(BROWN);

      }

      if (fbfmode == '1') getch();
      cprintf("om");
      EnterLoopKey3();

    }

    else {

      textcolor(DARKGRAY);
      textbackground(BLACK);
      if (fbfmode == '1') getch();
      cprintf("om");
      EnterLoopKey3();

    }

  }

*/

}

/*

  Old group and statements
  ------------------------

void EnterLoopKey3() {

  yn13 = '\0';
  yn13 = getch();
  yn13 = tolower(yn13);
  if (yn13 == 13) {

    if (numsvar == '1') WelcomeWindow();
    else if (numsvar == '2') MultiInstalls();

  }

  else if (yn13 == 'q') {

    clrscr();
    exit(0);

  }

  else {

    EnterLoopKey3();

  }

}

*/

void EnterLoopKey3() {

  yn13 = getch();
  if (yn13 == 0x3D) {

    gotoxy(1, 1);
    if (nocolor != '1') textbackground(BLUE);
    else textbackground(LIGHTGRAY);
    textcolor(BLACK);

    if (denyani != '1') {

      if (fbfmode == '1') getch();
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
      textbackground(BLACK);
      clrscr();
      if (nocolor != '1') textbackground(BLUE);
      else textbackground(LIGHTGRAY);
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
      if (nocolor != '1') textcolor(BLUE);
      else textcolor(LIGHTGRAY);
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
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      cprintf("ùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùùù");
      delay(500);
      gotoxy(1, 1);
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      cprintf("úúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúúú");
      delay(500);

    }

    textbackground(BLACK);
    textcolor(LIGHTGRAY);
    clrscr();
    delay(500);
    printf("\r\n");
    _setcursortype(_NORMALCURSOR);
    exit(0);

  }

  else if (yn13 == 13) {


    if (numsvar == '1') {

      if (denyani != '1') {

	if (nocolor == '1')  textbackground(BLACK);
	else textbackground(BLUE);
	textcolor(LIGHTGRAY);
	gotoxy(1, 7);
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("    The Setup program for the MultiPatcher version 1.0 patches some files       ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("    to successfully boot one OS alongside another with ease.                    ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("                                                                                ");
	if (fbfmode == '1') getch();
	if (nocolor == '1') {

	  textcolor(LIGHTGRAY);

	}

	else {

	  textcolor(CYAN);

	}

	delay(20);
	cprintf("    Info: Existing versions of certain Windows files will be backed up with     ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("    the extension .BAK. If a file with the .BAK extension exist,                ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("    the file with the .BAK extension will be deleted.                           ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("                                                                                ");
	if (fbfmode == '1') getch();
	if (nocolor == '1') {

	  textcolor(DARKGRAY);

	}

	else {

	  textcolor(RED);

	}

	delay(20);
	cprintf("    Notice: Make sure that you are running this program without modifications.  ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("            I TAKE NO RESPONSIBILITY, CONTINUE AT YOUR OWN RISK!                ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("                                                                                ");
	if (fbfmode == '1') getch();
	if (nocolor == '1') {

	  textcolor(LIGHTGRAY);

	}

	else {

	  textcolor(GREEN);

	}

	delay(20);
	cprintf("    It is advised to make a backup of your files and installation.              ");
	delay(20);
	WelWinNoTimer();

      }

      else WelWinNoTimer();

    }

    else if (numsvar == '2') {

      if (denyani != '1') {

	if (nocolor == '1')  textbackground(BLACK);
	else textbackground(BLUE);
	textcolor(LIGHTGRAY);
	gotoxy(1, 7);
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Make Windows 1.0 run in MS-DOS 6 and above                               ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Patch Windows 3.1 to run in Real Mode                                    ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Update IO.SYS to run Windows 3.x in MS-DOS 7.1                           ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Patch Windows 9x to boot with more than 1GB RAM                          ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Create an NTLDR Bootsector for Windows 9x                                ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Make Windows 95 dual-boot with Windows 98                                ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("       Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)   ");
	if (fbfmode == '1') getch();
	delay(20);
	if (fbfmode == '1') getch();
	textcolor(DARKGRAY);
	if (fbfmode == '1') getch();
	cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
	if (fbfmode == '1') getch();
	textcolor(LIGHTGRAY);
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("                                                                                ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("                                                                                ");
	if (fbfmode == '1') getch();
	delay(20);
	cprintf("                                                                                ");
	delay(20);
	MultiInstalls();

      }

      else MultiInstalls();

    }

  }

  else EnterLoopKey3();


}

void WelWinNoTimer() {

  textcolor(BLACK);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
//  clrscr();
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
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                                                       ");
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
  numsvar = '1';
  EnterLoopKey4();

}

void EnterLoopKey4() {

  yn13 = getch();
  if (yn13 == 0x3F) {

    if (ncolopt != '1') {

      if (nocolor == '1') {

	nocolor = '\0';
	WelWinNoTimer();

      }

      else if (nocolor == '\0') {

	nocolor = '1';
	WelWinNoTimer();

      }

      else EnterLoopKey4();

    }

    else EnterLoopKey4();

  }

  else if (yn13 == 0x3D) {

    if (denyani == '1') UserQuitCheck();
    else QuitAnimation();

  }

  else if (yn13 == 13) {

    if (denyani == '1') MultiInstalls();
    else {

      nextscr = '1';
      GlobalNScreen();

    }

  }

  else EnterLoopKey4();

}

void GlobalNScreen() {

  textcolor(BLACK);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 25);
  if (fbfmode == '1') getch();
  cprintf("                                                                               ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  gotoxy(1, 24);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 23);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 22);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 21);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 20);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 19);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 18);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 17);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 16);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 15);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 14);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 13);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 12);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 11);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 10);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 9);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 8);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 7);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 6);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  gotoxy(1, 4);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(200);
  if (nextscr == '1') Transitions01();
  if (nextscr == '2') Transitions02();

}

void Transitions01() {

  if (fbfmode == '1') getch();
  gotoxy(1, 4);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   What do you want the Setup to do?                                            ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Make Windows 1.0 run in MS-DOS 6 and above                               ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Patch Windows 3.1 to run in Real Mode                                    ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Update IO.SYS to run Windows 3.x in MS-DOS 7.1                           ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Patch Windows 9x to boot with more than 1GB RAM                          ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Create an NTLDR Bootsector for Windows 9x                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Make Windows 95 dual-boot with Windows 98                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)   ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  textcolor(DARKGRAY);
  if (fbfmode == '1') getch();
  cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch).     ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    Use %c", uparrow);
  if (fbfmode == '1') getch();
  cprintf(" and %c", downarr);
  if (fbfmode == '1') getch();
  cprintf(" to move the highlight to your choice.                           ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    When you are ready to continue, press ENTER.                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  MultiInstalls();

}

void MultiInstalls() {

  textcolor(BLACK);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
//  clrscr();
  gotoxy(1, 25);
  if (fbfmode == '1') getch();
  cprintf("  ENTER=Continue  F3=Quit");
  if (fbfmode == '1') getch();
  if (ncolopt != '1') {

    if (nocolor == '1') {

      cprintf("  F5=Add Color   ");
      if (fbfmode == '1') getch();
      textbackground(BLACK);

    }

    else {

      cprintf("  F5=Remove Color");
      if (fbfmode == '1') getch();
      textbackground(BLUE);

    }

  }

  else {

    textbackground(BLACK);

  }

  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                                                       ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   What do you want the Setup to do?                                            ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("       Make Windows 1.0 run in MS-DOS 6 and above                               ");
  if (fbfmode == '1') getch();
  cprintf("       Patch Windows 3.1 to run in Real Mode                                    ");
  if (fbfmode == '1') getch();
  cprintf("       Update IO.SYS to run Windows 3.x in MS-DOS 7.1                           ");
  if (fbfmode == '1') getch();
  cprintf("       Patch Windows 9x to boot with more than 1GB RAM                          ");
  if (fbfmode == '1') getch();
  cprintf("       Create an NTLDR Bootsector for Windows 9x                                ");
  if (fbfmode == '1') getch();
  cprintf("       Make Windows 95 dual-boot with Windows 98                                ");
  if (fbfmode == '1') getch();
  cprintf("       Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)   ");
  if (fbfmode == '1') getch();
  textcolor(DARKGRAY);
  if (fbfmode == '1') getch();
  cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("    Note: Enable LBA-48 in Windows 2000 and XP to boot properly (no patch).     ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("    Use %c", uparrow);
  if (fbfmode == '1') getch();
  cprintf(" and %c", downarr);
  if (fbfmode == '1') getch();
  cprintf(" to move the highlight to your choice.                           ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("    When you are ready to continue, press ENTER.                                ");
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  numsvar = '2';
  if (fbfmode == '1') getch();
  if (colsbar == '1') MultiInsGrp01();
  else if (colsbar == '2') MultiInsGrp02();
  else if (colsbar == '3') MultiInsGrp03();
  else if (colsbar == '4') MultiInsGrp04();
  else if (colsbar == '5') MultiInsGrp05();
  else if (colsbar == '6') MultiInsGrp06();
  else if (colsbar == '7') MultiInsGrp07();
  else if (colsbar == '8') MultiInsGrp08();

}

void MultiInsGrp01() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  colsbar = '1';
  EnterLoopKey5();

}

void MultiInsGrp02() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 7);
  cprintf("Make Windows 1,0 run in MS-DOS 6 and above");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 9);
  cprintf("Update IO.SYS to run Windows 3.x in MS-DOS 7.1");
  colsbar = '2';
  EnterLoopKey5();

}

void MultiInsGrp03() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 8);
  cprintf("Patch Windows 3.1 to run in Real Mode");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 9);
  cprintf("Update IO.SYS to run Windows 3.x in MS-DOS 7.1");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 10);
  cprintf("Patch Windows 9x to boot with more than 1GB RAM");
  colsbar = '3';
  EnterLoopKey5();

}

void MultiInsGrp04() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 9);
  cprintf("Update IO.SYS to run Windows 3.x in MS-DOS 7.1");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 10);
  cprintf("Patch Windows 9x to boot with more than 1GB RAM");
   if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 11);
  cprintf("Create an NTLDR Bootsector for Windows 9x");
  colsbar = '4';
  EnterLoopKey5();

}

void MultiInsGrp05() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 10);
  cprintf("Patch Windows 9x to boot with more than 1GB RAM");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 11);
  cprintf("Create an NTLDR Bootsector for Windows 9x");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 12);
  cprintf("Make Windows 95 dual-boot with Windows 98");
  colsbar = '5';
  EnterLoopKey5();

}

void MultiInsGrp06() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 11);
  cprintf("Create an NTLDR Bootsector for Windows 9x");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 12);
  cprintf("Make Windows 95 dual-boot with Windows 98");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  colsbar = '6';
  EnterLoopKey5();

}

void MultiInsGrp07() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 12);
  cprintf("Make Windows 95 dual-boot with Windows 98");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above            ");
  colsbar = '7';
  EnterLoopKey5();

}

void MultiInsGrp08() {

  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy(8, 13);
  cprintf("Update Windows NT 4.0 IDE driver (removes Boot errors on some systems)");
  textbackground(LIGHTGRAY);
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(BLUE);

  }

  gotoxy (8, 14);
  cprintf("Patch NTLDR to boot both Windows NT 3.x and Windows XP");
  if (nocolor == '1') {

    textbackground(BLACK);

  }

  else {

    textbackground(BLUE);

  }

  textcolor(LIGHTGRAY);
  gotoxy (8, 7);
  cprintf("Make Windows 1.0 run in MS-DOS 6 and above");
  colsbar = '8';
  EnterLoopKey5();

}

/*

  Old group and statements
  ------------------------

void EnterLoopKey5() {

  yn13 = '\0';
  yn13 = getch();
  yn13 = tolower(yn13);
  if (yn13 == 13) {

    MultiInstalls();

  }

  else if (yn13 == 'q') {

    numsvar = '2';
    UserQuitCheck();

  }

  else {

    EnterLoopKey5();

  }

}

*/

void EnterLoopKey5() {

  yn13 = getch();
  if (yn13 == 13) {

    if (denyani != '1') {

      nextscr = '2';
      GlobalNScreen();

    }

    else if (colsbar == '1') GetWindowsDir();

  }

  else if (yn13 == 0 || yn13 == 0xE0) { // Execute if the key is a special key

    yn13 = getch();
    if (yn13 == 72) { // Up arrow key

      if (colsbar == '1') MultiInsGrp07();
      else if (colsbar == '2') MultiInsGrp01();
      else if (colsbar == '3') MultiInsGrp02();
      else if (colsbar == '4') MultiInsGrp03();
      else if (colsbar == '5') MultiInsGrp04();
      else if (colsbar == '6') MultiInsGrp05();
      else if (colsbar == '7') MultiInsGrp06();
//      else if (colsbar == '8') MultiInsGrp07();

    }

    else if (yn13 == 80) { // Down arrow key

      if (colsbar == '1') MultiInsGrp02();
      else if (colsbar == '2') MultiInsGrp03();
      else if (colsbar == '3') MultiInsGrp04();
      else if (colsbar == '4') MultiInsGrp05();
      else if (colsbar == '5') MultiInsGrp06();
      else if (colsbar == '6') MultiInsGrp07();
      else if (colsbar == '7') MultiInsGrp01();
//      else if (colsbar == '8') MultiInsGrp01();

    }

    if (yn13 == 0x3F) {

      if (ncolopt != '1') {

	if (nocolor == '1') {

	  nocolor = '\0';
	  MultiInstalls();

	}

	else if (nocolor == '\0') {

	  nocolor = '1';
	  MultiInstalls();

	}

	else EnterLoopKey5();

      }

      else EnterLoopKey5();

    }

    else if (yn13 == 0x3D) {

      if (denyani == '1') UserQuitCheck();
      else QuitAnimation();

    }

    else EnterLoopKey5();

  }

  else EnterLoopKey5();

}

void Transitions02() {

  gotoxy(1, 4);
  if (fbfmode == '1') getch();
  if (nocolor != '1') textbackground(BLUE);
  else if (nocolor == '1') textbackground(BLACK);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   Where do you want MultiPatcher installed?                                    ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    Setup installs MultiPatcher onto your Hard Disk. Choose the location        ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    where you want these files to be installed.                                 ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("       ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("                                              ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  if (nocolor != '1') textbackground(BLUE);
  else if(nocolor == '1') textbackground(BLACK);
  if (fbfmode == '1') getch();
  cprintf("                           ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    To change the suggested location, press the BACKSPACE key                   ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    to delete characters and then type the directory where you want             ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    MultiPatcher installed.                                                     ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    When you are ready to continue, press ENTER.                                ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  delay(5);
  if (fbfmode == '1') getch();
  GetWindowsDir();

}

void GetWindowsDir() {

  gotoxy(1, 1);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf(" MultiPatcher by LoopKey                                                        ");
  if (fbfmode == '1') getch();
  cprintf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ                                                       ");
  if (fbfmode == '1') getch();
  if (nocolor != '1') textbackground(BLUE);
  else if (nocolor == '1') textbackground(BLACK);
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(WHITE);
  if (fbfmode == '1') getch();
  cprintf("   Where do you want MultiPatcher installed?                                    ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textcolor(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("    Setup installs MultiPatcher onto your Hard Disk. Choose the location        ");
  if (fbfmode == '1') getch();
  cprintf("    where you want these files to be installed.                                 ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("       ");
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("                                              ");
  if (fbfmode == '1') getch();
  if (nocolor != '1') textbackground(BLUE);
  else if(nocolor == '1') textbackground(BLACK);
  if (fbfmode == '1') getch();
  cprintf("                           ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  cprintf("    To change the suggested location, press the BACKSPACE key                   ");
  if (fbfmode == '1') getch();
  cprintf("    to delete characters and then type the directory where you want             ");
  if (fbfmode == '1') getch();
  cprintf("    MultiPatcher installed.                                                     ");
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
  cprintf("    When you are ready to continue, press ENTER.                                ");
  if (fbfmode == '1') getch();
  cprintf("    To quit the MultiPatcher program, press F3.                                 ");
  if (fbfmode == '1') getch();
  cprintf("                                                                                ");
  if (fbfmode == '1') getch();
  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  textcolor(BLACK);
  if (fbfmode == '1') getch();
  cprintf("  ENTER=Continue  F3=Quit  ");
  if (ncolopt != '1') {

    if (nocolor != '1') cprintf("F5=Remove Color");
    else if (nocolor == '1') cprintf("F5=Add Color   ");

  }

}