#include<string>
#include<iostream>

using namespace std;

#ifndef VEHICULO
#define VEHICULO

class Vehiculo
{
protected:
    string nombre;
    int modelo;
public:
    Vehiculo(){}
    Vehiculo(string, int);
    void print();
};

#endif