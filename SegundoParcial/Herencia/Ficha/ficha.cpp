#include "ficha.h"
#include <iostream>

using::std::string;

Ficha::Ficha(){}

Ficha::Ficha(string ref, string tit)
{
    referencia = ref;
    titulo = tit;
}


void Ficha::PrintFicha()
{
    cout << "\nReferencia: " << referencia;
    cout << "\nTítulo: " << titulo;
}

Ficha::~Ficha(){}