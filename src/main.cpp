#define SDL_MAIN_HANDLED
#include<iostream>
#include<SDL2/SDL.h>

int main(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        return 1;
    }

    SDL_Window *win = SDL_CreateWindow("fak ju",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,SDL_WINDOW_SHOWN);

    if(win == nullptr){
        return 1;
    }

    SDL_Delay(5000);

    SDL_DestroyWindow(win);
    win = nullptr;


    return 0;
}