@ECHO OFF

if exist build rmdir /s /q build
mkdir build

g++ ./src/*.cpp -o build/game -Ithird_party/SDL2/include -Lthird_party/SDL2/lib -lSDL2 -Wall -Wextra

xcopy .\third_party\SDL2\bin\SDL2.dll .\build\ /E /I /Y

ECHO tvuj program se zkompiloval

PAUSE