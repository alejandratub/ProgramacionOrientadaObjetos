#ifndef CALCULADORA_
#define CALCULADORA_
// misma calculadora pero con apuntadores
class Calculadora
{
  private:
  int *operando1;
  int *operando2;
  int *resultado;
  
  public:
  Calculadora();
  ~Calculadora(); //cada new int necesita un delete por eso se usa el destructor
  int suma(int, int);
  int resta(int, int);
  int getOperando1(); //el get es para obtener el valor de los atributos privados
  int getOperando2();
  int getResultado();
  void setOperando1(int); //el set es para darle valor a los atributos privados 
  void setOperando2(int);
  void imprimirValores();
};

#endif 