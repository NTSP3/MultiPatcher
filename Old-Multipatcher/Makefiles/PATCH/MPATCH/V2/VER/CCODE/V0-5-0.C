#include <stdio.h> // Include Standard Input and Output Header Library
#include <conio.h> // Include Control Input and Output Header Library
#include <dirent.h> // Include Directory Entry Header Library
#include <string.h> // Include String Header Library
#include <stdlib.h> // Include Library Header

/*

  DEVELOPER'S CODE
 ==================

 Health regards: Holding the F5 button for long can cause problems for some people!

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
 182 = ถ
 186 = บ
 187 = ป
 188 = ผ
 196 = ฤ
 199 = ว
 200 = ศ
 201 = ษ
 205 = อ
 219 = Û (not used)
 249 = ๙ (replaced)

 Utility File Names
 ------------------

 NTDRV.UTL = Windows NT 4.0 ATAPI.SYS replacement


*/

/* Void group */
// void CheckUserOpt2(); // Declare function for later use
void ProgramOption(); // Declare function for later use
void SetMultiValue(); // Declare function for later use
void LoadScrsCheck(); // Declare function for later use
void WelcomeWindow(); // Declare function for later use
void WelWinNoTimer(); // Declare function for later use
void UserQuitCheck(); // Declare function for later use
void MultiInstalls(); // Declare function for later use
void Transitions01(); // Declare function for later use
void EnterLoopKey1(); // Declare function for later use
void EnterLoopKey2(); // Declare function for later use
void EnterLoopKey3(); // Declare function for later use
void EnterLoopKey4(); // Declare function for later use
void MultiInsGrp01(); // Declare function for later use
void MultiInsGrp02(); // Declare function for later use
void MultiInsGrp03(); // Declare function for later use
void MultiInsGrp04(); // Declare function for later use
void MultiInsGrp05(); // Declare function for later use
void MultiInsGrp06(); // Declare function for later use
void MultiInsGrp07(); // Declare function for later use
void MultiInsGrp08(); // Declare function for later use
/* Char group */
// Old - char yn13; // Declare variable for later use
// char udirchk; // Declare variable for later use
// char filechk; // Declare variable for later use
// char diamond; // Declare variable for later use
char menuval; // Declare variable for later use
char devmenu; // Declare variable for later use
char denychk; // Declare variable for later use
char fbfmode; // Declare variable for later use
char devmode; // Declare variable for later use
char denyani; // Declare variable for later use
char nocolor; // Declare variable for later use
char ncolopt; // Declare variable for later use
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
    printf("\r\n   /?          Run Option Selector\r\n");
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
      ProgramOption();

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

    else if (strcmp(argv[1], "/developer-option-hidden-loadoptions-true") == 0) {

      devmenu = '1';
      menuval = '1';
      ProgramOption();

    }

    else {

      printf("\r\nInvalid argument. Use /? for help.\r\n");
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
      printf("\r\n\nNote: Using /?? with other options will only launch help.\r\n");
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

	printf("\r\nInvalid arguments. Use /? for help.\r\n");
	exit(0);

      }

      if (argc > 3 && strcmp(argv[3], "/?") == 0 || strcmp(argv[3], "/??")
       == 0) {

	printf("\r\nMultiPatcher Options: SETUP [/CL] [/NC] [/NH] [/TI] [/NI]\n");
	printf("\r\n   /CL         Load setup in monochrome mode");
	printf("\r\n   /NC         Skip file check");
	printf("\r\n   /NH         Do not hide cursor (DEV only)");
	printf("\r\n   /TI         Start in frame-by-frame mode (DEV only)");
	printf("\r\n   /NI         Do not load animations");
	printf("\r\n   /??         Show Program Syntax");
	printf("\r\n   /?          Run Option Selector (runs help if launched with other options)");
	printf("\r\n\nNote: Using /?? with other options will only launch help.\r\n");
	exit(0);

      }

      else if (argc > 3) {

	if (strcmp(argv[3], "/NC") == 0 || strcmp(argv[3], "/nc") == 0 || strcmp(argv[3], "/nC") == 0 || strcmp(argv[3], "/Nc") == 0) {

	  denychk = '1';
	  SetMultiValue();

	}

	else if (strcmp(argv[3], "/NH") == 0 || strcmp(argv[3], "/nh") == 0 || strcmp(argv[3], "/nH") == 0 || strcmp(argv[3], "/Nh") == 0 || strcmp(argv[3], "/TI") == 0 || strcmp(argv[3], "/ti") == 0 || strcmp(argv[3], "/Ti") == 0 || strcmp(argv[3], "/tI") == 0) {

	  printf("\r\nThis option is available only for the developer.\r\n");
	  exit(0);

	}

	else if (strcmp(argv[3], "/NI") == 0 || strcmp(argv[3], "/ni") == 0 || strcmp(argv[3], "/nI") == 0 || strcmp(argv[3], "/Ni") == 0) {

	  denyani = '1';
	  SetMultiValue();

	}

	else if (strcmp(argv[3], "/CL") == 0 || strcmp(argv[3], "/cl") == 0 || strcmp(argv[3], "/cL" ) == 0 || strcmp(argv[3], "/Cl" ) == 0) {

	  nocolor = '1';
	  ncolopt = '1';
	  SetMultiValue();

	}

	else if (strcmp(argv[3], "/developer-option-show-inputcursor") == 0) {

	  devmode = '1';
	  SetMultiValue();

	}

	else if (strcmp(argv[3], "/developer-option-enable-fbfmode") == 0) {

	  fbfmode = '1';

	}

	else {

	   printf("\r\nInvalid arguments. Use /? for help.\r\n");
	   exit(0);

	}

      }

    }

  }

  SetMultiValue(); // Skip to the first portion of the Setup
  return 0; // Return value 0 (success) to the system

}

