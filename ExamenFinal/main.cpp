#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

#include "jugador.h"
#include "arqueros.h"
#include "magos.h"
#include "guerreros.h"
#include "uruk.h"
#include "orcosc.h"

int main()
{
    int vida = 50;
    int fuerza;
    int magia;
    int velocidad;
    int decision;
    int opc;
    int op;
    int o;
    int contador;
    int a;
    int b;
    int c;
    int d;
    int e;
    
    Guerreros g1(5, 50, 10, 25);
    Guerreros g2(5, 50, 10, 25);
    
    Magos m1(5, 20, 50, 10);
    Magos m2(5, 20, 50, 10);
    
    Arqueros a1(5, 30, 5, 30);
    Arqueros a2(5, 30, 5, 30);
    
    Uruk u1(5, 50, 50);
    Uruk u2(5, 50, 50);
    
    OrcosC o1(5, 40,35);
    OrcosC o2(5,40,35);
    
    cout << "*****BIENVENIDO*****" << endl;
    cout << "Seleccione un Jugador" << endl;
    cout << "\n\t 1.Guerrero \n\t 2.Arquero \n\t 3.Mago \n\t 4. Uruk-hai \n\t 5.Orco Común " << endl;
    cin >> opc;
    srand(time(NULL));
    o = rand()%5;
    /*cout << "Seleccione un jugador para la computadora"
    cout << "\n\t 1.Guerrero \n\t 2.Arquero \n\t 3.Mago \n\t 4. Uruk-hai \n\t 5.Orco Común " << endl;
    cin << o;*/
    
    switch(opc)
    {
        case 1:
        cout << "Selccionó Guerrero " << endl;
        
        
        g1.print();
        
        if(o == 0)
        {
             cout << "Selccionó Guerrero para la computadora " << endl;
             g2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     g1.Ataque();
                 }
                 else 
                 {
                
                     g1.Esquivar(ataque);
                 }
            
            cout << "NIVELES " << endl;
            g1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                g2.Esquivar(ataque);
            }
            else 
            {
                g2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            g2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                g1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    g2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        if(o == 1 )
        {
            {
             cout << "Selccionó Arquero para la computadora " << endl;
             a2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     g1.Ataque();
                 }
                 else 
                 {
                     g1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            g1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                a2.Esquivar(ataque);
            }
            else 
            {
                a2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            a2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                g1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    a2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        
        if(o == 2)
        {
            {
            {
             cout << "Selccionó Mago para la computadora " << endl;
             m2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     g1.Ataque();
                 }
                 else 
                 {
                     g1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            g1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                m2.Esquivar(ataque);
            }
            else 
            {
                m2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            m2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                g1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    m2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 3)
        {
            {
            {
             cout << "Selccionó Uruk-hai para la computadora " << endl;
             u2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     g1.Ataque();
                 }
                 else 
                 {
                     g1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            g1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                u2.Esquivar(ataque);
            }
            else 
            {
                u2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            u2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                g1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    u2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio" << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 4)
        {
            {
            {
             cout << "Selccionó Orco Comun para la computadora " << endl;
             o2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     g1.Ataque();
                 }
                 else 
                 {
                     g1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            g1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                o2.Esquivar(ataque);
            }
            else 
            {
                o2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            o2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                g1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    o2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio" << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        break;
        
        case 2:
        cout << "Selecciono Arquero " << endl;
        a1.print();
        if(o == 0)
        {
             cout << "Selccionó Guerrero para la computadora " << endl;
             g2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     a1.Ataque();
                 }
                 else 
                 {
                     a1.Esquivar(ataque);
                 }
            
            cout << "NIVELES " << endl;
            a1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                g2.Esquivar(ataque);
            }
            else 
            {
                g2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            g2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                a1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    g2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        if(o == 1 )
        {
            {
             cout << "Selccionó Arquero para la computadora " << endl;
             a2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     a1.Ataque();
                 }
                 else 
                 {
                     a1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            a1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                a2.Esquivar(ataque);
            }
            else 
            {
                a2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            a2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                a1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    a2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        
        if(o == 2)
        {
            {
            {
             cout << "Selccionó Mago para la computadora " << endl;
             m2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     a1.Ataque();
                 }
                 else 
                 {
                     a1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            a1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                m2.Esquivar(ataque);
            }
            else 
            {
                m2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            m2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                a1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    m2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 3)
        {
            {
            {
             cout << "Selccionó Uruk-hai para la computadora " << endl;
             u2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     a1.Ataque();
                 }
                 else 
                 {
                     a1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            a1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                u2.Esquivar(ataque);
            }
            else 
            {
                u2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            u2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                a1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    u2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio" << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 4)
        {
            {
            {
             cout << "Selccionó Orco Comun para la computadora " << endl;
             o2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     a1.Ataque();
                 }
                 else 
                 {
                     a1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            a1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                o2.Esquivar(ataque);
            }
            else 
            {
                o2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            o2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                a1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    o2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        break;
        case 3:
        cout << "Selecciono Mago " << endl;
        m1.print();
        
        if(o == 0)
        {
             cout << "Selccionó Guerrero para la computadora " << endl;
             g2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     m1.Ataque();
                 }
                 else 
                 {
                     m1.Esquivar(ataque);
                 }
            
            cout << "NIVELES " << endl;
            m1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                g2.Esquivar(ataque);
            }
            else 
            {
                g2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            g2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                m1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    g2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        if(o == 1 )
        {
            {
             cout << "Selccionó Arquero para la computadora " << endl;
             a2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     m1.Ataque();
                 }
                 else 
                 {
                     m1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            m1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                a2.Esquivar(ataque);
            }
            else 
            {
                a2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            a2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                m1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    a2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        
        if(o == 2)
        {
            {
            {
             cout << "Selccionó Mago para la computadora " << endl;
             m2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     m1.Ataque();
                 }
                 else 
                 {
                     m1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            m1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                m2.Esquivar(ataque);
            }
            else 
            {
                m2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            m2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                m1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    m2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 3)
        {
            {
            {
             cout << "Selccionó Uruk-hai para la computadora " << endl;
             u2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     m1.Ataque();
                 }
                 else 
                 {
                     m1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            m1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                u2.Esquivar(ataque);
            }
            else 
            {
                u2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            u2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                m1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    u2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 4)
        {
            {
            {
             cout << "Selccionó Orco Comun para la computadora " << endl;
             o2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     m1.Ataque();
                 }
                 else 
                 {
                     m1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            m1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                o2.Esquivar(ataque);
            }
            else 
            {
                o2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            o2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea aumentar una vida sacrificando un punto de magia? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                m1.AumentoVida();
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    o2.Intercambio(decision);
                    cout << "La computadora reliazó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        break;
        
        case 4:
        cout << "Selecciono Urik-hai " << endl;
        u1.print();
        if(o == 0)
        {
             cout << "Selccionó Guerrero para la computadora " << endl;
             g2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     u1.Ataque();
                 }
                 else 
                 {
                     u1.Esquivar(ataque);
                 }
            
            cout << "NIVELES " << endl;
            u1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                g2.Esquivar(ataque);
            }
            else 
            {
                g2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            g2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                u1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    g2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        if(o == 1 )
        {
            {
             cout << "Selccionó Arquero para la computadora " << endl;
             a2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     u1.Ataque();
                 }
                 else 
                 {
                     u1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            u1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                a2.Esquivar(ataque);
            }
            else 
            {
                a2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            a2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                u1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    a2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        
        if(o == 2)
        {
            {
            {
             cout << "Selccionó Mago para la computadora " << endl;
             m2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     u1.Ataque();
                 }
                 else 
                 {
                     u1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            u1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                m2.Esquivar(ataque);
            }
            else 
            {
                m2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            m2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                u1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    m2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 3)
        {
            {
            {
             cout << "Selccionó Uruk-hai para la computadora " << endl;
             u2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     u1.Ataque();
                 }
                 else 
                 {
                     u1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            u1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                u2.Esquivar(ataque);
            }
            else 
            {
                u2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            u2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                u1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    u2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 4)
        {
            {
            {
             cout << "Selccionó Orco Comun para la computadora " << endl;
             o2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     u1.Ataque();
                 }
                 else 
                 {
                     u1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            u1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                o2.Esquivar(ataque);
            }
            else 
            {
                o2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            o2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                u1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    o2.Intercambio(decision);
                    cout << "La computadora reliazó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        break;
        
        case 5:
        cout << "Selecciono Orco Comun  " << endl;
        o1.print();
        if(o == 0)
        {
             cout << "Selccionó Guerrero para la computadora " << endl;
             g2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     o1.Ataque();
                 }
                 else 
                 {
                     o1.Esquivar(ataque);
                 }
            
            cout << "NIVELES " << endl;
            o1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                g2.Esquivar(ataque);
            }
            else 
            {
                g2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            g2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                o1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    g2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        if(o == 1 )
        {
            {
             cout << "Selccionó Arquero para la computadora " << endl;
             a2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     o1.Ataque();
                 }
                 else 
                 {
                     o1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            o1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                a2.Esquivar(ataque);
            }
            else 
            {
                a2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            a2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                o1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    a2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        
        if(o == 2)
        {
            {
            {
             cout << "Selccionó Mago para la computadora " << endl;
             m2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     o1.Ataque();
                 }
                 else 
                 {
                     o1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            o1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                m2.Esquivar(ataque);
            }
            else 
            {
                m2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            m2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                 cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                o1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                if(d == 0)
                {
                    m2.AumentoVida();
                    cout << "La computadora aumentó una vida " << endl;
                }
                else
                {
                    cout << "La computadora no aumentó una vida " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 3)
        {
            {
            {
             cout << "Selccionó Uruk-hai para la computadora " << endl;
             u2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     o1.Ataque();
                 }
                 else 
                 {
                     o1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            o1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                u2.Esquivar(ataque);
            }
            else 
            {
                u2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            u2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                o1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    u2.Intercambio(decision);
                    cout << "La computadora realizó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
        
        if(o == 4)
        {
            {
            {
             cout << "Selccionó Orco Comun para la computadora " << endl;
             o2.print();
             
             cout << "Inicia el juego " << endl;
             while(vida ==! 0)
             {
                 cout << "Turno del Jugador" << endl;
                 cout << "Escoja una opción: \n\t1.Atacar \n\t2.Esquivar ataque " << endl;
                 cin >> e;
                 if(e == '1')
                 {
                     o1.Ataque();
                 }
                 else 
                 {
                     o1.Esquivar(ataque);
                 }
            cout << "NIVELES " << endl;
            u1.print();
            
            cout << "Turno de computadora " << endl;
            srand(time(NULL));
            
            c = rand()%2;
            if(c == 0)
            {
                o2.Esquivar(ataque);
            }
            else 
            {
                o2.Ataque();
            }
            cout << "NIVELES DE LA COMPUTADORA " << endl;
            o2.print();
            contador++;
            if(contador == 10)
            {
                cout << "¿Desea realizar un intercamio entre fuerza y velocidad? si(1)/no(2) " << endl;
                cin >> a;
                if(a == '1')
                {
                    cout << "¿Qué desea aumentar? velocidad(1)/fuerza(2) " << endl;
                    cin >> decision;
                o1.Intercambio(decision);
                }
                
                srand(time(NULL));
                d = rand()%2;
                decision = rand()%1;
                if(d == 0)
                {
                    o2.Intercambio(decision);
                    cout << "La computadora reliazó un intercambio " << endl;
                }
                else
                {
                    cout << "La computadora no realizó un intercambio " << endl;
                }
            }
            
            }
            
        }
        }
        }
   break; 
}

