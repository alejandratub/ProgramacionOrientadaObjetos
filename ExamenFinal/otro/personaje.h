
#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <string>

using namespace std;

class PERSONAJE{
    public:
        PERSONAJE();
        PERSONAJE(float, float, float);
        ~PERSONAJE();
        
        virtual float ataque() = 0;
        virtual void esquivar_ataque(float) = 0;
        virtual void recibir_ataque(float) = 0;
        virtual float get_vida();
        virtual void print_datos();
        
        
    protected:
        float velocidad;
        float fuerza;
        float vida;
};
#endif