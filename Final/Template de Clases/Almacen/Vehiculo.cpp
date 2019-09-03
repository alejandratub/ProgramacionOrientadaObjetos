#include"Vehiculo.h"


Vehiculo::Vehiculo(string nombre, int modelo)
{
    this->nombre = nombre;
    this->modelo = modelo;
}

void Vehiculo::print()
{
    cout << "Nombre del v: " << nombre << endl;
    cout << "Modelo del v: " << modelo << endl;
}