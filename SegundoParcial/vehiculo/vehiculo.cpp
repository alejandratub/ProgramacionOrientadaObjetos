#include <iostream>
#include <string>

using namespace std;
#include "vehiculo.h"


    Vehiculo::Vehiculo(){}
    Vehiculo::Vehiculo(string nMa,string nMo,int a,string c,int nPa,int nPu,float p, float k,string t,string e)
    {
        nomManufactura = nMa;
        nomModelo = nMo;
        anio = a;
        color = c;
        numPasajeros = nPa;
        numPuertas = nPu;
        precio = p;
        kilometraje = k;
        tipo = t;
        estado = e;
    }
    Vehiculo::~Vehiculo(){}
    void Vehiculo::getAnio(){}
    
    void Vehiculo:: setAnio(double a)
    {
        anio = a;
    }
    
    void Vehiculo::imprimir()
    {
        cout<<"\n\tEmpresa creadora:" << nomManufactura << endl;
        cout<<"\n\tModelo:" << nomModelo << endl;
        cout<<"\n\tAño del modelo:" << anio << endl;
        cout<<"\n\tColor del modelo:" << color << endl;
        cout<<"\n\tNúmero de pasajeros:" << numPasajeros << endl;
        cout<<"\n\tNúmero de puertas:" << numPuertas << endl;
        cout<<"\n\tPrecio:" << precio << endl;
        cout<<"\n\tKilometraje:" << kilometraje << endl;
        cout<<"\n\tEstándar/Automático:" <<tipo << endl;
        cout<<"\n\tEstado:" << estado << endl;
        
    }
    
    void Vehiculo::servicio()
{

    double km;
    if(kilometraje == 10000 || kilometraje ==30000 || kilometraje == 50000 || kilometraje == 70000 || kilometraje == 90000)
    {
        cout << "\n\t El auto requiere el servicio básico" << endl;
        
    }
    else if(kilometraje == 20000 || kilometraje == 60000)
    {
        cout << "\n\t El auto requiere el servicio medio" << endl;
        
    }
     else if(kilometraje == 40000 || kilometraje == 80000)
    {
        cout << "\n\t El auto requiere el servicio completo" << endl;
        
    }
    else if(kilometraje == 100000)
    {
        cout << "\n\t El auto requiere el servicio completo plus" << endl;
       
    }
    else 
    {
       if(kilometraje < 10000)
       {
           km = 10000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
       if(kilometraje > 10000 && kilometraje < 20000)
       {
           km = 20000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
       
       if(kilometraje > 20000 && kilometraje < 30000)
       {
           km = 30000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
        if(kilometraje > 30000 && kilometraje < 40000)
       {
           km = 40000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
        if(kilometraje > 40000 && kilometraje < 50000)
       {
           km = 50000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
        if(kilometraje > 50000 && kilometraje < 60000)
       {
           km = 60000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
        if(kilometraje > 60000 && kilometraje < 70000)
       {
           km = 70000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
        if(kilometraje > 70000 && kilometraje < 80000)
       {
           km = 80000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
       if(kilometraje > 80000 && kilometraje < 90000)
       {
           km = 90000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
        if(kilometraje > 90000 && kilometraje < 100000)
       {
           km = 90000 - kilometraje;
           cout << "Faltan " << km << " km para el siguiente servicio" << endl;
       }
       /*if(kilometraje < 10000)
       {
           km = 100000 - kilometraje;
           cout << "Faltan " << km << "para el siguiente servicio" << endl;
       }*/
  
    }
    
    
}
void Vehiculo::imprimirPrecio()
{
        double temp;
     temp = Vehiculo::precio;
    double aux;
    double aux1;
    double aux2;
    double aux3;
    double aux4;
    double aux5;
    double aux6;
    double aux7;
    double aux8;
    double aux9;

    if(anio == 2016)
    {
        cout <<"El precio del vehículo es: " << precio;
    }
   
   if (anio == 2015)
   {
       aux = temp * .2;
       aux1 = temp - aux;
       cout << "El precio del vehículo es: " << aux1;
   }
   if (anio == 2014)
   {
       aux = temp * .2;
       aux1 = temp - aux;
       
      aux2 = aux1 * .2;
      aux3 = aux1 - aux2;
      cout << "El precio del vehículo es: " << aux3;
   }
   if(anio == 2013)
   {
       aux = temp * .2;
       aux1 = temp - aux;
       
      aux2 = aux1 * .2;
      aux3 = aux1 - aux2;
      
      aux4 = aux3 * .2;
      aux5 = aux3 - aux4;
      cout << "El precio del vehículo es: " << aux5;
   }
   if(anio == 2012)
   {
       aux = temp * .2;
       aux1 = temp - aux;
       
      aux2 = aux1 * .2;
      aux3 = aux1 - aux2;
      
      aux4 = aux3 * .2;
      aux5 = aux3 - aux4;
      
      aux6 = aux5 * .2;
      aux7 = aux5 - aux6;
      cout << "El precio del vehículo es: " << aux7;
   }
   if(anio ==2011)
   {
        aux = temp * .2;
       aux1 = temp - aux;
       
      aux2 = aux1 * .2;
      aux3 = aux1 - aux2;
      
      aux4 = aux3 * .2;
      aux5 = aux3 - aux4;
      
      aux6 = aux5 * .2;
      aux7 = aux5 - aux6;
      
      aux8= aux7 * .2;
      aux9 = aux7-aux9;
      cout << "El precio del vehículo es: " << aux9;
   }
   else if(anio < 2011)
   {
       cout << "\n\tEl vehículo ya no tiene un valor en el mercado" << endl;
   }
   
}