@echo off

set /P NUMINPUT="��������������:"
 
for %%a in (*.mp3) do (
  test.exe %%a %numinput%
)

pause