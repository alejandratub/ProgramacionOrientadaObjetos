#include <iostream>
#include <string>
#include "personaje.h"

using namespace std;

PERSONAJE::PERSONAJE(){}
PERSONAJE::PERSONAJE(float ve, float f, float vi){
        velocidad = ve;
        fuerza = f;
        vida = vi;
}

PERSONAJE::~PERSONAJE(){
        cout << "\n**Ha entrado al destructor de Personaje**\n";
}

float PERSONAJE::get_vida(){
        return vida;
} 
void PERSONAJE::print_datos(){
        cout<<"\n\t\t-Velocidad: " << velocidad << endl;
        cout<<"\t\t-Fuerza: " << fuerza << endl;
        cout<<"\t\t-Vida: " << vida << endl;
}