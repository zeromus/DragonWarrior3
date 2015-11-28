@echo off

if "%computername%" == "HELL" (
  rem start "" "c:\Program Files\EmEditor\EmEditor.exe" bank00.inc bank01.inc bank02.inc bank03.inc bank04.inc bank05.inc bank06.inc bank07.inc bank08.inc bank09.inc bank0A.inc bank0B.inc bank0C.inc bank0D.inc bank0E.inc bank0F.inc ram.inc bank10.inc bank11.inc bank12.inc bank13.inc bank14.inc bank15.inc bank16.inc bank17.inc bank18.inc bank19.inc bank1A.inc bank1B.inc bank1C.inc bank1D.inc bank1E.inc bank1F.inc system_bank0F_only.inc system_footer.inc system_shared.inc
) else (
  if "%computername%" == "MINI" (
    rem do nothing	
  ) else (
    start "" "..\..\..\tools\TextPad 5\TextPad.exe" bank00.inc bank01.inc bank02.inc bank03.inc bank04.inc bank05.inc bank06.inc bank07.inc bank08.inc bank09.inc bank0A.inc bank0B.inc bank0C.inc bank0D.inc bank0E.inc ram.inc bank10.inc bank11.inc bank12.inc bank13.inc bank14.inc bank15.inc bank16.inc bank17.inc bank18.inc bank19.inc bank1A.inc bank1B.inc bank1C.inc bank1D.inc bank1E.inc system_bank0F_only.inc system_footer.inc system_shared.inc macros.inc notes.txt
  )
) 

pause 0

:again

del !err.log
del !output.log
del !dw3.nes
del !dw3.hdr
del !dw3.prg

echo start.

dasm system_shared.nas -f3 -osystem_shared.bin
dasm system_footer.nas -f3 -l!dw3.lst -osystem_footer.bin >> !err.log

echo assemble...

for %%f in (*.nas) do call :dodasm %%f > !output.log

dasm hdr.nas -f3 -o!dw3.hdr > NUL

goto :cleanup

:dodasm
dasm %1 -f3 -o%~n1.bin
goto :eof

:cleanup
echo build...
copy /b bank00.bin+bank01.bin+bank02.bin+bank03.bin+bank04.bin+bank05.bin+bank06.bin+bank07.bin tmp0.bin > NUL
copy /b bank08.bin+bank09.bin+bank0A.bin+bank0B.bin+bank0C.bin+bank0D.bin+bank0E.bin+bank0F.bin tmp1.bin > NUL
copy /b bank10.bin+bank11.bin+bank12.bin+bank13.bin+bank14.bin+bank15.bin+bank16.bin+bank17.bin tmp2.bin > NUL
copy /b bank18.bin+bank19.bin+bank1A.bin+bank1B.bin+bank1C.bin+bank1D.bin+bank1E.bin+bank1F.bin tmp3.bin > NUL
copy /b tmp0.bin+tmp1.bin+tmp2.bin+tmp3.bin !dw3.prg > NUL
nesimage j !dw3 > NUL

echo cleanup...
for %%f in (*.bin) do del %%f

echo done.
pause 0

goto :again

:eof
