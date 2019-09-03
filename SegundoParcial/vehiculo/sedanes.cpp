#include <iostream>
#include <string>

#include "vehiculo.h"
#include "sedanes.h"

using namespace std;

Sedanes::Sedanes(){}

Sedanes::Sedanes(string nMa,string nMo,int a,string c,int nPa,int nPu,float p, float k,string t,string e):Vehiculo(nMa,nMo,a,c,nPa,nPu,p,k,t,e){}

//Sedanes::~Sedanes(){}

