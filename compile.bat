@echo off

set name="ultimate_mmc3"

set path=%path%;..\bin\

set CC65_HOME=..\

c:\cc65\bin\cc65 -Oirs %name%.c --add-source
c:\cc65\bin\ca65 crt0.s
c:\cc65\bin\ca65 %name%.s -g

c:\cc65\bin\ld65 -C MMC3_512_256.cfg -o %name%.nes crt0.o %name%.o nes.lib -Ln labels.txt

del *.o

move /Y labels.txt BUILD\ 
move /Y %name%.s BUILD\ 
move /Y %name%.nes BUILD\ 

BUILD\%name%.nes
pause