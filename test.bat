@echo off

set /P NUMINPUT="‰½ŒÂ•ªÁ‚µ‚½‚¢‚©:"
 
for %%a in (*.mp3) do (
  test.exe %%a %numinput%
)

pause