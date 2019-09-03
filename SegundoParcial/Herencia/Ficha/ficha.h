#ifndef FICHA
#define FICHA

#include <iostream>
#include <string>
using namespace std;

class Ficha 
{
    public:
    Ficha();
    Ficha(string, string);
    ~Ficha();
   void  PrintFicha();
    
    protected:
    string referencia;
    string titulo;
    
};
#endif 