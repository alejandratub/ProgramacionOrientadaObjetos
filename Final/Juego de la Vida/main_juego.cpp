#include "juego.h"
#include "juego.cpp"
#include <iostream>

#define FILA 20
#define COLUMNA 20

using namespace std;



int main()
{
   
    int num;
  
    
    cout << "..::BIENVENIDO::.." << endl;
    cout << " ..::JUEGO DE LA VIDA::.." << endl;
    cout << "\n\t Ingrese el número de generaciones que desea " ;
    cin >> num;
    
     JUEGO <int>juego_vida(FILA,COLUMNA);
        juego_vida.tablero_inicial();
        juego_vida.setGeneracion(num);
        juego_vida.revisar_vecinos();
        juego_vida.crear_archivo();
  
}