#include <iostream>
#include <cstdlib>
#include <vector>
#include <unistd.h>
 
using namespace std;

#ifndef MAPA_H
#define MAPA_H
 
class Mapa
{
public:
    int fil;
    int col;
    int vecinos;
    vector<vector<int> > mapa;
 
    Mapa(int f, int c);
    void dibujar();
    int analizarVecinos(int posf, int posc);
    void ciclo();
};
#endif