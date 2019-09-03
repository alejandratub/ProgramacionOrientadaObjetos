#include <iostream>
#include <string>

#include "vehiculo.h"
#include "deportivos.h"

using namespace std;

Deportivo::Deportivo(){}

Deportivo::Deportivo(string nMa,string nMo,int a,string c,int nPa,int nPu,float p, float k,string t,string e, int tur, double pot):Vehiculo(nMa,nMo,a,c,nPa,nPu,p,k,t,e) 
{
    turbo = tur;
    potencia = pot;
}

//Deportivo::~Deportivo(){}

void Deportivo::imprimir()
{
     Vehiculo::imprimir();
    cout << "\n\tEl turbo está: " << turbo << endl;
    cout << "\n\tTiene una potencia: " << potencia << endl;
    
}