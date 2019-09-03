#include "fichaLibro.h"
#include "ficha.h"

#include <iostream>
#include <string>
using namespace std;


FichaLibro::FichaLibro(){}

FichaLibro::FichaLibro(string ref, string tit, string au, string ed): Ficha(ref,tit)
{
    autor = au;
    editorial = ed;
}

void FichaLibro::PrintFicha()
{
    Ficha::PrintFicha();
    cout << "\nAutor: " << autor;
    cout << "\nEditorial: " << editorial;
}
FichaLibro::~FichaLibro(){}



