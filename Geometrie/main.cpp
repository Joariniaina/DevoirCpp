#include "SimpleForme/Losange/Losange.hpp"
#include "SimpleForme/Cercle/Cercle.hpp"
#include "SimpleForme/Carre/Carre.hpp"
#include "SimpleForme/Ovale/Ovale.hpp"
#include "SimpleForme/Rectangle/Rectangle.hpp"
#include "SimpleForme/Trapeze/Trapeze.hpp"
#include "SimpleForme/Triangle/Triangle.hpp"
#include "forme3D/Cylindre/Cylindre.hpp"
#include "forme3D/Sphere/Sphere.hpp"

int main() 
{
    Carre carre(10.0);
    carre.display();

    Ovale ovale(4.0, 7.0);
    ovale.display();

    Rectangle rectangle(10.0, 15.0);
    rectangle.display();
    
    Losange losange(7.0, 8.0, 70.0);
    losange.display();

    Cercle cercle(8.0);
    cercle.display();


    Trapeze trapeze(20.0, 31.0, 43.0);
    trapeze.display();

    Triangle triangle(33.0, 54.0, 25.0);
    triangle.display();

    Cylindre cylindre(22.0, 43.0);
    cylindre.display();

    Sphere sphere(34.0);
    sphere.display();

    return 0;
}
