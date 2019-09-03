#include<iostream>

using namespace std;

#ifndef ALMACEN
#define ALMACEN

template<class Producto>
class Almacen
{
    int size;
    Producto** array;
    int current_position;
public:
    Almacen();
    void add(Producto*);
    void eliminar(Producto*);
    void print();
};

#endif

template<class Producto>
Almacen<Producto>::Almacen()
{
    size = 100;
    array = new Producto*[size];
    current_position = 0;
}

template<class Producto>
void Almacen<Producto>::add(Producto* p)
{
    if(current_position >= size)
    {
        cout << "no hay espacio para almacenar";
        return;
    }
    array[current_position++] = p;
    return;
}

/*template<>
void Almacen<int>::add(int* p)
{
    if(current_position >= size)
    {
        cout << "no hay espacio para almacenar";
        return;
    }
    array[current_position++] = p;
    return;
}*/

template<class Producto>
void Almacen<Producto>::eliminar(Producto* p)
{
    
}

template<class Producto>
void Almacen<Producto>::print()
{
    for(int i=0; i<current_position; i++)
    {
        array[i]->print();
    }
}

template<>
void Almacen<int>::print()
{
    for(int i=0; i<current_position; i++)
        cout << "num: " << *(array[i]) << endl;
}