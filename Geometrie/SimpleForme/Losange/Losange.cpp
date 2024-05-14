
#include "Losange.hpp"
#include <cmath>
#include <iostream>

Losange::Losange(float a, float b, float C)
{
    this->a = a;
    this->b = b;
    this->C =C; 
}

float Losange::perimetre()
{
    return a + b + a + b;
}

float Losange::aire() 
{
    return 0.5 * a * b * std::sin(C);
}
void Losange::display()
{
    std::cout<<" Losange de cote ("<<a<<","<<b<<","<<C<<") unite"<<"\n";
}
Losange::~Losange()
{

}
float Losange::getA() 
{
     return a; 
}

float Losange::getB() 
{ 
    return b; 
}
float Losange::getC()
{ 
    return C; 
}