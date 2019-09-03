#include <string>
#include <iostream>

using namespace std;

#ifndef PELISERIES
#define PELISERIES

class Peliseries
{
    public:
    Peliseries();
    Peliseries(string, string, int, int, int, double, int);
    void print();
    
    protected:
    string nombre;
    string genero;
    int noCaps;
    int noTemporadas;
    int anioEstreno;
    double duracion;
    int anio_estreno;
};
#endif