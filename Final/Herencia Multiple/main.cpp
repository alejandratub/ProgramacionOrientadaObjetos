
#include <iostream>
#include <string>

#include"netflix.h"
#include"peliculas.h"
#include"series.h"
#include"peliserie.h"

using namespace std;

int main()
{
    
    Peliculas pelicula1("The Proposal","Comedy",1.48,2009);
    Peliculas *peliculas = new Peliculas[1];
    peliculas[0] = pelicula1;
        cout <<"***DATOS PElÍCULA*** " << endl;
        peliculas[0].Netflix::imprimir();
        peliculas[0].imprimir();
        cout << endl;
    
    Series serie1("Grey's Anatomy","Drama",268,13,2005);
    Series *series = new Series[1];
    series[0] = serie1;
        cout <<"***DATOS SERIE***" << endl;
        series[0].Netflix::imprimir();
        series[0].imprimir();
        cout << endl;
    
    Peliserie ps1("Gilmore Girls","Comedia",1.5,2016,96,8,2006);
    Peliserie *cont = new Peliserie[1];
    cont[0] = ps1;
        cont[0].imprimir();
        cout << endl;
        
}




