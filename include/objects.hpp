#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>

class GameObject{
    private:
    float posX, posY;

    public:
    GameObject(float x = 0, float y = 0): posX(x), posY(y) {}

    
    virtual void Update(float dt);
    virtual void Render(SDL_Renderer *ren);

    virtual ~GameObject(){}
};

#endif