#define SDL_MAIN_HANDLED
#include<iostream>
#include<SDL2/SDL.h>

#include "../include/engine.hpp"

int main(){
    Engine *engine = new Engine();

    if(!(engine->InitEngine())){
        return 1;
    } 

    engine->StartEngineLoop();

    engine->QuitEngine();

    return 0;
}