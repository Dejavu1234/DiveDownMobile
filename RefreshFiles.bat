echo Deleting the DiveDown solution file...
del /S /Q DiveDown.sln

echo Removing the Intermediate directory...
rmdir /S /Q Intermediate

echo Generating Visual Studio project files...
PowerShell "(New-Object -com 'Shell.Application').ShellExecute('DiveDown.uproject', '', '', 'rungenproj')"

@echo off