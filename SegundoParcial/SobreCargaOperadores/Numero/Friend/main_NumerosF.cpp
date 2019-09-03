#include <iostream>
#include "NumerosF.h"

using namespace std;

int main()
{
    NUMERO numero1;
    NUMERO numero2;
    NUMERO numero3;
    NUMERO resultado;
    
    cout << "Ingresa el numero 1: ";
    cin >> numero1;
    
    cout << "Ingresa el numero 2: ";
    cin >> numero2;
    
    cout << "Ingresa el numero 3: ";
    cin >> numero3;
    
 
    resultado = numero1 - (numero2 + numero3);
    cout << "El resultado de " << numero1 << "-(" << numero2 << " + " << numero3 <<") = " <<resultado << endl;
    
    return 0;
}