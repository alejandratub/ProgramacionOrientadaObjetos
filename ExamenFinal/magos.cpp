#include "magos.h"
#include "jugador.h"

using namespace std;

Magos::Magos(){}

Magos::Magos(int vida, int fuerza, int magia, int velocidad):Jugador(vida)
{
    this->fuerza = fuerza;
    this->magia = magia;
    this->velocidad = velocidad;
}
void Magos::print()
{
    Jugador::print();
    cout << "Fuerza..." << fuerza << endl;
    cout << "Magia..."  << magia << endl;
    cout << "Velocidad..." << velocidad << endl;
}
void Magos::Ataque()
{
    int ataque = fuerza + magia;
    
    vida = vida-(ataque*0.1);
}

void Magos::Esquivar(int ataque)
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

void Magos::AumentoVida()
{
    vida++;
    magia--;
}
