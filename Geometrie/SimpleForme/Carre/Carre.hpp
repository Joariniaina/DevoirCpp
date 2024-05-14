#ifndef CARRE_HPP
#define CARRE_HPP

class Carre
{
    private:
        float cote;
    public:
        Carre();
        Carre(float cote);
        void setCote(float cote);
        float perimetre();
        ~Carre();
        float getCote();
        float aire();
        void display();
};

#endif 