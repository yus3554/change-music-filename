@echo off

set /P NUMINPUT="何個分消したいか:"
 
for %%a in (*.mp3) do (
  test.exe %%a %numinput%
)

pause