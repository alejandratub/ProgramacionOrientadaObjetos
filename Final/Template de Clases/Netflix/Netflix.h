#include<iostream>

using namespace std;

#ifndef NETFLIX
#define NETFLIX

template<class Producto>
class Netflix
{
    int size;
    Producto** array;
    int current_position;
public:
    Netflix();
    void add(Producto*);
    void eliminar(Producto*);
    void print();
};

#endif

template<class Producto>
Netflix<Producto>::Netflix()
{
    size = 100;
    array = new Producto*[size];
    current_position = 0;
}

template<class Producto>
void Netflix<Producto>::add(Producto* p)

{
    if(current_position >= size)
    {
        cout << "no hay espacio para almacenar";
        return;
    }
    array[current_position++] = p;
    return;
}

template<class Producto>
void Netflix<Producto>::eliminar(Producto* p)
{
    
}

template<class Producto>
void Netflix<Producto>::print()
{
    for(int i=0; i<current_position; i++)
    {
        array[i]->print();
    }
}

template<>
void Netflix<int>::print()
{
    for(int i=0; i<current_position; i++)
        cout << "num: " << *(array[i]) << endl;
}