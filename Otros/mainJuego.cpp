#include <iostream>
#include <cstdlib>
#include <vector>
#include <unistd.h>
 
using namespace std;

#include "mapa.h"
int main()
{
    srand(time(NULL));
    Mapa mapa(20, 20);
    while(1)
    {
        mapa.dibujar();
        usleep(100000);
        system("clear");
        mapa.ciclo();
    }
}