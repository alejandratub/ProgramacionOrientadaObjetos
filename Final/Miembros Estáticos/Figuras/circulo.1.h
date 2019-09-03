#ifndef _CIRCLE
#define _CIRCLE

class CIRCULO
{
    public:
        CIRCULO(double);
         ~CIRCULO();  
         
        void perimetroCirculo();
        void areaCirculo();
        void imprimir();
        void setValores(double);
        static int getCantidad();
        
    private:
        double * radio;
        double * area;
        double * perimetro;
        static const double pi;
        
        static int cantidadCirculos;
};


#endif