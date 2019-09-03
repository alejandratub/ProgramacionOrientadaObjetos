//este tiene la funcionalidad

#include <iostream>
#include "clase.h"

using namespace std;

/*A::A() //declaración del constructor por Default porque lo paso sin parámetros se puede remplazar por el siguiente A::A() : a(10) {}
{
    a = 10; //solo puedo inicializar variables, si le trato de dar un valor a b (constaante) me va a marcar error
}*/


//este es el más optimo 
A::A() : a(10) {} //declarción de constructor con dos parámetros, a la variable a le doy el valor de 10 
// si aquí trato de inicializar una constante como si fuera variable 

A::A(int a, int constante) : a(a), b(constante){} //declaración del constructor Con Parámetros

void A::printValues() // esta es otrs función 
{
    cout << a << " " << b << endl; // te va aimprimir lo que contiene el constructor (en este caso lo que contiene a en A (10))
}