#define SDL_MAIN_HANDLED
#include<iostream>
#include<SDL2/SDL.h>
#include<memory>

#include "../include/engine.hpp"

int main(){
    auto engine = std::make_unique<Engine>();

    if(!(engine->InitEngine())){
        return 1;
    } 

    engine->StartEngineLoop();

    engine->QuitEngine();

    return 0;
}