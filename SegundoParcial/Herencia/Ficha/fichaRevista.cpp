#include "fichaRevista.h"
#include "ficha.h"
#include <iostream>

using namespace std;

FichaRevista::FichaRevista(){}

FichaRevista::FichaRevista(  int a, int numR, string ref, string tit):Ficha(ref,tit)
{
    anio = a;
    numRevista = numR;
}

void FichaRevista::PrintFicha()
{
    Ficha::PrintFicha();
    cout << "\nAño: " << anio;
    cout << "\nNumero de Revista: " << numRevista;
}
FichaRevista::~FichaRevista(){}