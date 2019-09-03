#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

#include "personaje.h"
#include "humano.h"
#include "orco.h"

using namespace std;


int main(){
    
    
    int opc1 = 0, opc2 = 0, opc3 = 0;
    int num1 = 0, num2 = 0;
    srand(time(NULL));
    
    //////PERSONAJES/////
    
    //HUMANO humano(velocidad, fuerza, vida, magia)
    HUMANO player1(0,0,0,0);
    HUMANO guerrero(25,50,50,10);
    HUMANO mago(10,20,50,50);
    HUMANO arquero(30,30,50,5);
    
    //ORCO orco(velocidad, fuerza, vida)
    ORCO player2(0,0,0);
    ORCO urukhai(50,50,50);
    ORCO comun(35,40,50);
    
    
    do{
        num1 = 1 + rand() % (3 - 1);
        
        cout <<"\t...::::VIDEOJUEGO::::..." << endl;   
        cout <<"\tEstimado usuario, ¿qué humano deseas ser?" << endl;
        cout <<"\t\t01. Guerrero.\n\t\t02. Mago.\n\t\t03. Arquero." << endl;
        cout <<"\n\tIngresa tu opción(1/3): ";
                
        cin >> opc1;
                    
            switch (opc1){
                case 1: player1 = guerrero; cout << "\n\t..::JUGADOR DEL USUARIO: HUMANO - GUERRERO::.."; break;
                case 2: player1 = mago; cout << "\n\t..::JUGADOR DEL USUARIO: HUMANO - MAGO::.."; break;
                case 3: player1 = arquero; cout << "\n\t..::JUGADOR DEL USUARIO: HUMANO - ARQUERO::.."; break;
                default: cout << "\n\tERROR. Intente de nuevo"; break;
            }
        player1.print_datos();
        
        
    
        if (num1 == 1){ player2 = urukhai; cout << "\n\t..::JUGADOR DEL CPU: ORCO - URUKHAI::.."; }
        if (num1 == 2){ player2 = comun; cout << "\n\t..::JUGADOR DEL CPU: ORCO - COMUN::.."; }
        
        player2.print_datos();
        
        int i = 0;
        do{
            int vida_usuario, vida_cpu;
            int opc_cpu, opc_cpu_fv;
            
            cout << "\n\t-------------------------------\n";
            cout << "\t...::::MENÚ::::..."; 
            cout << "\n\t¿Qué deseas realizar?" << endl;
            cout << "\t\t01. Ataque.\n\t\t02. Esquivar ataque.\n\t\t03. Aumentar vida." << endl;
            cout << "\n\tIngresa tu opción(1/3): ";
        
            cin >> opc2;
            
            
            float ataque_usuario;
            float ataque_cpu;
            float aumento_vida;
            
            cout << "\n\t::::::TURNO DEL USUARIO::::::";
            switch (opc2){
                case 1:
                    cout << "\n\t--------ATAQUE AL CPU!--------" << endl;
                    ataque_usuario = player1.ataque();
                    player2.recibir_ataque(ataque_usuario);
                break;
                
                case 2:
                    cout << "\n\t--------ATAQUE DEL CPU ESQUIVADO!--------" << endl;
                    player1.esquivar_ataque(ataque_cpu);
                break;
                
                case 3:
                    cout <<"\n\t--------¡HAS DECIDIDO AUMENTAR VIDAS!--------"<<endl<<endl;
                        if (i >= 10){
                            aumento_vida = player1.get_vida();
                            cout << "\n\t*Se ha realizado el aumento de vida a: " << aumento_vida;
                        }
                        else{
                            cout << "\n\t*Lo sentimos, aún no podemos aumentarte vidas porque no han pasado los 10 turnos." << endl;
                        }
                break;
                
                default: 
                    cout << "\nERROR. Intente de nuevo"; 
                break;
            }
            
            num2 = 1 + rand() % (4 - 1);
            opc_cpu = num2;
            cout << "\n\t::::::::TURNO DEL CPU::::::::";
            switch (opc_cpu){
                case 1:
                    cout << "\n\t--------ATAQUE AL USUARIO!--------" << endl;
                    ataque_cpu = player2.ataque();
                    player1.recibir_ataque(ataque_cpu);
                break;
                
                case 2:
                    cout << "\n\t--------ATAQUE DEL USUARIO ESQUIVADO!--------" << endl;
                    player2.esquivar_ataque(ataque_usuario);
                break;
                
                case 3:
                    cout << "\n\t--------INTERCAMBIO DE FUERZA Y VELOCIDAD DEL CPU--------" << endl;
                    player2.int_fuerza_vel();
                break;
                
                default: 
                    cout << "\n\t*ERROR. Intente de nuevo"; 
                break;
            }
            cout << "\n\t*El valor de vida del USUARIO es: " << player1.get_vida() << endl;
            cout << "\t*El valor de vida del CPU es: " << player2.get_vida();
            i++;
        }
        while(player1.get_vida() > 0 && player2.get_vida() > 0);
            
        cout << "\n\n\t*¿Desea volver a realizar este ejercicio? (1/0): ";
        cin >> opc3;
        
        cout << endl;
        cout << endl;
    }
while (opc3 == 1);
}
