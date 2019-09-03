#include <iostream>
#include <string>

#include "cifrado.h"

#ifndef VIGENERE_H
#define VIGENERE_H



using namespace std;

class Vigenere: public Cifrado{
    
    public:
        Vigenere();
        Vigenere(string, string);
        
        void cifrar();
        void descifrar();

    protected:
        string fraseCifrar;
};
#endif