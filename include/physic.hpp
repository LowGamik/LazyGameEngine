#ifndef PHYSIC_HPP
#define PHYSIC_HPP

#define GRAVITY 9.81f

class Physic{
    public:
    static bool CheckCollision(float x1, float y1, unsigned int w1, unsigned int h1,
                               float x2, float y2, unsigned int w2, unsigned int h2){
        return (x1 < x2 + w2 &&
                x1 + w1 > x2 &&
                y1 < y2 + h2 &&
                y1 + h1 > y2);
    }
};

#endif