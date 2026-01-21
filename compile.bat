@ECHO OFF

if exist build rmdir /s /q build
mkdir build

g++ ./src/*.cpp -o build/game

ECHO tvuj program se zkompiloval

PAUSE