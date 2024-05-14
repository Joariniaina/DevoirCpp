#include "Sphere.hpp"
#include <iostream>

Sphere::Sphere(float rayon)
{
    this->rayon = rayon; 
}

float Sphere::volume() 
{
    return (4.0 / 3.0) * 3.1415 * rayon * rayon * rayon;
}

float Sphere::aire()
{
    return 4 * 3.1415 * rayon * rayon;
}
void Sphere::display()
{
    std::cout << "Sphere de rayon " << rayon << " unite" << std::endl;
}
float Sphere::getRayon()
{
    return rayon;
}
Sphere::~Sphere()
{

}
