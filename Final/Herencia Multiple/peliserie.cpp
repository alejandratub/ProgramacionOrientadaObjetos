
#include <iostream>
#include <string>

#include "netflix.h"
#include "peliculas.h"
#include "series.h"
#include "peliserie.h"

using namespace std;

Peliserie::Peliserie(){}

Peliserie::Peliserie(string n,string g,double d, int ap,int nc,int nt, int as): Netflix(n,g),Peliculas(d,ap), Series(nc,nt,as){}

Peliserie::~Peliserie(){}

void Peliserie::imprimir()
{
    cout << "****PELISERIE****" << endl;
    cout <<"****DATOS GENERALES****" << endl;
    cout <<"\n**DATOS PElÍCULA**" << endl;
    Netflix::imprimir();
    Peliculas::imprimir();
    
    cout <<"\n**DATOS SERIE** " << endl;
    Netflix::imprimir();
    Series::imprimir();
}