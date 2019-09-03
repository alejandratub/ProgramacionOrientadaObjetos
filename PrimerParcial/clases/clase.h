#ifndef POO_H //si no está definido
#define POO_H //definirlo
//el compilador copia lo que teiene un archivo del include y copia todo el programa
//se pone el #ifndef y #define para que no se copie todo 
class A
{
    public:
    A();//es un constructor es una funcion miembro especial que nos permite declarar e inicializar los atributos o vriables
    A(n¡int a, int constante);
    void printValues();
    
    private:
    int a;
    const int b = 0;
    // b es una constante, tiene un valor no modificable, es una variable fija y hay que definirla dentro de la clase
};

#endif
//los constructores de dividen en tres:
        //*Default (no lleva parametros)
        //*Con parámetros (le estamos pasando los dos valores enteros)
        //*Copy constructor (hace una copia de los constructores y no se define dentro de la clase)

//Si declaramos mas de una clase dentro de un .h pierde todo el sentido, cada .h tirnr una sola clase por funcionalidad
// si no ocupa todas las clases esta copiando información innecesaria 
//si tienes dos insa¡tancias d ela misma clase se usa en un solo .h, 
//pero si necesitas dos clases diferentes para tu programa es necesario hacer dos .h diferentes
