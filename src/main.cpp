#define SDL_MAIN_HANDLED
#include<iostream>
#include<SDL2/SDL.h>
#include<memory>

#include "../include/engine.hpp"
#include "../include/objects.hpp"

int main(){
    auto engine = std::make_unique<Engine>();
    engine->AddObject(std::make_unique<GameObject>());
    engine->AddObject(std::make_unique<GameObject>(0,50));
    engine->AddObject(std::make_unique<GameObject>(0,100));

    if(!(engine->InitEngine())){
        return 1;
    } 

    engine->StartEngineLoop();

    engine->QuitEngine();

    return 0;
}