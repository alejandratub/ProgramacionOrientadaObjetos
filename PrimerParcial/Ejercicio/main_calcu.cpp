#include <iostream>
#include "calcu.h"

using namespace std;

int main()
{
    int op1;
    int op2;
    Calculadora obj1;
    
    obj1.setOperando1(15);
    obj1.setOperando2(6);
   op1 = obj1.getOperando1();
   op2 = obj1.getOperando2();
     
    
    cout <<"Suma: ";
    obj1.suma(op1, op2);
    obj1.getResultado();
    
    cout <<"\nResta: ";
    obj1.resta(op1, op2);
    obj1.getResultado();
    
    
}