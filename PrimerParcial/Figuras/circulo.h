#ifndef CIRCULO_
#define CIRCULO_

class CIRCULO
{
    public:
    CIRCULO(double);
    CIRCULO(const CIRCULO &obj); //con const aseguro que mis datos no van a ser modificados
    //cuando estas en el main creando objetos y copio un objeto de tipo apuntador, hace referancia a un espacio
    ~CIRCULO();
    void perimetroCIRCULO();
    void areaCIRCULO();
    void imprimirAreaCIRCULO();
    void imprimirPerimetroCIRCULO();
    void setValoresCIRCULO(double);
    //int getRadio() const;
    
        private:
    
        double  *radio;
        const float pi = 3.1416;
        double *area; //aqui voy a guardar mi operación para caluclar el area
        double *perimetro;
};

#endif