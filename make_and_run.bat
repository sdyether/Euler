@echo off

for /f %%i in ('dir /b/a-d/od/t:w') do set LAST=%%i
::echo The most recently modified file is %LAST%
for /F %%i in ("%LAST%") do set BASE=%%~ni
g++ %BASE%.cpp -o %BASE%.exe
echo compiled
echo.
%BASE%.exe