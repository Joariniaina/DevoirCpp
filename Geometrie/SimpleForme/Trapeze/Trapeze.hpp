#ifndef TRAPEZE_HPP
#define TRAPEZE_HPP

class Trapeze 
{
    private:
        float a, b, h;
    public:
        Trapeze(float a, float b, float h);
        float getA() ;
        float getB() ; 
        float getH() ;
        float perimetre() ;
        float aire() ;
        void display() ;
        ~Trapeze();
};

#endif
