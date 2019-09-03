#include<string>
#include<iostream>

using namespace std;

#ifndef PELICULAS
#define PELICULAS

class Peliculas
{

public:
    Peliculas(){}
    Peliculas(string, string, double, int);
    void print();
    
    protected:
    string nombre;
    string genero;
    double duracion;
    int anio_estreno;
};

#endif

