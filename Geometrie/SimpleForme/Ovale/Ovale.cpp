
#include "Ovale.hpp"
#include <iostream>

Ovale::Ovale(float a, float b)
{ 
    this->a = a; 
    this->b = b;
}

float Ovale::perimetre()
{
    return 3.14 * (a + b);
}

float Ovale::aire()
{
    return 3.14 * a * b;
}
void Ovale::display()
{
    std::cout << "Ovale de demi-longueur (" << a << "," << b << ") unite" << std::endl;
}
float Ovale::getA()  
{
    return a; 
}
float Ovale::getB()  
{
    return b; 
}
Ovale::~Ovale()
{
    
}
