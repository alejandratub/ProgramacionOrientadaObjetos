#include <iostream>
#include <string>
#include "comunidadTEC.h"

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

using namespace std;

class Estudiante : public ComunidadTEC
{
    public:
    Estudainte();
    Estudiante(string n, float c);
    void getNota() const;
    float setNota(float c);
    void imprimir() const;
    
    protected:
    float nota;
};

#endif