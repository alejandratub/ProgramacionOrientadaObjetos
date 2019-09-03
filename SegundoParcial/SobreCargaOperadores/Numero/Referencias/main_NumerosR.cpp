#include <iostream>
#include "NumerosR.h"

using namespace std;

int main()
{
    double a;
    double b;
    double c;
    
    Numeros resultado;
    
    cout << "Ingresa el numero 1: ";
    cin >> a;
    Numeros numero1(a);
    
    cout << "Ingresa el numero 2: ";
    cin >> b;
    
    Numeros numero2(b);
    
    cout << "Ingresa el numero 3: ";
    cin >> c;
    Numeros numero3(c);
    
 
    resultado = (numero1 + numero2) / numero3;
    cout << "El resultado es: " << resultado.getNum() << endl;
    
    return 0;
}