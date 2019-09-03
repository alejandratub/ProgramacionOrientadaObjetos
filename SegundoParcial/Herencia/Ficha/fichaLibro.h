
#ifndef FICHALIBRO
#define FICHALIBRO

#include "ficha.h"
#include <iostream>
#include <string>
using namespace std;

class FichaLibro:public Ficha
{
    public:
    FichaLibro();
    FichaLibro(string, string, string, string);
    ~FichaLibro();
   void PrintFicha();
    
       protected:
    string autor;
    string editorial;
};
#endif