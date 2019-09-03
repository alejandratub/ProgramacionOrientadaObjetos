#ifndef FICHA_VOLUMEN
#define FICHA_VOLUMEN

#include "ficha.h"
#include "fichaLibro.h"

#include <iostream>
using namespace std;

class FichaVolumen: public FichaLibro
{
    public:
    FichaVolumen();
    FichaVolumen(string, string, string, string, int);
    ~FichaVolumen();
    
    void PrintFicha();
    void pedirDatos();
    
    protected:
    int volumen;
};
#endif