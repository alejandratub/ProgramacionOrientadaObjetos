#include <iostream>
#include <string>

#include "personaje.h"
#include "orco.h"

ORCO::ORCO(){}
ORCO::ORCO(float ve, float f, float vi): PERSONAJE(ve,f,vi){}
ORCO::~ORCO(){
    cout <<"\n**Entró al destructor de Orco**";
}

void ORCO::recibir_ataque(float el_ataque){
    vida = vida - ((el_ataque) * 0.1);
}

float ORCO::ataque(){
    var_ataque = fuerza;

    return var_ataque;
}

void ORCO::esquivar_ataque(float el_ataque){
    if (velocidad >= (el_ataque)){
        vida = vida;
        cout << "\n\t*Lograste esquivar el ataque!" << endl;
        
    }
    
    else if (velocidad <= (el_ataque)){
        vida = vida - (el_ataque * 0.1);
    }
}

void ORCO::int_fuerza_vel(){
    fuerza = fuerza + 1;
    velocidad = velocidad - 1;
}

