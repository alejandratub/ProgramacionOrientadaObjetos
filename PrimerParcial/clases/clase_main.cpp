#include <iostream>
#include "POO_H

using namespace std;

int main()
{
    A instancia1; // variable del tipo de mi clase
    instancia1.printValues();
}

    int val;
    cin >> val;
    
    A instancia = A(20, val);
    
    instancia.printvalues();
    
    return 0;
    
    A instancia3 = instancia; //copia lo que tiene instancia a instancia3
    //es para cuando quieres crear muchos objetos del mismo tipo, mismas características y métodos
}