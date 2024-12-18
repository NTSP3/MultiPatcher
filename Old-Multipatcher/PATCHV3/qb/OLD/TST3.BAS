DIM USROPTS AS STRING

CheckCommands:

  USROPTS = COMMAND$
  ON ERROR GOTO FileNotFound
  OPEN ".\UTILFS\NTDRV.UTL" FOR INPUT AS #1
  CLOSE #1
  PRINT "File Exist"
  END

  IF (LEN(USROPTS) = 0) THEN

    SHELL ".\UTILFS\RUNNER.EXE /options-run-without-arguments-passed-controlv2"

  ELSE

    PRINT USROPTS

  END IF

  END

FileNotFound:

  PRINT "                                                                              "
  END

