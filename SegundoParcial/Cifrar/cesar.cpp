#include <iostream>
#include <string>

#include "cifrado.h"
#include "cesar.h"

using namespace std;

Cesar::Cesar(){}

Cesar::Cesar(string f, int d): Cifrado(f)
{
    desplazamiento = d;
}


void Cesar::cifrar(){

    string aux = Cifrado::frase;

    for (int i = 0; i < aux.length(); i++)
    { 
        
            if (aux[i] >= 'a' && aux[i] <= 'z')
            {
            
                    if (aux[i] + desplazamiento > 'z')
                    { 
                    aux[i] = 'a' - 'z' + aux[i] + desplazamiento - 1; 
                    } 
                
                    else if (aux[i] + desplazamiento < 'a')
                    { 
                    aux[i] = 'z' - 'a' + aux[i] + desplazamiento + 1; 
                    } 
                
                    else
                    { 
                    aux[i] += desplazamiento; 
                    }
                
            } 
        
        
            else if (aux[i] >= 'A' && aux[i] <= 'Z')
            { 
                    if (aux[i] + desplazamiento > 'Z')
                    { 
                    aux[i] = 'A' - 'Z' + aux[i] + desplazamiento - 1; 
                    } 
                
                    else if (aux[i] + desplazamiento < 'A') 
                    { 
                    aux[i] = 'Z' - 'A' + aux[i] + desplazamiento + 1; 
                    } 
                
                    else
                    { 
                    aux[i] += desplazamiento; 
                    } 
            } 
    }
    
    cout <<"\n\tLa frase cifrada en César es: " <<  aux << endl;
    Cifrado::frase = aux;
}


void Cesar::descifrar(){
    string aux_inv = Cifrado::frase;
    int desplazamiento_inv = -desplazamiento;
    
    for (int i = 0; i < aux_inv.length(); i++)
    {
            if (aux_inv[i] >= 'a' && aux_inv[i] <= 'z')
            {
            
                    if (aux_inv[i] + desplazamiento_inv > 'z')
                    { 
                    aux_inv[i] = 'a' - 'z' + aux_inv[i] + desplazamiento_inv - 1; 
                    } 
                
                    else if (aux_inv[i] + desplazamiento_inv < 'a')
                    { 
                    aux_inv[i] = 'z' - 'a' + aux_inv[i] + desplazamiento_inv + 1; 
                    } 
                
                    else
                    { 
                    aux_inv[i] += desplazamiento_inv; 
                    }
                
            } 
        
        
            else if (aux_inv[i] >= 'A' && aux_inv[i] <= 'Z') 
            { 
                    if (aux_inv[i] + desplazamiento_inv > 'Z') 
                    { 
                    aux_inv[i] = 'A' - 'Z' + aux_inv[i] + desplazamiento_inv - 1; 
                    } 
                
                    else if (aux_inv[i] + desplazamiento_inv < 'A')
                    { 
                    aux_inv[i] = 'Z' - 'A' + aux_inv[i] + desplazamiento_inv + 1; 
                    } 
                
                    else
                    { 
                    aux_inv[i] += desplazamiento_inv; 
                    } 
            } 
    }
    
    cout <<"\tLa frase descifrada en César es: " <<  aux_inv << endl;
    
}





void Cesar::getFrase(){}

void Cesar::setFrase(string f)
{
    frase = f;
}


