@echo off
echo Building project using Borland Free Command Line Tools.  Please wait ...

set ppp=%PATH%
set PATH="c:\borland\bcc55\BIN";"%PATH%"
make.exe -B -f"SpaceX.mak" -s -N >> tmp

set PATH=%ppp%
set ppp=
