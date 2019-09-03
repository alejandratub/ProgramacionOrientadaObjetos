#include <iostream>
#include <string>

#include "vehiculo.h"
#include "hibrido.h"

Hibrido::Hibrido(){}

Hibrido::Hibrido(string nMa,string nMo,int a,string c,int nPa,int nPu,float p, float k,string t,string e, string mod):Vehiculo(nMa,nMo,a,c,nPa,nPu,p,k,t,e) 
    {
        modo = mod;        
    }
//Hibrido::~Hibrido(){}
        
        
void Hibrido::imprimir()
{
        Hibrido::imprimir();
        cout <<"\n\tModo del híbrido: " << modo;
}