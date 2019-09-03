#include <iostream>

#include "circulo.1.h"

using namespace std;

int main()
{

    CIRCULO *circulo1 = new CIRCULO(15);
    CIRCULO *circulo2 = new CIRCULO(10);
    
    cout << "\nCirculo 1: ";
    circulo1->areaCirculo();
    circulo1->perimetroCirculo();
    circulo1->imprimir();
    cout << "\nCirculo 2: ";
    circulo2->areaCirculo();
    circulo2->perimetroCirculo();
    circulo2->imprimir();
    
    delete circulo1;
    
    cout << "\nEl número de circulos después de borrar circulo1 es: " << circulo1->getCantidad();
    
    delete circulo2;
    
    cout << "\nEl número de círculos después de borrar circulo2 es: " << CIRCULO::getCantidad() << endl;
}