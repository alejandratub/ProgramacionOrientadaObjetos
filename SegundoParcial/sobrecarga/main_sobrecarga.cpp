#include <iostream>
#include <string>
#include "sobrecarga.h"

using std::cout;
using std::endl;

int main()
{
    Figura circulo;
    Figura rectangulo;
    Figura triangulo;
    
    cout<<"Area del circulo con radio 10 es: " <<circulo.area(10) <<endl;
    cout<<"Area del rectangulo de 2 x 5 es: " <<rectangulo.area(2,5)<<endl;
    cout<<"Area del triangulo de 2 x 3 x 4 es: " <<triangulo.area(2,3,4) <<endl;
}