#ifndef PILOTO_
#define PILOTO_ 

#include <string>

using std::string;

class PILOTO
{
   public: 
    PILOTO();
    PILOTO(string, string, int, int, int);
    ~PILOTO();
    string getNombre() const;
    int getEdad();
    
   private:
    string nombre;
    string apellido;
    int edad;
    int identificador;
    
};
#endif 