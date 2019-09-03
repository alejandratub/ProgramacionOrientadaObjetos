#include <iostream>
#include "CalculadoraC.h"

using namespace std;

int main(){
    
    CalculadoraC objeto1;
    objeto1.setOperando1(2);
    objeto1.setOperando2(3);
    
    
    CalculadoraC objeto2 = objeto1;
    CalculadoraC objeto3 = objeto1;
    
    
    cout <<"Suma: ";
    objeto1.suma(objeto1.getOperando1(), objeto1.getOperando2());  
    objeto1.getResultado();
    
    cout <<"\nResta: ";
    objeto1.resta(objeto1.getOperando1(), objeto1.getOperando2());
    objeto1.getResultado();
    
    
    objeto2.setOperando1(23);
    objeto2.setOperando2(10);
    
    cout <<"\n\n\nSuma: ";
    objeto2.suma(objeto2.getOperando1(), objeto2.getOperando2());  
    objeto2.getResultado();
    
    cout <<"\nResta: ";
    objeto2.resta(objeto2.getOperando1(), objeto2.getOperando2());
    objeto2.getResultado();
    
    
    objeto3.setOperando1(5);
    objeto3.setOperando2(6);
    
    cout <<"\n\n\nSuma: ";
    objeto3.suma(objeto3.getOperando1(), objeto3.getOperando2());  
    objeto3.getResultado();
    
    cout <<"\nResta: ";
    objeto3.resta(objeto3.getOperando1(), objeto3.getOperando2());
    objeto3.getResultado();
    
    
    cout <<"\n";
    
    
}