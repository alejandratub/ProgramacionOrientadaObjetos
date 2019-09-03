#include <iostream>
#include <string>
#include "avion.h"
#include "piloto.h"

using namespace std;

int main()
{
    string modeloa;
    int noasientos;
    int nopasajeros;
    
    PILOTO piloto1 ("Daniela", "Flores", 19, 123456, 2);
    
    cout << endl;
    
    AVION avion1(342, 42, "Boing 347", 284738);
    
    cout <<"Avión: " <<avion1.getModelo() << endl;
    cout <<"No asientos: " <<avion1.getAsientos() << endl;
    cout <<"No pasajeros: " <<avion1.getPasajeros << endl;
    cout << "Motor: " <<avion1.getSerie() << endl;
    
    avion1.setPiloto(piloto1);
    
    cout << "Piloto: " <<avion1.getPiloto() << endl;
    
    return 0;
}