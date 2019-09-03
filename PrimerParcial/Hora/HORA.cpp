#include <iostream>
#include "hora.h"

using namespace std;
//El constructor Hora inicializa en cero a cada atributo (dato) miembro.
//Garantiza que todos los objetos de Hora inician en un estado consistente.
/*HORA::HORA (){
    hora = minuto = segundo = 0;
    hora=0;
    minuto=0;
    segundo=0;
}*/


HORA::HORA():hora(0),minuto(0),segundo(0){}

/*Hora::Hora(int h, int m, int s){
    hora=h;
    minuto=m;
    segundo=s;
}*/

HORA::HORA(int h, int m, int s): hora(h), minuto(m), segundo(s){}

void HORA::establecer_hora(int h, int m, int s)
{
    hora = (h >= 0 && h < 24)? h : 0;
    minuto = (m >= 0 && m < 60)? m : 0;
    segundo = (s >= 0 && m < 60)? s : 0;
}

void HORA:: print_Militar()
{
    cout<< (hora < 10 ? "0" : "") << hora << ":" << (minuto < 10 ? "0" : "") << minuto;
}

void HORA:: print_Estandar(){
    cout << ((hora==0)||(hora==12) ? 12 : hora % 12)
    << ":" << (minuto < 10 ? "0" : "") << minuto
    << ":" << (segundo < 10 ? "0" : "") << segundo
    << (hora < 12 ? " AM" : " PM");
}