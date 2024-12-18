REM This check ensures that you have typed the correct path.
@if %1!==! goto SYNTAX

REM This will make the background blue (ANSI Required - Must load before ECHO).
PROMPT $e[2;37;44m$p$g$e

REM Echo off turns input commands and prompt off.
@echo off

REM CLS Clears Screen.
@cls

REM This will make the background black (ANSI Required)
REM @PROMPT $e[2;37;40m$p$g$e
REM @PROMPT $p$g

REM This will make the prompt show "%driveletter%:\%path%>"
PROMPT $p$g

CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    Welcome to the installer for Windows 3.1 Real Mode!
echo.
echo    This file enables Real Mode support in Windows 3.1, 3.11, WFW 3.1, and
echo    WFW 3.11. It does this by replacing certain system files on your computer
echo    with the versions from Windows 3.10 build 026d, which was the last one to
echo    include Real Mode support for Windows. Also, the about section will show
echo    that it's version is Windows 3.10.026d. I couldn't find a way to change
echo    that :(. Backups of the files will be saved with .rtm extension. System.ini
echo    will also be replaced.
echo.
echo    Installer created by Wintelic
echo.
echo    WARNING: BY DOING THIS, YOU MAY LOSE ACCESS TO STANDARD OR 386 ENH MODE!
echo             IF SO, I AM NOT RESPONSIBLE! HAVE A BACKUP BEFORE CONTINUING!
echo    NOTE: THE WINDOWS 3.10.026d FILES ARE NOT OWNED BY ME.
echo.
echo    To continue, press any key. To quit, press CTRL+C
echo.
echo.
@PROMPT $e[2;37;40m$p$g$e
@pause >nul
@GOTO WINSTALL

:WINSTALL
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    WARNING: INCORRECT PATH SELECTION COULD LEAD TO A FAIL!
echo.
echo    The path that you selected is %1.
echo.
echo    To continue, press any key. To quit, press CTRL+C
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@PROMPT $e[2;37;40m$p$g$e
@pause >nul
@GOTO VERCHECK

:VERCHECK
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    Please wait while the installation wizard detects an installation of
echo    windows in %1...
echo.                                        
echo.
echo    Don't exit out of this portion.                                                       
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@if not exist %1\win.com goto NOWIN
@if not exist %1\winver.exe goto NOWIN
REM WFWG 3.11?
@if not exist %1\SYSTEM\IFSMGR.386 goto BAD_WINVER
@if not exist %1\SYSTEM\VXDLDR.386 goto BAD_WINVER
REM Win9x?
@if exist %1\SYSTEM\VMM32.VXD goto WIN9X
REM WinNT?
@if exist %1\SYSTEM32\NTOSKRNL.EXE goto WINNT
REM Check
@GOTO EXTRACT

:EXTRACT
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    Installing Files.
echo    Please wait...
echo.
@if not exist %temp% goto TEMPDIRINS
@pkzip>nul -o rm.zip %temp%
ren %1\.\win.com win.rtm
ren %1\.\progman.exe progman.rtm
ren %1\.\system.ini system.rtm
ren %1\.\control.exe control.rtm
ren %1\.\system\kernel.exe kernel.rtm
ren %1\.\system\dosswap.exe dosswap.rtm
ren %1\.\system\gdi.exe gdi.rtm
ren %1\.\system\user.exe user.rtm
ren %1\.\system\shell.dll shell.rtm
ren %1\.\system\commdlg.dll commdlg.rtm
ren %1\.\system\system.drv system.rtm
ren %1\.\system\keyboard.drv keyboard.rtm
ren %1\.\system\comm.drv comm.rtm
ren %1\.\system\sound.drv sound.rtm
ren %1\.\system\mouse.drv mouse.rtm
copy %temp%\.\win.com %1\. >nul
copy %temp%\.\progman.exe %1\. >nul
copy %temp%\.\system.ini %1\. >nul
copy %temp%\.\control.exe %1\. >nul
copy %temp%\.\kernel.exe %1\system\. >nul
copy %temp\.\dosswap.exe %1\system\. >nul
copy %temp%\.\gdi.exe %1\system\. >nul
copy %temp%\.\user.exe %1\system\. >nul
copy %temp%\.\shell.dll %1\system\. >nul
copy %temp%\.\commdlg.dll %1\system\. >nul
copy %temp%\.\system.drv %1\system\. >nul
copy %temp%\.\keyboard.drv %1\system\. >nul
copy %temp%\.\comm.drv %1\system\. >nul
copy %temp%\.\sound.drv %1\system\. >nul
copy %temp%\.\mouse.drv %1\system\. >nul
goto check

:TEMPDIRINS
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    Installing Files.
echo    Please wait...
echo.
@if not exist %temp% md C:\TEMP
@set temp=C:\TEMP
@pkzip>nul -o rm.zip %temp%
ren %1\.\win.com win.rtm
ren %1\.\progman.exe progman.rtm
ren %1\.\system.ini system.rtm
ren %1\.\control.exe control.rtm
ren %1\.\system\kernel.exe kernel.rtm
ren %1\.\system\dosswap.exe dosswap.rtm
ren %1\.\system\gdi.exe gdi.rtm
ren %1\.\system\user.exe user.rtm
ren %1\.\system\shell.dll shell.rtm
ren %1\.\system\commdlg.dll commdlg.rtm
ren %1\.\system\system.drv system.rtm
ren %1\.\system\keyboard.drv keyboard.rtm
ren %1\.\system\comm.drv comm.rtm
ren %1\.\system\sound.drv sound.rtm
ren %1\.\system\mouse.drv mouse.rtm
copy %temp%\.\win.com %1\. >nul
copy %temp%\.\progman.exe %1\. >nul
copy %temp%\.\system.ini %1\. >nul
copy %temp%\.\control.exe %1\. >nul
copy %temp%\.\kernel.exe %1\system\. >nul
copy %temp%\.\dosswap.exe %1\system\. >nul
copy %temp%\.\gdi.exe %1\system\. >nul
copy %temp%\.\user.exe %1\system\. >nul
copy %temp%\.\shell.dll %1\system\. >nul
copy %temp%\.\commdlg.dll %1\system\. >nul
copy %temp%\.\system.drv %1\system\. >nul
copy %temp%\.\keyboard.drv %1\system\. >nul
copy %temp%\.\comm.drv %1\system\. >nul
copy %temp%\.\sound.drv %1\system\. >nul
copy %temp%\.\mouse.drv %1\system\. >nul
goto check


:CHECK
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    The installer is now checking to make sure everything worked.
echo    Please wait...
echo.                                        
echo.
echo    Don't exit out of this portion.                                                       
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@if not exist %1\win.com goto FAIL
@if not exist %1\progman.exe goto FAIL
@if not exist %1\system.ini goto FAIL
@if not exist %1\control.exe goto FAIL
@if not exist %1\SYSTEM\VGASYS.FON goto FAIL
@if not exist %1\SYSTEM\VGAFIX.FON goto FAIL
@if not exist %1\SYSTEM\VGAOEM.FON goto FAIL
@if not exist %1\SYSTEM\KERNEL.EXE goto FAIL
@if not exist %1\SYSTEM\DOSSWAP.EXE goto FAIL
@if not exist %1\SYSTEM\GDI.EXE goto FAIL
@if not exist %1\SYSTEM\USER.EXE goto FAIL
@if not exist %1\SYSTEM\SHELL.DLL goto FAIL
@if not exist %1\SYSTEM\COMMDLG.DLL goto FAIL
@if not exist %1\SYSTEM\VGA.DRV goto FAIL
@if not exist %1\SYSTEM\VGACOLOR.2GR goto FAIL
@if not exist %1\SYSTEM\SYSTEM.DRV goto FAIL
@if not exist %1\SYSTEM\KEYBOARD.DRV goto FAIL
@if not exist %1\SYSTEM\COMM.DRV goto FAIL
@if not exist %1\SYSTEM\SOUND.DRV goto FAIL
@if not exist %1\SYSTEM\MOUSE.DRV goto FAIL
@GOTO SUCCESS

:SUCCESS
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    The patch installed successfully.
echo    You should be able to boot into Real Mode now.
echo.
echo    If this installer deleted any of your files or destroyed your windows
echo    installation, I am not be responsible for it.
echo.
echo    Press any key to exit.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@PROMPT $e[2;37;40m$p$g$e
@pause >nul
@GOTO END

:FAIL
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    Unfortunately, the installer failed to install the Real Mode Patch.
echo.
echo    Press any key to exit.
echo.
echo.    
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@pause >nul
@GOTO END


:NOWIN
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    The path %1 does not have an installation of Windows.
echo.
echo    Setup cannot continue. Press any key to exit.
echo.
echo.    
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@pause >nul
@GOTO END

:BAD_WINVER
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    The path %1 does not look to be an installation of Windows 3.1.
echo.
echo    Setup cannot continue. Press any key to exit.
echo.
echo.    
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@pause >nul
@GOTO END

:WIN9X
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    The path %1 has an installation of Windows 95/98/98SE/Me.
echo.
echo    Setup cannot continue. Press any key to exit.
echo.
echo.    
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@pause >nul
@GOTO END

:WINNT
@ECHO ON
@PROMPT $e[2;37;44m$p$g$e
@ECHO OFF
@CLS
echo.
echo  Windows 3.1 Beta Real Mode Installer
echo  อออออออออออออออออออออออออออออออออออออ
echo.
echo.
echo    The path %1 has an installation of Windows NT.
echo.
echo    Setup cannot continue. Press any key to exit.
echo.
echo.    
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
echo.
@pause >nul
@GOTO END

:SYNTAX
echo off
cls
echo.
echo  In order to run this installation file, type the command in the format
echo  below.
echo.
echo  Format: %0 C:\WINDOWS
echo.
echo  Press any key to exit.
pause >nul
exit

:END
ECHO ON
PROMPT $e[2;37;40m$p$g$e
ECHO OFF
@CLS
