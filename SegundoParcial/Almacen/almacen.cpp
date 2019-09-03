#include <iostream>
#include <string>

#include "almacen.h"

using namespace std;

Almacen::Almacen(){}

Almacen::Almacen(int n, double a,string m,double p)
{
     numero = n;
     anio = a;
     modelo = m;
     precio = p;
}
