#include<string>
#include<iostream>

using namespace std;

#ifndef COMPUTADORA
#define COMPUTADORA

class Computadora
{
protected:
    string marca;
    string modelo;
    int capacidadDD;
    int velocidadRAM;
    
public:
    Computadora(){}
    Computadora(string, string, int, int);
    void print();
};

#endif