@ECHO OFF

if exist build rmdir /s /q build
mkdir build

g++ ./src/*.cpp -o build/game.exe -Ithird_party/SDL2/include -Ithird_party/SDL2_image/include -Ithird_party/SDL2/include/SDL2 -Ithird_party/SDL2_image/include/SDL2 -Lthird_party/SDL2/lib -Lthird_party/SDL2_image/lib -lSDL2 -lSDL2_image -Wall -Wextra

xcopy .\third_party\SDL2\bin\SDL2.dll .\build\ /E /I /Y
xcopy .\third_party\SDL2_image\bin\SDL2_image.dll .\build\ /E /I /Y
xcopy assets .\build\assets /E /I /Y

if errorlevel 1 (
ECHO Compilation failed!
PAUSE
exit /b 1
)

ECHO tvuj program se zkompiloval

PAUSE