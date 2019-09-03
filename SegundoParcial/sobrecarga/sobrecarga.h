#ifndef FIGURA
#define FIGURA

class Figura
{
    public:
    Figura();
    ~Figura();
    float area(float);
    float area(float, float);
    float  area(float, float, float);
    
    private:
    float pi = 3.1416;
};
#endif
