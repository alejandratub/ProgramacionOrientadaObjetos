#include "Netflix.h"
#include "Series.h"
#include "Peliculas.h"
#include "Peliseries.h"

int main()
{
    Netflix <Series> a;
    Series serie1("How I Met Your Mother", "Comedia", 208,9,2005);
    Series serie2("Gilmore Girls", "Comedia",96,7,2006);
    Series serie3("Grey's Anatomy","Drama",268,13,2005);
    
    Netflix<int> enteros;
    
    int cinco = 5;
    int seis = 6;
    enteros.add(&cinco);
    enteros.add(&seis);
    
    cout << "\n\nNetflix" << endl;
    enteros.print();
    
    a.add(&serie1);
    a.add(&serie2);
    a.add(&serie3);
    
    cout << "\nSERIES DE NETFLI" << endl;
    a.print();
    
    cout << "\n\nPELICULAS DE NETFLIX" << endl;
    
    Netflix<Peliculas> ac;
    Peliculas pelicula1("The Proposal","Comedia",1.48,2009);
    Peliculas  pelicula2("The Best of Me", "Drama", 1.57, 2014);
    Peliculas pelicula3("El Jardí Secreto", "Familiar", 1.41, 1993);
    
    
    ac.add(&pelicula1);
    ac.add(&pelicula2);
    ac.add(&pelicula3);
    
    ac.print();
    
    cout << endl;
    cout << "\nPELISERIES DE NETFLIX" << endl;
    
    Netflix<Peliseries> b;
     Peliseries peliserie1("Gilmore Girls","Comedia",96,8,2006,1.5,2016);
     Peliseries peliserie2("Sex and The City", "Romantico",94, 6, 1998, 2.25, 2008);
     
     b.add(&peliserie1);
     b.add(&peliserie2);
    
     
     b.print();
     cout << endl;
    
    
    return 0;
}