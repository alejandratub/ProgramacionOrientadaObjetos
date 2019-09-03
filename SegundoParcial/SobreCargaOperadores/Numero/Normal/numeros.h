#ifndef NUMEROS_H
#define NUMEROS_H

class Numeros
{
    public:
    Numeros();
    Numeros(double);
    ~Numeros();

    Numeros operator+(Numeros);
    Numeros operator-(Numeros);
    Numeros operator*(Numeros);
    Numeros operator/(Numeros);
    
    double getNumero();
    
    private:
    double numero;
};

#endif