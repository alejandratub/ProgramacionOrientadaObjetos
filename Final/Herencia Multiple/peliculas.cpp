
#include <iostream>
#include <string>

#include "netflix.h"
#include "peliculas.h"
using namespace std;

Peliculas::Peliculas()
{
    duracion = new double;
    anio_estreno = new int;
}

Peliculas::Peliculas(string n,string g,double d, int a): Netflix(n,g)
{
    duracion = new double;
    anio_estreno = new int;
        
    *duracion = d;
    *anio_estreno = a;
}

Peliculas::Peliculas(double d, int a){
    duracion = new double;
    anio_estreno = new int;
        
    *duracion = d;
    *anio_estreno = a;
}

Peliculas::~Peliculas(){
    delete duracion;
    delete anio_estreno;
}

void Peliculas::imprimir(){
    cout <<"\t-Duración: " << *duracion << endl;
    cout <<"\t-Año de estreno: " << *anio_estreno << endl;
}