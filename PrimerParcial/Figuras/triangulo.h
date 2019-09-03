#ifndef TRIANGULO_
#define TRIANGULO_

class TRIANGULO
{
    public:
    TRIANGULO(double,double,double);
    TRIANGULO(const TRIANGULO &obj);
     ~TRIANGULO();
    void perimetroTRIANGULO();
    void areaTRIANGULO();
    void imprimirAreaTRIANGULO();
    void imprimirPerimetroTRIANGULO();
    void setValoresTRIANGULO(double, double, double);
    
    private:
        double *base;
        double *altura;
        double *lado;
        double *area;
        double *perimetro;
};

#endif