#include "../include/objects.hpp"
#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<iostream>
#include<string>

void GameObject::Update(float dt){
    this->posX += 50.0f * dt;

    if(this->posX > 800.0f){
        this->posX = -100.0f;
    }
}

void GameObject::Render(SDL_Renderer *ren){
    SDL_Rect dstRect = {static_cast<int>(posX), static_cast<int>(posY), 100, 100};
    SDL_RenderCopy(ren, this->texture, nullptr, &dstRect);
}

void GameObject::LoadTexture(SDL_Renderer *ren){
    std::string _fullpath = "assets/" + this->imgName;
    this->texture = IMG_LoadTexture(ren, _fullpath.c_str());

    if(this->texture == nullptr){
        std::cerr << "Failed to load texture: " << IMG_GetError() << std::endl;
    }
}