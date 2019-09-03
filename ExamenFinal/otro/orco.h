#ifndef ORCO_H
#define ORCO_H

#include <iostream>
#include <string>

#include "personaje.h"

using namespace std;

class ORCO: public PERSONAJE{
    
    public:
        ORCO();
        ORCO(float, float, float);
        ~ORCO();
        
        float ataque();
        void esquivar_ataque(float);
        void recibir_ataque(float);
        void int_fuerza_vel();
        
    protected:
        float var_ataque;
};
#endif