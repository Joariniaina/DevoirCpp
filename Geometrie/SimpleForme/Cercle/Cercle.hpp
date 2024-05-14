#ifndef CERCLE_HPP
#define CERCLE_HPP

class Cercle
{
    private :
        float rayon;
    public :
        Cercle();
        Cercle(float rayon);
        ~Cercle();
        float getRayon();
        void setRayon(float rayon);
        float perimetre() ;
        float aire() ;
        void display() ;
};

#endif