#include <iostream>

using namespace std;
#ifndef JUEGO_H
#define JUEGO_H

template <class juegos>
class JUEGO
{
    
    public:
    JUEGO();
    JUEGO(int, int);
    ~JUEGO();
        void tablero_inicial();
        void revisar_vecinos();
        void setGeneracion(int);
        void getGeneracion();
        void crear_archivo();
    
    protected:
        juegos **tablero;
        juegos **tablero_temp;
        int num;
        int fila;
        int columna;
};
#endif