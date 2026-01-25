# LazyGameEngine

A simple C++ game engine using SDL2 and SDL2_image.

## Features

- Basic game loop
- Object management
- Texture loading and rendering
- Written in modern C++

## Requirements

- [SDL2](https://www.libsdl.org/)
- [SDL2_image](https://www.libsdl.org/projects/SDL_image/)
- C++17 compatible compiler

## Build Instructions (Windows)

1. Clone the repository and place SDL2 and SDL2_image in the `third_party` folder.
2. Place your assets (images) in the `assets` folder.
3. Run `compile.bat` to build the project.

```
@ECHO OFF
g++ ./src/*.cpp -o build/game.exe -Ithird_party/SDL2/include -Ithird_party/SDL2_image/include ...
```

## Usage

After building, run `build/game.exe`. The engine will open a window and display the objects you add in `main.cpp`.

## Example

```cpp
auto engine = std::make_unique<Engine>();
engine->AddObject(std::make_unique<GameObject>(350.0f, 250.0f, "index.jpg"));
engine->InitEngine();
engine->StartEngineLoop();
engine->QuitEngine();
```

## License

MIT License. See [LICENSE](LICENSE) for details.