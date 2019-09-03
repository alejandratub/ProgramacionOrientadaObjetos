#include "Peliseries.h"

Peliseries::Peliseries(string nombre, string genero, int noCaps, int noTemporadas, int anioEstreno,double duracion, int anio_estreno)
{
    this->nombre = nombre;
    this->genero = genero;
    this->noCaps = noCaps;
    this-> noTemporadas = noTemporadas;
    this->anioEstreno = anioEstreno;
    this->duracion = duracion;
    this->anio_estreno = anio_estreno;
}

void Peliseries::print()
{
    cout << "Nombre: " << nombre  << endl;
    cout << "Género: " << genero << endl;
    cout << "****DATOS SERIE****" << endl;
    cout << "Número de Capítulos: " << noCaps << endl;
    cout << "Número de Temporadas: " << noTemporadas << endl;
    cout << "Año de Estreno: " << anioEstreno << endl;
    cout << "****DATOS PELICULA****" << endl;
    cout << "Duración: " << duracion << endl;
    cout << "Año de Estreno: " << anio_estreno << endl;
    cout << "\n" ;
}