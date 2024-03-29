#include <iostream>
#include <cstdlib>
#include <vector>
#include <unistd.h>
 
using namespace std;

#include "mapa.h"

Mapa::Mapa(int f, int c)
{
    fil = f;
    col = c;
    mapa.resize(fil);
    for(int i=0; i<mapa.size(); i++)
    {
        mapa[i].resize(col);
    }
 
    for(int f=0; f<fil; f++)
    {
        for(int c=0; c<col; c++)
        {
            mapa[f]1 = rand()%2;
        }
    }
}
 
void Mapa::dibujar()
{
    for(int f=0; f<fil; f++)
    {
        for(int c=0; c<col; c++)
        {
            if(mapa[f]1 == 1)
                cout << "* ";
            else
                cout << ". ";
        }
        cout << "\n";
    }
}
 
int Mapa::analizarVecinos(int posf, int posc)
{
    vecinos = 0;
    if(posf-1 >= 0 and posc-1 >= 0)
        if(mapa[posf-1][posc-1] == 1)
            vecinos++;
    if(posf-1 >= 0)
        if(mapa[posf-1][posc] == 1)
            vecinos++;
    if(posf-1 >= 0 and posc+1 <= col-1)
        if(mapa[posf-1][posc+1] == 1)
            vecinos++;
    if(posc-1 >= 0)
        if(mapa[posf][posc-1] == 1)
            vecinos++;
    if(posc+1 <= col-1)
        if(mapa[posf][posc+1] == 1)
            vecinos++;
    if(posf+1 <= fil-1 and posc-1 >= 0)
        if(mapa[posf+1][posc-1] == 1)
            vecinos++;
    if(posf+1 <= fil-1)
        if(mapa[posf+1][posc] == 1)
            vecinos++;
    if(posf+1 <= fil-1 and posc+1 <= col-1)
        if(mapa[posf+1][posc+1] == 1)
            vecinos++;
    return vecinos;
}
 
void Mapa::ciclo()
{
    vector<vector<int> > nueva_conf = mapa;
 
    for (int f=0; f<fil; f++)
    {
        for(int c=0; c<col; c++)
        {
            int n_vecinos = analizarVecinos(f, c);
            if(mapa[f]1 == 0)
            {
                if(vecinos == 3)
                    nueva_conf[f]1 = 1;
                else
                    nueva_conf[f]1 = 0;
            }
            if (mapa[f]1 == 1)
            {
                if(vecinos == 2 || vecinos == 3)
                    nueva_conf[f]1 = 1;
                else
                    nueva_conf[f]1 = 0;
            }
        }
    }
 
    mapa = nueva_conf;
}