@echo on
md temp\
for /r %%i in (*.c) do copy %%i temp\
copy temp\*.c 检索目录.txt
rd temp\ /s /q
@echo off
echo _________________________________________________________
echo .
echo ！！！！！！！！！！已成功生成检索目录！！！！！！！！！！
echo _________________________________________________________
pause