CLS
DIM FileName AS STRING * 255
DIM Context AS STRING * 255
FileName = "C:\PATCH\MPATCH\TOMOD.TXT"
PRINT ""
PRINT ""
PRINT ""
PRINT " Enter file"
'LINE INPUT FileName
OPEN FileName FOR RANDOM AS #1 LEN = LEN(Context)
GET #1, , Context
PRINT "Then"
PRINT Context
PRINT ""
PRINT "Change to"
LINE INPUT Context
PUT #1, , Context
CLOSE #1
PRINT "Updated."
END

