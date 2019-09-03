#include "EPorHora.h"
#include "empleados.h"

#include <iostream>
#include <string>
using namespace std;

EporHora::EporHora(){}

EporHora::EporHora(string nom,string ap, int ed, int h):Empleados(nom,ap,ed)
{
    horas = h;
}

void EporHora::PrintEmpleados()
{
//Empleados::PrintEmpleados();
    cout << "\nEl número de horas trabajadas son: " << horas << endl;
     cout <<"\nSu pago de de la semana es de: " << (250*horas) << endl;
}
void EporHora::setDatos(int h)
{
    horas = h;
    
}

/*void EporHora::getDatos()
{
    cout <<"\nIngresa el numero de horas trabajadas en la semana: " << endl;
    cin >> horas;
}*/

/*EporHora::~EporHora()
{
    delete edad;
}*/