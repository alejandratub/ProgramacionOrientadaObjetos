#include <iostream>
#include <string>

#include "hexadecimal.h"
#include "convertidor.h"

using namespace std;

Hexadecimal::Hexadecimal(){}

Hexadecimal::Hexadecimal(float num) : Convertidor(num){}

Hexadecimal::~Hexadecimal(){}

void Hexadecimal::convertir() 
{
        float temp = Convertidor::numero;
        float aux = 0;
        
        int size = 0;
        int i = 0; 
        int cociente = 0;
        int hexadecimal = 0;
        int j = numero;
        
  
	    for (j = temp; j > 0; j = j / 16)
	    {
		     size++;
	    }

        int * arr= new int [size];
   
        while(temp > 0){
       	    i++;
            cociente = temp / 16;
            aux = ((temp / 16) - cociente) * 16;
            hexadecimal = aux;
            arr[i] = hexadecimal;
            temp = temp / 16;
        }
        
        cout <<"Tu número hexadecimal es: ";
  
        for (j=size; j >= 1; j--){
  			if (arr[j]==10){ cout <<"A";}
        	if (arr[j]==11){ cout <<"B";}
        	if (arr[j]==12){ cout <<"C";}
        	if (arr[j]==13){ cout <<"D";}
        	if (arr[j]==14){ cout <<"E";}
        	if (arr[j]==15){ cout <<"F";}
        	
        	else
        	{
        	    cout << arr[j];
        	    
        	}
        }
    cout << endl;
    
}

