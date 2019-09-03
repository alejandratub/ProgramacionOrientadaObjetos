#ifndef NUM
#define NUM

class Numeros
{
    public:
    Numeros();
    Numeros(double);
    ~Numeros();
    
    Numeros operator+(const Numeros &num);
    Numeros operator-(const Numeros &num);
    Numeros operator*(const Numeros &num);
    Numeros operator/(const Numeros &num);
    double getNum() const;
    
    private:
    double numero;
};
#endif