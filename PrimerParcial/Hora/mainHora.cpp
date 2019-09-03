#include <iostream>
#include "hora.h"

using namespace std;

int main()
{
    HORA instancia(10,10,10);
    HORA instancia2;
  
    
    int validacion = instancia.establecer_hora();
    
    if(validacion==1)
    {
    cout<< "\n La hora Militar es: ";
    instancia.print_Militar();
    cout<<"\n La hora estandar es: ";
    instancia.print_Estandar();
    }
    if (validacion ==0)
    {
        cout<< "\n La hora militar es 00:00";
        cout<<"\n La hora estandar es: 12:00:00 AM";
    }
    ;
}