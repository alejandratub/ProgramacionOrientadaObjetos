#ifndef HUMANO_H
#define HUMANO_H

#include <iostream>
#include <string>

#include "personaje.h"

using namespace std;

class HUMANO: public PERSONAJE{
    
    public:
        HUMANO();
        HUMANO(float, float, float, float);
        ~HUMANO();
        
        float ataque();
        void esquivar_ataque(float);
        void recibir_ataque(float);
        void aumento_vida();
        void print_datos();
    
    protected:
        float var_ataque;
        float magia;
        
};
#endif