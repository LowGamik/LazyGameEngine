#ifndef OBJECTS_HPP
#define OBJECTS_HPP

class GameObject{
    private:
    float posX, posY;

    public:
    GameObject(float x = 0, float y = 0): posX(x), posY(y) {}

    virtual void Update(float dt);

    virtual ~GameObject(){}
};

#endif