# LazyGameEngine

A minimal C++ game engine using SDL2. This project demonstrates a simple architecture for creating and rendering moving objects in a window.

## Features

- Basic game loop with frame limiting (60 FPS)
- Object management (add, update, render)
- Simple player object that moves horizontally and wraps around the screen
- SDL2 window and renderer setup/cleanup

## Getting Started

### Prerequisites

- C++17 or newer
- [SDL2](https://www.libsdl.org/) development libraries

### Building

```sh
g++ -std=c++17 -Iinclude -L<SDL2_LIB_PATH> src/main.cpp src/engine.cpp src/objects.cpp -lSDL2 -o LazyGameEngine
```
Replace `<SDL2_LIB_PATH>` with your SDL2 library path.

Or if you are using windows, there is a prepered file for you

### Running

A window will open with a red square moving horizontally.

## Project Structure

```
LazyGameEngine/
├── include/
│   ├── engine.hpp
│   └── objects.hpp
├── src/
│   ├── main.cpp
│   ├── engine.cpp
│   └── objects.cpp
└── README.md
```

## Code Overview

- **Engine**: Handles window, renderer, game loop, and object management.
- **GameObject**: Represents entities with position, update, and render logic.

## License

MIT (add your own license if needed)

## Credits

- [SDL2](https://www.libsdl.org/)
- Your code!
