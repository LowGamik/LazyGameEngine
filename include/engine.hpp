#ifndef ENGINE_HPP
#define ENGINE_HPP

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

#include<vector>
#include <memory>
#include"objects.hpp"

class Engine{
    private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Event events;
    bool isRunning;
    std::vector<std::unique_ptr<GameObject>> objects;
    float deltaTime, lastTime, currentTime;

    public:
    Engine() : window(nullptr), renderer(nullptr), isRunning(false), deltaTime(0.0), lastTime(0.0), currentTime(0.0) {}

    void AddObject(std::unique_ptr<GameObject> obj) {this->objects.push_back(std::move(obj));}
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