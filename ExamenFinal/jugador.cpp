#include <iostream>
#include <string>

using namespace std;
#include "jugador.h"

Jugador::Jugador(){}

Jugador::Jugador(int vida)
{
    this->vida = vida;
    this->decision = decision;
    
}

void Jugador::print()
{
    cout << "Vida..." << vida << endl;
}
