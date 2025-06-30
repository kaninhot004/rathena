@echo off
REM "@echo off" prevents each line from being printed before execution,
REM and is optional
REM "REM" introduces a comment line
set SOURCE_DIR=%~dp0
cd %SOURCE_DIR%
start cmd /k logserv.bat
start cmd /k charserv.bat
start cmd /k webserv.bat
start cmd /k mapserv.bat