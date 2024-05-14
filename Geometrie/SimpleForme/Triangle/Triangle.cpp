#include "Triangle.hpp"
#include <iostream>
#include <cmath> 

Triangle::Triangle(float a, float b, float h)
{ 
    this->a = a;
    this->b = b; 
    this->h = h;
}

float Triangle::perimetre() 
{
    return a + b + std::sqrt(a*a + b*b - h*h);
}

float Triangle::aire() 
{
    return 0.5 * b * h;
}
void Triangle::display()
{
    std::cout << "Triangle de base " << a << " et hauteur " << h << " unite" << std::endl;
}
Triangle::~Triangle()
{

}
float Triangle::getA() 
{
     return a; 
}
float Triangle::getB() 
{
    return b; 
}
float Triangle::getH() 
{ 
    return h; 
}
