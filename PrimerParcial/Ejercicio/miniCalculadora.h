#ifndef CALCULADORA_
#define CALCULADORA_

class MiniCalculadora
{
  private:
  int operando1;
  int operando2;
  int resultado;
  
  public:
  MiniCalculadora();
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