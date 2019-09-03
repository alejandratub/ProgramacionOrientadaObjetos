#include "Almacen.h"
#include "Vehiculo.h"
#include "Compus.h"

int main()
{
    Almacen<Vehiculo> a;
    Vehiculo v1("bocho", 2016);
    Vehiculo v2("audi", 2015);
    Vehiculo v3("meche", 2014);
    
    Almacen<int> enteros;
    
    int cinco = 5;
    int seis = 6;
    enteros.add(&cinco);
    enteros.add(&seis);
    
    cout << "\n\nALMACEN DE ENTEROS" << endl;
    enteros.print();
    
    a.add(&v1);
    a.add(&v2);
    a.add(&v3);
    
    cout << "\nALMACEN DE VEHÍCULOS" << endl;
    a.print();
    
    cout << "\n\nALMACEN DE COMPUTADORAS" << endl;
    
    Almacen<Computadora> ac;
    Computadora c1("IBM", "Lenovo", 100, 10);
    Computadora c2("HP", "ENVY", 500, 6);
    Computadora c3("MAC", "AIR", 1000, 8);
    
    
    
    ac.add(&c1);
    ac.add(&c2);
    ac.add(&c3);
    
    ac.print();
    
    cout << endl;
    
    
    return 0;
}