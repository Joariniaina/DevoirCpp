#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP


class Rectangle 
{
    private:
        float longueur, largeur;
    public:
        Rectangle(float longueur, float largeur);
        float getLongueur();
        float getLargeur() ;
        float perimetre()  ;
        float aire()  ;
        void display() ;
        ~Rectangle();
};

#endif
