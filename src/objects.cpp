#include "../include/objects.hpp"
#include<SDL2/SDL.h>

void GameObject::Update(float dt){
    posX += 100.0f*dt;

    if(posX >= 800){
        posX = -50;
    }
}

void GameObject::Render(SDL_Renderer *ren){
    SDL_SetRenderDrawColor(ren,140,0,0,255);

    SDL_Rect rect = {
        static_cast<int>(posX),  // Convert float to int
        static_cast<int>(posY),  // Convert float to int
        50,  // width
        50   // height
    };

    SDL_RenderFillRect(ren, &rect);
}