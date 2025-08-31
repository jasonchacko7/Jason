@echo off
:: Check if a file name is provided
if "%~1"=="" (
    echo Usage: run_with_time.bat filename.c
    exit /b 1
)

:: Compile the provided C file
gcc "%~1" -o program.exe
if errorlevel 1 (
    echo Compilation failed.
    exit /b 1
)

:: Get the start time in milliseconds
for /f "tokens=1-4 delims=:." %%a in ("%time%") do (
    set start_h=%%a
    set start_m=%%b
    set start_s=%%c
    set start_ms=%%d
)
set /a start_total_ms=(start_h*3600 + start_m*60 + start_s)*1000 + start_ms

:: Run the compiled program
echo Running %~1...
program.exe

:: Get the end time in milliseconds
for /f "tokens=1-4 delims=:." %%a in ("%time%") do (
    set end_h=%%a
    set end_m=%%b
    set end_s=%%c
    set end_ms=%%d
)
set /a end_total_ms=(end_h*3600 + end_m*60 + end_s)*1000 + end_ms

:: Calculate the elapsed time, accounting for midnight rollover
if %end_total_ms% lss %start_total_ms% (
    set /a elapsed=(86400000 + end_total_ms - start_total_ms)
) else (
    set /a elapsed=end_total_ms-start_total_ms
)

:: Display the elapsed time
echo Elapsed time: %elapsed% milliseconds