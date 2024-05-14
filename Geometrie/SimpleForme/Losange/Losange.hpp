#ifndef LOSANGE_HPP
#define LOSANGE_HPP

class Losange 
{
    private:
        float a, b, C;
    public:
        Losange(float a, float b, float C);
        float getA();
        float getB();
        float getC();
        float perimetre();
        float aire() ;
        void display() ;
        ~Losange();
};

#endif
