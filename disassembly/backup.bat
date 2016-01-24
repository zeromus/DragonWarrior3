mkdir .\backup\current

copy /b make.bat .\backup\current\make.bat
copy /b backup.bat .\backup\current\backup.bat
copy /b *.inc .\backup\current\*.inc
copy /b *.exe .\backup\current\*.exe
copy /b *.nas .\backup\current\*.nas
copy /b !*.chr .\backup\current\!*.chr
copy /b copyrights.txt .\backup\current\copyrights.txt
copy /b notes.txt .\backup\current\notes.txt