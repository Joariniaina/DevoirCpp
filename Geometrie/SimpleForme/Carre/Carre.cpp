#include <iostream>
#include "Carre.hpp"



Carre::Carre()
{

}
Carre::Carre(float cote)
{
    cote;   
}
Carre::~Carre()
{
    
}

float Carre::getCote()
{
    return cote;
}
void Carre::setCote(float cote)
{
     this->cote = cote;
}

float Carre::perimetre()
{
    return cote*4;
}

float Carre::aire()
{
    return cote*cote;
}

void Carre::display() 
{
    std::cout<<" carre de cote "<<cote<<" unite"<<std::endl;
}