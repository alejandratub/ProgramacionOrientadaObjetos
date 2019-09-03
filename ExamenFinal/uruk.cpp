#include "uruk.h"
#include "jugador.h"

using namespace std;

Uruk::Uruk(){}

Uruk::Uruk(int vida, int fuerza, int velocidad):Jugador(vida)
{
    this->fuerza = fuerza;
    this->velocidad = velocidad;
}
void Uruk::print()
{
    Jugador::print();
    cout << "Fuerza..." << fuerza << endl;
    cout << "Velocidad..." << velocidad << endl;
}
void Uruk::Ataque()
{
    int ataque = fuerza;
    
    vida = vida-(ataque*0.1);
}

void Uruk::Esquivar(int ataque)
{
    int esquivar;
    if(ataque >= velocidad)
    {
        vida--;
        cout << "No esquivo el ataque, ahora tiene " << vida << "vidas " << endl;
    }
    else
    {
        cout << "Esquivo el ataque" << endl;
    }
}

void Uruk::Intercambio(int decision)
{
    if(decision == 1)
    {
        fuerza++;
        velocidad--;
    }
    else
    {
        velocidad++;
        fuerza--;
    }
    
}