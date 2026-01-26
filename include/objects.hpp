#ifndef OBJECTS_HPP
#define OBJECTS_HPP

#include<SDL2/SDL.h>
#include<SDL2/SDL_image.h>
#include<string>

class GameObject{
    private:
    float posX, posY;
    int width, height;
    SDL_Texture *texture;
    std::string imgName;

    public:
    GameObject(float x = 0, float y = 0, int w = 0, int h = 0, std::string inputImg = "index.jpg"): posX(x), posY(y), width(w), height(h), imgName(inputImg) {}
    
    virtual void Update(float dt);
    virtual void Render(SDL_Renderer *ren);
    virtual void LoadTexture(SDL_Renderer *ren);

    virtual ~GameObject(){

        if(texture != nullptr){
            SDL_DestroyTexture(texture);
        }
    }

    void SetPosition(float x, float y){
        this->posX = x;
        this->posY = y;
    }
    void setSize(int w, int h){
        this->width = w;
        this->height = h;
    }
    float GetPositionX() const { return this->posX; }
    float GetPositionY() const { return this->posY; }
    int GetWidth() const { return this->width; }
    int GetHeight() const { return this->height; }
    SDL_Texture* GetTexture() const { return this->texture; }
};

#endif