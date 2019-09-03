#include <iostream>
#include <string>

#include "convertidor.h"
#include "binario.h"

using namespace std;

Binario::Binario(){}

Binario::Binario(float num): Convertidor (num){}

Binario::~Binario(){}
    
    void Binario::convertir(){
        
        string binario = "";
        int temp = Convertidor::numero;
        
    	    while(temp > 0){
                if(temp % 2 == 0){
                    binario = "0" + binario;
                }
                else{
                    binario = "1" + binario;
                }
            temp = temp / 2;
            }
            cout <<"Tu número en binario es: " << binario << endl;
    }