void ProgramOption() {

  clrscr();
  gotoxy(1, 1);
  textbackground(BLACK);
  textcolor(LIGHTGRAY);
  cprintf("MultiPatcher V1.0");
  cprintf("\r\n\n");
  cprintf("Please select the option that you want the program to start in:\r\n\n\n");
  cprintf("    Run in Black and White Monochrome mode            \r\n");
  cprintf("    Run without checking for files                    \r\n");
  cprintf("    Run without enabling animations                   \r\n");
  if (devmenu == '1') {

    textcolor(DARKGRAY);
    cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
    cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
    exit(0);

  }

  else {

  cprintf("    Run in Frame-by-frame mode     (Developer mode)   \r\n");
  cprintf("    Run but always show DOS cursor (Developer mode)   \r\n");
  exit(0);

  }

}

void SetMultiValue() {

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
  delay(100);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(100);
  if (fbfmode == '1') getch();
  cprintf(".");
  if (fbfmode == '1') getch();
  delay(100);
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
//  cprintf("อออออออออออออออออออออออออออ                                                     ");
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
//  textcolor(LIGHTBLUE);
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
//  textcolor(LIGHTGREEN);
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
//  textcolor(LIGHTCYAN);
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
//  textcolor(LIGHTRED);
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
//  textcolor(LIGHTMAGENTA);
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
//  textcolor(YELLOW);
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
//  textcolor(WHITE);
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
//  textcolor(DARKGRAY);
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
//  textcolor(GREEN);
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
//  textcolor(CYAN);
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
//  textcolor(RED);
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
//  textcolor(MAGENTA);
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
//  textcolor(BROWN);
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
//  textcolor(BLACK);
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
//  textcolor(DARKGRAY);
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
//  textcolor(LIGHTGRAY);
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
  EnterLoopKey1();

} // Ending of a function

/*

  Old group and statements

void EnterLoopKey1() {

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

    EnterLoopKey1();

  }

}

*/

void EnterLoopKey1() {

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

      else EnterLoopKey1();

    }

    else EnterLoopKey1();

  }

  else if (yn13 == 0x3D) UserQuitCheck();
  else if (yn13 == 13) Transitions01();
  else EnterLoopKey1();

}

