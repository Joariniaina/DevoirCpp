#ifndef CYLINDRE_HPP
#define CYLINDRE_HPP

class Cylindre 
{
    private:
        float rayon;
        float hauteur;
    public:
        Cylindre(float rayon, float hauteur);
        float getRayon();
        float aire();
        void display();
        float getHauteur(); 
        ~Cylindre();
        float volume();
};

#endif
