#define SDL_MAIN_HANDLED
#include<iostream>
#include<SDL2/SDL.h>
#include<memory>

#include "../include/engine.hpp"
#include "../include/objects.hpp"

int main(){
    auto engine = std::make_unique<Engine>();
    GameObject player(100.0f,100.0f);
    engine->AddObject(player);

    if(!(engine->InitEngine())){
        return 1;
    } 

    engine->StartEngineLoop();

    engine->QuitEngine();

    return 0;
}