void UserQuitCheck() {

  gotoxy (14, 7);
  if (fbfmode == '1') getch();
  if (nocolor == '1') {

    textcolor(BLACK);

  }

  else {

    textcolor(RED);

  }

  textbackground(LIGHTGRAY);
  if (fbfmode == '1') getch();
  cprintf("ษออออออออออออออออออออออออออออออออออออออออออออออออออป");
  if (fbfmode == '1') getch();
  gotoxy (14, 8);
  if (fbfmode == '1') getch();
  cprintf("บ  MultiPatcher is not completely set up on your   บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 9);
  if (fbfmode == '1') getch();
  cprintf("บ  computer. If you quit Setup now, you will need  บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 10);
  if (fbfmode == '1') getch();
  cprintf("บ  to run Setup again to patch Windows files.      บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 11);
  if (fbfmode == '1') getch();
  cprintf("บ                                                  บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 12);
  if (fbfmode == '1') getch();
  cprintf("บ     ๙To continue Setup, press ENTER.             บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 13);
  if (fbfmode == '1') getch();
  cprintf("บ     ๙To quit Setup, press F3.                    บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 14);
  if (fbfmode == '1') getch();
  cprintf("วฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤถ");
  if (fbfmode == '1') getch();
  gotoxy (14, 15);
  if (fbfmode == '1') getch();
  cprintf("บ  F3=Quit  ENTER=Continue                         บ");
  if (fbfmode == '1') getch();
  gotoxy (14, 16);
  if (fbfmode == '1') getch();
  cprintf("ศออออออออออออออออออออออออออออออออออออออออออออออออออผ");
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
    EnterLoopKey2();

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
      EnterLoopKey2();

    }

    else {

      textcolor(DARKGRAY);
      textbackground(BLACK);
      if (fbfmode == '1') getch();
      cprintf("om");
      EnterLoopKey2();

    }

  }

}

/*

  Old group and statements
  ------------------------

void EnterLoopKey2() {

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

    EnterLoopKey2();

  }

}

*/

void EnterLoopKey2() {

  yn13 = getch();
  if (yn13 == 0x3D) {

    gotoxy(1, 1);
    textbackground(BLACK);
    textcolor(LIGHTGRAY);
    _setcursortype(_NORMALCURSOR);
    clrscr();
    exit(0);

  }

  else if (yn13 == 13) {

    if (numsvar == '1') WelWinNoTimer();
    else if (numsvar == '2') MultiInstalls();

  }

  else EnterLoopKey2();


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
  numsvar = '1';
  EnterLoopKey3();

}

void EnterLoopKey3() {

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

      else EnterLoopKey3();

    }

    else EnterLoopKey3();

  }

  else if (yn13 == 0x3D) UserQuitCheck();
  else if (yn13 == 13) {

    if (denyani == '1') MultiInstalls();
    else Transitions01();

  }

  else EnterLoopKey3();

}

void Transitions01() {

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
  cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
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
  cprintf("    Use the %c", uparrow);
  if (fbfmode == '1') getch();
  cprintf(" and %c", downarr);
  if (fbfmode == '1') getch();
  cprintf(" keys to move the highlight to your choice.                  ");
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
  cprintf("อออออออออออออออออออออออออ                                                       ");
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
  cprintf("       Patch NTLDR to boot both Windows NT 3.x and Windows XP                   ");
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
  cprintf("    Use the %c", uparrow);
  if (fbfmode == '1') getch();
  cprintf(" and %c", downarr);
  if (fbfmode == '1') getch();
  cprintf(" keys to move the highlight to your choice.                  ");
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
  gotoxy(8, 14);
  cprintf("Patch NTLDR to boot both Windows NT 3.x and Windows XP");
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
  EnterLoopKey4();

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
  EnterLoopKey4();

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
  EnterLoopKey4();

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
  EnterLoopKey4();

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
  EnterLoopKey4();

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
  EnterLoopKey4();

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
  gotoxy (8, 14);
  cprintf("Patch NTLDR to boot both Windows NT 3.x and Windows XP");
  colsbar = '7';
  EnterLoopKey4();

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
  EnterLoopKey4();

}

/*

  Old group and statements
  ------------------------

void EnterLoopKey4() {

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

    EnterLoopKey4();

  }

}

*/

void EnterLoopKey4() {

  yn13 = getch();
  if (yn13 == 13) MultiInstalls();
  else if (yn13 == 0 || yn13 == 0xE0) { // Execute if the key is a special key

    yn13 = getch();
    if (yn13 == 72) { // Up arrow key

      if (colsbar == '1') MultiInsGrp08();
      else if (colsbar == '2') MultiInsGrp01();
      else if (colsbar == '3') MultiInsGrp02();
      else if (colsbar == '4') MultiInsGrp03();
      else if (colsbar == '5') MultiInsGrp04();
      else if (colsbar == '6') MultiInsGrp05();
      else if (colsbar == '7') MultiInsGrp06();
      else if (colsbar == '8') MultiInsGrp07();

    }

    else if (yn13 == 80) { // Down arrow key

      if (colsbar == '1') MultiInsGrp02();
      else if (colsbar == '2') MultiInsGrp03();
      else if (colsbar == '3') MultiInsGrp04();
      else if (colsbar == '4') MultiInsGrp05();
      else if (colsbar == '5') MultiInsGrp06();
      else if (colsbar == '6') MultiInsGrp07();
      else if (colsbar == '7') MultiInsGrp08();
      else if (colsbar == '8') MultiInsGrp01();

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

	else EnterLoopKey4();

      }

      else EnterLoopKey4();

    }

    else if (yn13 == 0x3D) UserQuitCheck();
    else EnterLoopKey4();

  }

  else EnterLoopKey4();

}