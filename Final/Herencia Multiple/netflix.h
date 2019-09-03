#ifndef NETFLIX_H
#define NETFLIX_H

#include <iostream>
#include <string>

using namespace std;

class Netflix
{
    
    public:
        Netflix();
        Netflix(string, string);
        ~Netflix();
        
        void imprimir();
        string getNombre();
        
    protected:
        string *nombre;
        string *genero;
};
#endif