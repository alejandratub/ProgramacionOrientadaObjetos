#include "guerreros.h"
#include "jugador.h"

using namespace std;

Guerreros::Guerreros(){}

Guerreros::Guerreros(int vida, int fuerza, int magia, int velocidad):Jugador(vida)
{
    this->fuerza = fuerza;
    this->magia = magia;
    this->velocidad = velocidad;
}

void Guerreros::print()
{
    Jugador::print();
    cout << "Fuerza..." << fuerza << endl;
    cout << "Magia..."  << magia << endl;
    cout << "Velocidad..." << velocidad << endl;
}
void Guerreros::Ataque()
{
    int ataque = fuerza + magia;
    
    vida = vida-(ataque*0.1);
}

void Guerreros::Esquivar(int ataque)
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

void Guerreros::AumentoVida()
{
    vida++;
    magia--;
}
