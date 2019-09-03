#include"Compus.h"


Computadora::Computadora(string marca, string modelo, int capacidadDD, int velocidadRAM)
{
    this->marca = marca;
    this->modelo = modelo;
    this->capacidadDD = capacidadDD;
    this->velocidadRAM = velocidadRAM;
}

void Computadora::print()
{
    cout << "Marca del equipo: " << marca << endl;
    cout << "Modelo del equipo: " << modelo << endl;
    cout << "Capacidad en DD (gb): " << capacidadDD << endl;
    cout << "Velocidad en RAM (gb): " << velocidadRAM << endl;
}