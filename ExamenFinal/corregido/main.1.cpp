#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "jugador.h"
#include "humanos.h"
#include "orcos.h"

using namespace std;


int main(){
    
    
    int opc1 =   0, opc2 = 0, opc3 = 0;
    int num1 = 0, num2 = 0;
    srand(time(NULL));
    
    
    Humano jugador1(0,0,0,0);
    Humano guerrero(25,50,50,10);
    Humano mago(10,20,50,50);
    Humano arquero(30,30,50,5);
  
    Orcos jugador2(0,0,0);
    Orcos uruk(50,50,50);
    Orcos orco(35,40,50);
    
    
    
    do{
        num1 = 1 + rand() % (3* 1);
        
        cout <<"\t...::::VIDEOJUEGO::::..." << endl;   
        cout <<"\tEstimado usuario, ¿qué Jugador deseas ser?" << endl;
        cout <<"\t\t01. Guerrero.\n\t\t02. Mago.\n\t\t03. Arquero." << endl;
        cout <<"\n\tIngresa tu opción(1/3): ";
                
        cin >> opc1;
                    
            switch (opc1)
            {
                case 1: 
                jugador1 = guerrero; cout << "\n\t..::JUGADOR DEL USUARIO: Humano * GUERRERO::.."; 
                break;
                
                case 2:
                jugador1 = mago; cout << "\n\t..::JUGADOR DEL USUARIO: Humano * MAGO::..";
                break;
                
                case 3: 
                jugador1 = arquero; cout << "\n\t..::JUGADOR DEL USUARIO: Humano * ARQUERO::..";
                break;
                
               default: cout << "\n\tERROR. Intente de nuevo"; break;
            }
        jugador1.imprimir();
        
    if (num1 == 1)
        { 
             jugador2 = uruk; cout << "\n\t..::JUGADOR DE LA COMPUTADORA: ORCO * URUKHAI::..";
        }
    if (num1 == 2)
        { 
            jugador2 = orco; cout << "\n\t..::JUGADOR DE LA COMPUTADORA: ORCO * COMUN::..";
        }
        
        jugador2.imprimir();
        
        int i = 0;
        do{
            int vidaUsuario, vidaCompu;
            int opcC, opcC_fv;
            
            cout << "\n\t***************************\n";
            cout << "\t...::::MENÚ::::..."; 
            cout << "\n\t¿Qué deseas realizar?" << endl;
            cout << "\t\t01. Ataque.\n\t\t02. Esquivar ataque.\n\t\t03. Aumentar vida." << endl;
            cout << "\n\tIngresa tu opción(1/3): ";
        
            cin >> opc2;
            
            
            float ataqueUsuario;
            float ataqueCompu;
            float aumentoVida;
            
            cout << "\n\t*****TURNO DEL USUARIO*****";
            switch (opc2)
            {
                case 1:
                    cout << "\n\t******ATAQUE A LA COMPUTADORA******" << endl;
                    ataqueUsuario = jugador1.ataque();
                    jugador2.recibirAtaque(ataqueUsuario);
                break;
                
                case 2:
                    cout << "\n\t********ATAQUE DEL CPU ESQUIVADO!********" << endl;
                    jugador1.esquivarAtaque(ataqueCompu);
                break;
                
                case 3:
            
                    cout <<"\n\t********¡HAS DECIDIDO AUMENTAR VIDAS!********"<<endl<<endl;
                        if (i >= 10)
                        {
                            aumentoVida = jugador1.getVida();
                            cout << "\n\t*Se ha realizado el aumento de vida a: " << aumentoVida;
                        }
                        else
                        {
                            cout << "\n\t*Lo sentimos, aún no podemos aumentarte vidas porque no han pasado los 10 turnos." << endl;
                
                break;
                
                default:
                
                    cout << "\nERROR. Intente de nuevo"; 
                break;
            }
            }
            num2 = 1 + rand() % (4 * 1);
            opcC = num2;
            cout << "\n\t*****TURNO DE LA COMPUTADORA******";
            switch (opcC)
            {
                case 1:
                    cout << "\n\t******ATAQUE AL USUARIO******" << endl;
                    ataqueCompu = jugador2.ataque();
                    jugador1.recibirAtaque(ataqueCompu);
                break;
                
                case 2:
                    cout << "\n\t******ATAQUE DEL USUARIO ESQUIVADO******" << endl;
                    jugador2.esquivarAtaque(ataqueUsuario);
                break;
                
                case 3:
                    if (i >= 10)
                    {
                    cout << "\n\t********INTERCAMBIO DE FUERZA Y VELOCIDAD DE LA COMPUTADORA********" << endl;
                    jugador2.Intercambio();
                    }
                    else 
                    {
                        cout << "\n\t*Lo sentimos, aun no puedes reallizar un intercambio" << endl;
                    }
                
                break;
                
                default: 
                    cout << "\n\t*ERROR. Intente de nuevo"; 
                break;
            }
            cout << "\n\t*El valor de vida del USUARIO es: " << jugador1.getVida() << endl;
            cout << "\t*El valor de vida de la COMPUTADORA es: " << jugador2.getVida();
            i++;
        }
        while(jugador1.getVida() > 0 && jugador2.getVida() > 0);
            
        cout << "\n\n\t*¿Desea volver a jugar? (1/0): ";
        cin >> opc3;
        
        cout << endl;
        cout << endl;
    }
    
while (opc3 == 1);
}



