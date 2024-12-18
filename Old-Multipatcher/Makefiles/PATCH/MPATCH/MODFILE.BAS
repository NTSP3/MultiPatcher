OPEN "C:\PATCH\MPATCH\TOMOD.TXT" FOR RANDOM AS #1 LEN = LOF(1)

' Check if the file exists
IF LOF(1) > 0 THEN
    ' Read the file contents
    DIM fileContent AS STRING
    fileContent = SPACE$(LOF(1))
    GET #1, , fileContent

    ' Search for [Paths] group
    posPaths = INSTR(1, fileContent, "[Paths]")
    IF posPaths = 0 THEN
        ' [Paths] group not found, insert at the beginning of the file
        fileContent = "[Paths]" + CHR$(13) + CHR$(10) + fileContent
        posPaths = 1
    END IF

    ' Search for WINDIR=
    posWindir = INSTR(posPaths, fileContent, "WINDIR=")
    IF posWindir > 0 THEN
        ' Check if WINDIR is already commented
        commentCheck$ = LEFT$(fileContent, posWindir - 1)
        IF RIGHT$(commentCheck$, 1) <> ";" THEN
            ' Insert a semicolon at the beginning of the variable
            fileContent = LEFT$(fileContent, posWindir - 1) + ";" + MID$(fileContent, posWindir)
        END IF
    END IF

    ' Search for WINBOOTDIR=
    posWinBootDir = INSTR(posPaths, fileContent, "WINBOOTDIR=")
    IF posWinBootDir > 0 THEN
        ' Replace the value with C:\WINX86
        fileContent = LEFT$(fileContent, posWinBootDir - 1) + "WINBOOTDIR=C:\WINX86" + MID$(fileContent, posWinBootDir + LEN("WINBOOTDIR="))
    ELSE
        ' Insert WINBOOTDIR=C:\WINX86 under [Paths] group
        fileContent = LEFT$(fileContent, posPaths + LEN("[Paths]") + 2) + "WINBOOTDIR=C:\WINX86" + CHR$(13) + CHR$(10) + MID$(fileContent, posPaths + LEN("[Paths]") + 3)
    END IF

    ' Write the modified content back to the file
    SEEK #1, 1
    PUT #1, , fileContent
END IF

CLOSE #1

