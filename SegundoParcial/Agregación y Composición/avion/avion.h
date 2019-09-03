#ifndef AVION_
#define AVION_

using namespace std;

#include <string>
#include "motor.h" //los voy a utilizar dentro de la misma clase
#include "piloto.h"


class AVION
{
    public:
    AVION();
    AVION(int, int, string, int); //el ultimo int se va a ir al constructor de mi clase motor 
    ~AVION ();
    string getModelo() const;
    int getAsientos() const;
    int getPasajeros() const;
    int getSerie() const;
    string getPiloto() const;
    void setPiloto();
    
    private:
    int asientos;
    int pasajeros;
    string modelo;
    MOTOR m; //es como crear una variable de tipo motor, es un objeto de mi clase MOTOR
    PILOTO p; 
    
        
};


#endif