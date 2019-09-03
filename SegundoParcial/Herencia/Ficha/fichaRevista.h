#ifndef FICHA_REVISTA
#define FICHA_REVISTA

#include "ficha.h"
#include <iostream>
#include <string>


class FichaRevista:public Ficha
{
    public:
    FichaRevista();
    FichaRevista(int, int, string, string);
    ~FichaRevista();
    void PrintFicha();
    
    protected:
    int anio;
    int numRevista;
};
#endif