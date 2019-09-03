#include "convertidor.h"
#include "binario.h"
#include "hexadecimal.h"
#include "octal.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*double Binario1;
    double Octal;
    double Hexadecimal1;*/
    
    float numero = 0;
        int opc;
    //Convertidor numero1;
    /*Binario binario1;
    Octal octal1;
    Hexadecimal hexadecimal1;*/
    

    
    cout << "**************************" << endl;
    cout << "*****CONVERTIDOR DECIMAL*****" << endl;
    cout << "1. Binario" << endl;
    cout << "2. Octal" << endl;
    cout << "3. Hexadecimal" << endl;
    
    cin >> opc;
    
    cout << "Introduce el número: " << endl;
    cin >> numero;
    
    Binario cBinario(numero);
    Octal cOctal(numero);
    Hexadecimal cHexadecimal(numero);
    
    switch (opc)
    {
        case 1:
        
      // numero1.setNumero(Binario1);
      //Binario binario1(numero);
     cBinario.convertir();
    
        break;
        
        case 2:
        
        //numero1.setNumero(Octal1);
        //Octal octal1(numero);
        cOctal.convertir();
        
        break;
        
        case 3:
        
       // numero1.setNumero(Hexadecimal1);
      // Hexadecimal hexadecimal1(numero);
       cHexadecimal.convertir();
        
        break;
    }
}