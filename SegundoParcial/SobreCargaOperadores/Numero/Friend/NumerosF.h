#include <iostream>
#ifndef NUMERO_
#define NUMERO_

using namespace std;

class NUMERO
{
    friend ostream& operator<<(ostream &salida, const NUMERO &num2);
    friend istream& operator >>(istream &entrada, NUMERO &num2);
    
    friend NUMERO operator+(const NUMERO &num1, const NUMERO &num2);
    friend NUMERO operator-(const NUMERO &num1, const NUMERO &num2);
    friend NUMERO operator*(const NUMERO &num1, const NUMERO &num2);
    friend NUMERO operator/(const NUMERO &num1, const NUMERO &num2);
    public:
    NUMERO();
    NUMERO(double);
    ~NUMERO();
    
    void getNum(double numero) ;
    
    private:
    double numero;
};
#endif