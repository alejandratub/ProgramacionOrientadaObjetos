#include <iostream>

 template<class tipo>
tipo comparar (tipo a, tipo b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
using namespace std;
int main()
{
    int opc;
    int a,b;
    float c,d;
    double e,f;
    cout<<"Los numeros a comparar son: \n 01.int\n 02.float \n 03.double";
    cout <<"\n respuesta: ";
    cin >> opc;
    switch (opc)
    {
        case 1:
        cout << "Ingresa un numero: ";
        cin >> (a);
        
        cout << "\n Ingresa un numero: ";
        cin >> (b);
        cout <<  "\n El numero mayor es: "<<comparar <int>(a,b);
        break;
        
        case 2:
        cout << "Ingresa un numero: ";
        cin >> (c);
        
        cout << "\n Ingresa un numero: ";
        cin >> (d);
        cout <<  "\n El numero mayor es: "<<comparar <float>(c,d);
        break;
        
         case 3:
        cout << "Ingresa un numero: ";
        cin >> (e);
        
        cout << "\n Ingresa un numero: ";
        cin >> (f);
        cout <<  "\n El numero mayor es:"<<comparar <double>(e,f);
        break;
    }
}