

























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

  textbackground(BLACK);
  clrscr();
  while(1) {

    if (currscr == '\0') SetMultiValue();
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

    if (currscr == '3' && yn13 == 13) { nocolor = '1'; ncolopt = '1'; SetMultiValue(); }
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

    if (currscr == '4' && yn13 == 13) { denychk = '1'; SetMultiValue(); }
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

    if (currscr == '5' && yn13 == 13) { denyani = '1'; SetMultiValue(); }
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

    if (currscr == '7' && yn13 == 13) { nocolor = '1'; ncolopt = '1'; SetMultiValue(); }
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

    if (currscr == '8' && yn13 == 13) { denychk = '1'; SetMultiValue(); }
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

    if (currscr == '9' && yn13 == 13) { denyani = '1'; SetMultiValue(); }
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

    if (currscr == 10 && yn13 == 13) { fbfmode = '1'; SetMultiValue(); }
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

    if (currscr == 11 && yn13 == 13) { devmode = '1'; SetMultiValue(); }

  }
