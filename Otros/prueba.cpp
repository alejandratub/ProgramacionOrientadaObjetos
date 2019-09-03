#include <iostream>
#include <string>
using namespace std;

int main()

{
    double anio = 2015;
    double precio = 40000;
    double temp;
    temp = precio;
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