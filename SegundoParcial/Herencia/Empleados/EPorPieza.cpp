#include "EPorPieza.h"
#include "empleados.h"

#include <iostream>
#include <string>
using namespace std;

EPorPieza::EPorPieza(){}

EPorPieza::EPorPieza(string nom, string ap, int ed, int p): Empleados(nom,ap,ed)
{
    piezas = p;
}

void EPorPieza::PrintEmpleados()
{
    //Empleados::PrintEmpleados();
    cout << "\nEl numero de piezas vendidas por el empleado son: " << piezas << endl;
    cout <<"\nSu pago de de la semana es de: " << (500*piezas) << endl;
}
void EPorPieza::setDatos(int p)
{
    piezas = p;
}
/*void EPorPieza::getDatos()
{
    cout <<"\nIngrese el numero de piezas vendidas: " << endl;
    cin>> piezas;
}*/

/*EPorPieza::~EPorPieza()
{
    delete edad;
}*/