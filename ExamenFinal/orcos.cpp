#include "orcosc.h"
#include "jugador.h"

using namespace std;

OrcosC::OrcosC(){}

OrcosC::OrcosC(int vida, int fuerza, int velocidad):Jugador(vida)
{
    this->fuerza = fuerza;
    this->velocidad = velocidad;
}

void OrcosC::print()
{
    Jugador::print();
    cout << "Fuerza..." << fuerza << endl;
    cout << "Velocidad..." << velocidad << endl;
}
void OrcosC::Ataque()
{
    int ataque = fuerza ;
    
    vida = vida-(ataque*0.1);
}

void OrcosC::Esquivar(int ataque)
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


void OrcosC::Intercambio(int decision)
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