#ifndef CUADRADO_
#define CUADRADO_

class CUADRADO
{
    public:
    CUADRADO(double);
    CUADRADO (const CUADRADO &obj);
    ~CUADRADO();
    
    void perimetroCUADRADO();
    void areaCUADRADO();
    void imprimirAreaCUADRADO();
    void imprimirPerimetroCUADRADO();
    void setValoresCUADRADO(double);
    
    private:
        double  *lado;
        double  *area;
        double  *perimetro;
    
};
#endif