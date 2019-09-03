#include <iostream>
#include <string>

#include "netflix.h"

using namespace std;

Netflix::Netflix()
{
    nombre = new string;
    genero = new string;
}

Netflix::Netflix(string n, string g)
{
    nombre = new string;
    genero = new string;
        
    * nombre = n;
    * genero = g;
}

Netflix::~Netflix()
{
    delete nombre;
    delete genero;
}


string Netflix::getNombre()
{
    return *nombre;
}

void Netflix::imprimir()
{
    cout <<"\t-Nombre: " << *nombre << endl;
    cout <<"\t-Género: " << *genero << endl;
}


