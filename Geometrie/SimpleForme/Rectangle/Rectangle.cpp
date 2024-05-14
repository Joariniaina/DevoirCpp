#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(float longueur, float largeur)
{
    this->longueur = longueur;
    this->largeur = largeur;
}

float Rectangle::perimetre()
{
    return 2 * (longueur + largeur);
}

float Rectangle::aire()
{
    return longueur * largeur;
}
void Rectangle::display()
{
    std::cout << "Rectangle de longueur " << longueur << " et largeur " << largeur << " unite" << std::endl;
}
float Rectangle::getLongueur()  
{
    return longueur; 
}
float Rectangle::getLargeur()  
{ 
    return largeur; 
}
Rectangle::~Rectangle()
{
    
}