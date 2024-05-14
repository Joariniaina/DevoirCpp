#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle 
{
    private:
        float a, b, h;
    public:
        Triangle(float a, float b, float h);
        float getA();  
        float getB() ; 
        float getH() ;
        float perimetre() ;
        float aire() ;
        void display() ;
        ~Triangle();
};

#endif
