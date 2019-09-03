
#include <iostream>
#include <string>

#include "netflix.h"
#include "series.h"

using namespace std;

Series::Series()
{
    noCaps = new int;
    noTemporadas = new int;
    anioEstreno = new int;
}

Series::Series(string n,string g,int nc,int nt, int a): Netflix(n,g)
{
    noCaps = new int;
    noTemporadas = new int;
    anioEstreno = new int;
        
    * noCaps = nc;
    * noTemporadas = nt;
    * anioEstreno = a;
}

Series::Series(int nc,int nt,int a)
{
    noCaps = new int;
    noTemporadas = new int;
    anioEstreno = new int;
        
    * noCaps = nc;
    * noTemporadas = nt;
    * anioEstreno = a;
}

Series::~Series()
{
    delete noCaps;
    delete noTemporadas;
    delete anioEstreno;
}

void Series::imprimir()
{
    cout <<"\t-No. de capítulos: " << *noCaps << endl;
    cout <<"\t-No. de temporadas: " << *noTemporadas << endl;
    cout <<"\t-Año de estreno: " << *anioEstreno << endl;
}