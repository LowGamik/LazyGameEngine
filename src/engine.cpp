#include "../include/engine.hpp"
#include<iostream>

bool Engine::InitEngine(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl; 
        return false;
    }
    isRunning = true;
    this->window = SDL_CreateWindow("game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800,600, SDL_WINDOW_SHOWN);

    if(this->window == nullptr){
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    this->renderer = SDL_CreateRenderer(this->window,-1,SDL_RENDERER_ACCELERATED);

    if(this->renderer == nullptr){
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return false;
    }

    return true;
}

void Engine::StartEngineLoop(){
    this->lastTime = SDL_GetTicks();
    float frameDuration;

    for(auto& object : this->objects){
        object->LoadTexture(this->renderer);
    }

    while(this->isRunning){
        this->currentTime = SDL_GetTicks();
        this->deltaTime = (currentTime-lastTime)/1000.0f;
        this->lastTime = currentTime;

        while (SDL_PollEvent(&this->events)){
            if(events.type == SDL_QUIT) isRunning = false;
        }

        for(auto& object : this->objects){
            object->Update(this->deltaTime);
        }

        SDL_SetRenderDrawColor(this->renderer,255,255,255,255);
        SDL_RenderClear(this->renderer);

        for(auto& object : this->objects){
            object->Render(this->renderer);
        }

        SDL_RenderPresent(this->renderer);

        

        frameDuration = (SDL_GetTicks()- currentTime)/1000.0f;
        if(frameDuration < 1.0f/60.0f){
            SDL_Delay((Uint32)((1.0f/60.0f-frameDuration)*1000.0f));
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