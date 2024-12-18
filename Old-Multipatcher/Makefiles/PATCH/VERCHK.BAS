CLS
 SHELL "VER > c:\temp.txt"
OPEN "c:\temp.txt" FOR INPUT AS #1
LINE INPUT #2, x$
CLOSE #1
KILL "C:\TEMP.TXT"
PRINT "The operating system version is "; x$
END

