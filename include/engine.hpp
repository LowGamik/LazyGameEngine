#ifndef ENGINE_HPP
#define ENGINE_HPP

#include<SDL2/SDL.h>

class Engine{
    private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event events;
    bool isRunning;

    public:
    bool InitEngine();
    void StartEngineLoop();
    void QuitEngine();
};

#endif