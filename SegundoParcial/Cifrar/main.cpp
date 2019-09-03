#include <iostream>
#include <string>

#include "cifrado.h"
#include "cesar.h"
#include "vigenere.h"

using namespace std;

int main()
{
    int desplazamiento; 
    string frase;
    string fraseCif;
    int opc;
    
    
    
     Cesar frase1(frase,desplazamiento);
    Vigenere frase2(frase,fraseCif);
    
    cout <<"\t\t\t******MENÚ******" << endl;
      cout <<"\n\n\tIngrese el tipo de cifrado que desea hacer: " << endl;
    cout <<"\n\t1. Cifrado César.\n\t2. Cifrado Vigeneré." << endl;
  
    cin >> opc;
    
   
    
    switch (opc)
    {
        case 1:
        cout << "\n\tCIFRADO CESAR\n\t" << endl;
        
         cout << "\tIngrese la frase a cifrar: " << endl;
        cin >> frase; 
        
        cout << "\n\tIngrese el desplazamiento deseado: " << endl;
        cin >> desplazamiento;
        
        frase1.setFrase(frase);
        frase1.cifrar();
        frase1.descifrar();
        
        break;
        
        case 2:
        cout << "\n\tCIFRADO VIGENERÉ\n\t" << endl;
        
         cout << "\tIngrese la frase a cifrar: " << endl;
         cin >> frase; 
        
        cout << "\n\tIngrese la frase con la que desea cifrar: " << endl;
        cin >> fraseCif;
        
        frase2.cifrar();
        frase2.descifrar();
        
        break;
    }
            
    
}