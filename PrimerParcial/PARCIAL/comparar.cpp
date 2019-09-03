#include <iostream>
using namespace std;
template <class tipo> 


tipo comparar(tipo a, tipo b){
        int resultado = 0;


        if (a > b) //va a comparar los numeros a y b, si a es mayor que b entoces
        {
            resultado = a; //resultado va a ser a 
        }
        if (b > a) // va a comparar los numeros a y b, si b es mayor que a entonces
        {
            resultado = b; //resultado va a ser b
        }
        
        return resultado; //regrersar el resultado para poder usarlo después
}
    
int main ()
{
    cout<<"\n Ingrese los numeros a comprar\n";
    int menor = 0; //inicializo mis variables
    int num=0;
    int b = 0;
  
    cin >> num; // El usuario ingresa los numeros que quiere comparar
    while (num>= 0){ // mientras el numero ingresado sea mayor o igual a cero 
        cin >> b;//Ingresar otro numero
        if (num > 0) // si el numero es mayor que cero 
        { 
            menor = num; // se guarda el numero en una variable
        }
        if (b< 0) // si el menor es mayor que cero
        {
            menor = menor; // el numero menor se queda igual
            break; 
        }
        else 
        {
        menor = comparar(menor, b); //llamar al template
        }
    }
    cout << "\n El numero menor es: "<< menor <<"\n";
}