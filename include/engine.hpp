#ifndef ENGINE_HPP
#define ENGINE_HPP

#include<SDL2/SDL.h>

#include<vector>
#include"objects.hpp"

class Engine{
    private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event events;
    bool isRunning;
    std::vector<GameObject> objects;
    float deltaTime, lastTime, currentTime;

    public:
    Engine() : window(nullptr), renderer(nullptr), isRunning(false), deltaTime(0.0), lastTime(0.0), currentTime(0.0) {}

    bool InitEngine();
    void StartEngineLoop();
    void QuitEngine();
    ~Engine(){
        if (window != nullptr || renderer != nullptr) {
            QuitEngine();
        }
    };
};

#endif