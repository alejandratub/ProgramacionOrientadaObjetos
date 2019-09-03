#include"Peliculas.h"


Peliculas::Peliculas(string nombre, string genero, double duracion, int anio_estreno)
{
    this->nombre = nombre;
    this->genero = genero;
    this->duracion = duracion;
    this->anio_estreno = anio_estreno;
}

void Peliculas::print()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Género: " << genero << endl;
    cout << "Duración: " << duracion << endl;
    cout << "Año de Estreno: " << anio_estreno << endl;
}