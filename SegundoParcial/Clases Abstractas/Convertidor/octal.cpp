#include <iostream>
#include <string>

#include "octal.h"
#include "convertidor.h"

using namespace std;

Octal::Octal(){}

Octal::Octal(float num) : Convertidor(num){}

Octal::~Octal(){}

void Octal::convertir() 
{
  float temp = Convertidor::numero;
  float aux = 0;
        int size = 0;
        int i = 0;
        int j = 0;
        int cociente= 0; 
        int octal = 0;
        
        
	    for ( j = temp ; j > 0; j = j / 8)
	    {
		    size++;
	    }
	      int * arr= new int [size];

        while(temp > 0)
        {
       	    i++;
            cociente = temp/ 8;
            aux = ((temp / 8) - cociente) * 8;
            octal = aux;
            arr[i] = octal;
            temp = temp / 8;
        }
         cout <<"Tu número octal es: ";
  
        for (int j = size; j >= 1; j--){
  	        cout << arr[j];
        }
  
        cout << endl;
}

/*void Octal::imprimir() const
{
   
        cout <<"Tu número octal es: ";
  
        for (int k = size; k>=1; k--){
  	        cout << arr[k];
        }
  
        cout << endl;
}*/

/*Octal::~Octal()
{
   // delete []arr;
}*/