#include <iostream>
#include "fecha.h"

using namespace std;

FECHA::FECHA(){}

FECHA::FECHA(int d, int m, int a)
{
    dia = validarDia(d);
    mes = validarMes(m);
    anio = validarAnio(a);
}

FECHA::~FECHA(){}

int FECHA::validarMes(int mm)
{
    if(mm > 0 && mm <=12)
    {
        return mm;
    }
    else
    {
        mm = 1;
        cout <<"\n El mes ingresado es invalido, se estableció en 1";
        return mm;
    }
}

int FECHA::validarAnio(int dd)
{
    int diaFmes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    
    if((dd > 0) && dd <= diaFmes[mes])
    {
        return dd;
    }
    else
    {
        dd = 1;
        cout << "\n El día ingresado es invalido, se estableció en 1" <<endl;
        return dd;
    }
    
    if (mes==2 && dd == 29)
    {
        if((anio%4==0) && (anio%100==0) && (anio%400==0))
        {
            return dd;
        }
        else
        {
            dd = 1;
            cout << "\n El día ingresado es inválido, se estableció en 1";
            return dd;
        }
    }
}
int FECHA:: validarAnio(int aa)
{
    if (aa == 0 || aa < 1900 || aa > 2016)
    {
        aa = 1900;
        cout << "\n El año ingresado es inválido, se estableció en 1900";
        return aa;
    }
    else
    {
        return aa;
    }
}
void FECHA::imprimirFecha()
{
    cout << dia << "/" << mes << "/" << anio;
}
