#ifndef SPHERE_HPP
#define SPHERE_HPP

class Sphere 
{
    private:
        float rayon;
    public:
        Sphere(float rayon);
        float getRayon();
        float volume();
        float aire();
        ~Sphere();
        void display();
};

#endif
