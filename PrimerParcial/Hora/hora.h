#ifndef HORA
#define HORA

class HORA
{
 public: //métodos públicos y atributos privados
 HORA(){}
 HORA(int hora, int minuto, int segundo);
 void print_Militar();
 void print_Estandar();
 int establecer_hora();
 
 private: 
 int hora;
 int minuto;
 int segundo;
};
#endif