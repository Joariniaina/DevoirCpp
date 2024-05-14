
#include "Cylindre.hpp"
#include <iostream>

Cylindre::Cylindre(float rayon, float hauteur)
{
    this->rayon = rayon;
    this->hauteur = hauteur;
}

float Cylindre::volume() 
{
    return 3.1415 * rayon * rayon * hauteur;
}

float Cylindre::aire() 
{
    return 2 * 3.1415 * rayon * (rayon + hauteur);
}

void Cylindre::display()
{
    std::cout << "Cylindre de rayon " << rayon << " et hauteur " << hauteur << " unite" << std::endl;
}
float Cylindre::getRayon()
{
    return rayon;
}
float Cylindre::getHauteur()
{ 
    return hauteur; 
}
Cylindre::~Cylindre()
{
    
}
