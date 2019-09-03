#ifndef PELISERIE_H
#define PELISERIE_H

#include <iostream>
#include <string>

#include "netflix.h"
#include "peliculas.h"
#include "series.h"

using namespace std;

class Peliserie: public Peliculas, public Series
{
    
    public:
        Peliserie();
        Peliserie(string,string,double,int,int,int,int);
        ~Peliserie();
    
    void imprimir();
};
#endif