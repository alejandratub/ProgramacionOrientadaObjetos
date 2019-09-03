#include <iostream>
#include "banco.h"

using namespace std;

banco::banco()
{
    retiro = new double;
    deposito = new double;
    saldo = new double;
    nuevoSaldo = new double;
    numeroCuenta = new double;
}
banco:: ~banco()
{
    delete retiro;
    delete deposito;
    delete saldo;
    delete nuevoSaldo;
    delete numeroCuenta;
}
banco::banco(const banco &obj)
{
    retiro = new double;
    deposito = new double;
    saldo = new double;
    nuevoSaldo = new double;
    numeroCuenta = new double;
    
    *retiro = *(obj.retiro);
    *deposito = *(obj.deposito);
    *saldo = *(obj.saldo);
    *nuevoSaldo = *(obj.nuevoSaldo);
    *numeroCuenta = *(obj.numeroCuenta);
}

void banco::setRetirar(double r)
{
    *retiro = r;
    if(*retiro>=*saldo)
    {
        cout<<"\n Lo sentimos no cuenta con el saldo suficiente\n";
    }
    else
    {
        *nuevoSaldo = *saldo - r;
        cout<< "\n Su nuevo saldo es: $" << *nuevoSaldo;
        cout <<"\n";
        
    }
}

void banco::setDepositar(double d)
{
    *deposito = d;
    *nuevoSaldo = *saldo + d;
    cout << "\n Su nuevo saldo es: $" <<*nuevoSaldo;
    cout<<"\n";
}

void banco::setSaldo(double s)
{
    *saldo = s;
}

void banco::setNoCuenta(double n)
{
    *numeroCuenta = n;
}


double banco:: getDepositar() const
{
    return *deposito;
}
double banco:: getNoCuenta() const
{
    return *numeroCuenta;
}
double banco:: getSaldo() const
{
    return *saldo;
}
double banco:: getRetirar() const
{
    return *retiro;
}
double banco:: getNuevoSaldo() const
{
    return *nuevoSaldo;
}