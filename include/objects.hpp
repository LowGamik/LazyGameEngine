#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<string>

class GameObject{
    private:
    float posX, posY;
    SDL_Texture *texture;
    std::string imgName;

    public:
    GameObject(float x = 0, float y = 0, std::string inputImg = "index.jpg"): posX(x), posY(y), imgName(inputImg) {}

    
    virtual void Update(float dt);
    virtual void Render(SDL_Renderer *ren);
    virtual void LoadTexture(SDL_Renderer *ren);

    virtual ~GameObject(){}
};

#endif