#include <iostream>
#include <string>

#include "personaje.h"
#include "humano.h"

HUMANO::HUMANO(){}
HUMANO::HUMANO(float ve, float f, float vi, float m): PERSONAJE(ve,f,vi){
    magia = m;
}

HUMANO::~HUMANO(){
    cout <<"\n**Entró al destructor de Humano**";
}


float HUMANO::ataque(){
    var_ataque = fuerza + magia;

    return var_ataque;
}

void HUMANO::recibir_ataque(float el_ataque){
    vida = vida - (el_ataque * 0.1);
}

void HUMANO::esquivar_ataque(float el_ataque){
    if (velocidad >= el_ataque){
        vida = vida;
        cout << "\n\t*¡BIEN! Lograste esquivar el ataque. " << endl;
        
    }
    
    else if (velocidad <= el_ataque){
     vida = vida - ((el_ataque) * 0.1);
    }
}


void HUMANO::aumento_vida(){
    vida = vida + (magia-(magia - 1));
    magia = magia - 1;
}

void HUMANO::print_datos(){
    PERSONAJE::print_datos();
    cout<<"\t\t-Magia: " << magia << endl;
}