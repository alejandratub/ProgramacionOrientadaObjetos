
#include <iostream>
#include <string>

using namespace std;

#ifndef CIFRADO_H
#define CIFRADO_H


class Cifrado{
    
    public:
        Cifrado(){}
        Cifrado(string f)
        {
            frase = f;
        }
        
        virtual void cifrar(){}
        virtual void descifrar() {}
        virtual void setFrase(string f) 
        {
            frase = f;
        }
        
        void getFrase(){}

    protected:
        string frase;
};
#endif