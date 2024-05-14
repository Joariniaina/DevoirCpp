#include "Trapeze.hpp"
#include <iostream>

Trapeze::Trapeze(float a, float b, float h)
{
    this->a = a; 
    this->b = b; 
    this->h = h;
}

float Trapeze::perimetre()
{
    return a + b + a + b;
}

float Trapeze::aire()
{
    return 0.5 * (a + b) * h;
}
void Trapeze::display()
{
    std::cout << "Trapeze de longueur des bases (" << a << "," << b << ") et hauteur " << h << " unite" << std::endl;
}
float Trapeze::getA()  
{
    return a; 
}
float Trapeze::getB()  
{ 
    return b; 
}
float Trapeze::getH()  
{
    return h; 
}
Trapeze::~Trapeze()
{
    
}
