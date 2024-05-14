#include <iostream>
#include "Cercle.hpp"


Cercle::Cercle(){
        rayon=0;
}
Cercle::Cercle(float rayon)
{
        this->rayon=rayon;
}
Cercle::~Cercle()
{

}

void Cercle::setRayon(float rayon)
{
        this->rayon=rayon;
}
float Cercle::getRayon()
{
        return rayon;
}

float Cercle::perimetre()
{
    return (2* rayon * 3.14);
}
float Cercle::aire()
{
    return (rayon * rayon * 3.14);
}
void Cercle::display()
{
    std::cout<<" cercle de rayon "<<rayon<<" unite"<<"\n";
}

