#include <iostream>
#include <string>

#include "cifrado.h"

#ifndef CESAR_H
#define CESAR_H

using namespace std;

class Cesar: public Cifrado
{
    
    public:
        Cesar();
        Cesar(string, int);
        
        void cifrar();
        void descifrar();
        void getFrase();
        void setFrase(string);

    protected:
        int desplazamiento;
};
#endif