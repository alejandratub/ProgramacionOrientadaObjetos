#include "EPorComision.h"
#include "empleados.h"

#include <string>
#include <iostream>
using namespace std;

EporComision::EporComision(){}

EporComision::EporComision(string nom, string ap, int ed, int v):Empleados(nom,ap,ed)
{
    venta = v;
}

void EporComision::PrintEmpleados()
{
   // Empleados::PrintEmpleados();
    cout <<"\nVentas realizadas: " << venta << endl;
    cout <<"\nSu pago de de la semana es de: " << 1500 + (250*venta) << endl;
}
void EporComision:: setDatos(int v)
{
    venta = v;
}
/*void EPorComision:: getDatos()
{
    cout << "\n Ingresa el número de ventas realizadas: " << endl;
    cin >> ventas;
}*/

/*EporComision::~EporComision()
{
    delete edad;
}*/