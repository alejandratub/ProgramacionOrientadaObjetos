#include <iostream>
#include <cstdlib>
#include <fstream>
#include "juego.h"

using namespace std;


template<typename juegos>
JUEGO<juegos>::JUEGO(){}

template<typename juegos>
JUEGO<juegos>::JUEGO(int fila, int columna)
{
        this->num = num;
        this->fila = fila;
        this->columna = columna;
        
        tablero = new juegos*[columna];
        tablero_temp = new juegos*[columna];
        
    for (int i = 0; i < fila; i++) 
    {
        tablero[i] = new juegos[fila];
        tablero_temp[i] = new juegos[fila];
    }
}

template<typename juegos>
JUEGO<juegos>::~JUEGO()
{
    delete [] tablero;
    delete [] tablero_temp;
}
template<typename juegos>
void JUEGO<juegos>::getGeneracion(){}

template<typename juegos>
void JUEGO<juegos>::setGeneracion(int num)
{
        this->num = num;
}

template<typename juegos>
void JUEGO<juegos>::tablero_inicial()
{
  srand(time(NULL));

    for (int i = 0; i < fila; i++) 
    {
        for (int j = 0; j < columna; j++) 
        {
            tablero[i][j] = rand() % 2;
        }
    }
    
     for(int i = 0; i < fila; i++)
        {
            cout << endl;
                for(int j = 0; j < columna; j++)
                {
                     cout <<" " <<  tablero[i][j] << " ";
                 }
        }
        cout << endl;
        cout << endl;
}


template<typename juegos>
void JUEGO<juegos>::revisar_vecinos()
{
    for(int contador = 0; contador <= num-2; contador++)
    {
        for(int i = 1; i < fila-1; i++)
        {
                for(int j = 1; j < columna-1; j++)
                {
                        int resultado = tablero[i][j+1] + tablero[i][j-1] + tablero[i+1][j] + tablero[i-1][j] + tablero[i-1][j-1] + tablero[i+1][j-1] + tablero[i+1][j+1] + tablero[i-1][j+1];
                        if (tablero[i][j] == 0 && resultado == 3)
                        { //checa si nace
                                tablero_temp[i][j] = 1;
                        }
                        else if(tablero[i][j] > 0 && resultado == 2 || resultado == 3)
                        { //checa si vive
                                tablero_temp[i][j] = 1;
                        }
                        else if(tablero[i][j] > 0 && resultado >= 4)
                        { //checa si muere
                                tablero_temp[i][j] = 0;
                        } 
                        else 
                        {
                                tablero_temp[i][j] = 0; 
                        }
                }
        }


        for(int i = 1; i < fila-1; i++)
        {
                for(int j = 1; j < columna-1; j++) 
                {
                        tablero[i][j] = tablero_temp[i][j];
                }
        }

        for(int i = 0; i < fila; i++)
        {
            cout << endl;
                for(int j = 0; j < columna; j++)
                {
                     cout <<" " <<  tablero[i][j] << " ";
                 }
        }
        cout << endl;
        cout << endl;
}
}
template<typename juegos>
void JUEGO<juegos>::crear_archivo()
{
    int generacion;
    generacion = JUEGO::num;
    ofstream archivo;
    
    archivo.open("end_of_life.txt", ios::out);
    if(archivo.is_open())
    {
        archivo << "JUEGO DE LA VIDA - GENERACIÓN " << num << "\n" ;
        for(int i = 0; i < fila; i++)
        {
            archivo << endl;
            for(int j = 0; j < columna; j++)
            {
                archivo << " " << tablero[i][j] << " ";
            }
            archivo << endl;
        }
    }
    archivo.close();
}

                
