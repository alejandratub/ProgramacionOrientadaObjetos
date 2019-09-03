#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;

Jugador::Jugador(){}

Jugador::Jugador(float velocidad, float fuerza, float vida)
{
       this->velocidad = velocidad;
        this->fuerza = fuerza;
        this->vida = vida;
}

Jugador::~Jugador(){}

float Jugador::getVida()
{
        return vida;
} 
void Jugador::imprimir()
{
        cout<<"\n\t\t*Velocidad: " << velocidad << endl;
        cout<<"\t\t*Fuerza: " << fuerza << endl;
        cout<<"\t\t*Vida: " << vida << endl;
}