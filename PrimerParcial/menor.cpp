#include <iostream>

using namespace std;

template < class tipo> //creo mi template

tipo comparar(tipo a, tipo b)
{
    if(a<=b) //si a es menor que b regresa el valor de a
    {
        return a;
        
    }
    else //sino regresar el valor b 
    {
        return b;
    }
}

int main()
{
    int num = 0;
    int a = 0;
    int b = 0;
    int menor = 0;
    int i= 0;
    int temporal;
    cout <<"\n Ingrese los numeros a comparar: \n"<<endl;
    //ingresar el primer numero 
    
    while(num>=0) //mientras el numero ingresado sea mayor que 0 
    {
         cin >> num; //ingresar otro valor
          i++;
          if(i==1)
          {
              temporal=num;
          }
          if(num>=0)
          {
               menor = comparar(num,temporal); //comparar los numeros dentro del template 
          }
         
         temporal = menor;
        
    }
    
    cout<< "\n El numero menor es: "<< menor <<endl; //imprimir el valor del numero menor 
    
} 
