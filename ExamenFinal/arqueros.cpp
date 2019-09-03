#include "arqueros.h"
#include "jugador.h"

using namespace std;

Arqueros::Arqueros(){}

Arqueros::Arqueros(int vida, int fuerza, int magia, int velocidad):Jugador(vida)
{
    this->fuerza = fuerza;
    this->magia = magia;
    this->velocidad = velocidad;
}
void Arqueros::print()
{
    Jugador::print();
    cout << "Fuerza..." << fuerza << endl;
    cout << "Magia..."  << magia << endl;
    cout << "Velocidad..." << velocidad << endl;
}

void Arqueros::Ataque()
{
    int ataque = fuerza + magia;
    
    vida = vida-(ataque*0.1);
}

void Arqueros::recibir_ataque(float el_ataque)
{
    vida = vida - (el_ataque * 0.1);
}

void Arqueros::Esquivar(float el_ataque)
{
    if (velocidad >= el_ataque)
    {
        vida = vida;
        cout << "Esquivo el ataque. " << endl;
        
    }
    
    else if (velocidad <= el_ataque)
    {
     vida = vida - ((el_ataque) * 0.1);
     cout << "No esquivo el ataque " << endl;
    }
}

void Arqueros::AumentoVida()
{
    vida++;
    magia--;
}