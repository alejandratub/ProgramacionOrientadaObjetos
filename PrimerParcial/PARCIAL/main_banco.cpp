#include <iostream>
#include "banco.h"

using namespace std;

int main()
{
    banco us1;
    int numC;
    int opcion;
    
    double retirar;
    double depositar;
    
    us1.setSaldo(1000);
    banco us2 = us1;
    
    cout <<"¿Qué operación desea realizar? \n 1. Depositar \n 2. Retirar"<<endl;
    cin >>opcion;
    cout << "Ingrese el numero de cueta: "<< endl;
        cin >>numC;
        us1.setNoCuenta(numC);
    
    switch (opcion)
    {
        case 1:
        cout<< "\n***DEPOSITAR***\n";
        
        cout<<"\n Ingrese la cantidad que desea depositar\n"<<endl;
        cin >>depositar;
        us1.setDepositar(depositar);
        us1.getNuevoSaldo();
        
        break;
        
        case 2:
        cout <<"\n ***RETIRAR***\n";
        
        cout<<"\n Ingrese la cantidad que desea retirar\n"<<endl;
        cin>>retirar;
        us1.setRetirar(retirar);
        us1.getNuevoSaldo();
        
        break;
        
        default:
        cout <<"Error";
        break;
        
    }
}