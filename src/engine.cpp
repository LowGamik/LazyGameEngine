#include "../include/engine.hpp"

bool Engine::InitEngine(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        return false;
    }
    isRunning = true;
    this->window = SDL_CreateWindow("game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800,600, SDL_WINDOW_SHOWN);

    if(this->window == nullptr){
        return false;
    }

    this->renderer = SDL_CreateRenderer(this->window,-1,SDL_RENDERER_ACCELERATED);

    if(this->renderer == nullptr){
        return false;
    }

    return true;
}

void Engine::StartEngineLoop(){
    while(this->isRunning){
        while (SDL_PollEvent(&this->events)){
            if(events.type == SDL_QUIT) isRunning = false;
        }
    }
}

void Engine::QuitEngine(){
    SDL_DestroyWindow(this->window);
    SDL_DestroyRenderer(this->renderer);
    this->window = nullptr;
    this->renderer = nullptr;
    SDL_Quit();
}