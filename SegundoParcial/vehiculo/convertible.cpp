#include <iostream>
#include <string>

#include "vehiculo.h"
#include "convertible.h"

using namespace std;

Convertible::Convertible(){}

Convertible::Convertible(string nMa,string nMo,int a,string c,int nPa,int nPu,float p, float k,string t,string e,string tech, string tipoT):Vehiculo(nMa,nMo,a,c,nPa,nPu,p,k,t,e) 
{
    techo = tech;
    tipoTecho = tipoT;
}

//Convertible::~Convertible(){}

void Convertible::imprimir()
{
    Vehiculo::imprimir();
    cout<<"\n\tTecho Abierto/Cerrado:" << techo << endl;
    cout<<"\n\tTipo de Techo Rigido/Piel:" << tipoTecho << endl;
    
}

