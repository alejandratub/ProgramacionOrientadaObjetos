#ifndef PELICULAS_H
#define PELICULAS_H

#include <iostream>
#include <string>
#include "netflix.h"

using namespace std;

class Peliculas: public virtual Netflix
{
    
    public:
        Peliculas();
        Peliculas(string,string,double, int);
        Peliculas(double, int);
        ~Peliculas();
        
        void imprimir();
        
    protected:
        double *duracion;
        int *anio_estreno;
};
#endif