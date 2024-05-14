#ifndef OVALE_HPP
#define OVALE_HPP

class Ovale 
{
private:
    float a, b;
public:
    Ovale(float a, float b);
    float getA();
    float getB() ;
    ~Ovale();
    float perimetre();
    float aire();
    void display();
};

#endif
