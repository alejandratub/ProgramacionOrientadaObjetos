
#include <iostream>
#include <string>

#include "vehiculo.h"
#include "convertible.h"
#include "deportivos.h"
#include "sedanes.h"
#include "hibrido.h"

using namespace std;

int main(){
    
    string nomManufactura;
    string nomModelo;
    int anio;
    string color;
    int numPasajeros;
    int numPuertas;
    float precio;
    float kilometraje;
    string tipo; //automático o estandar
    string estado; //nuevo o usado
    string techo;
    string tipoTecho;
    bool turbo;
    double potencia;
     string modo; //flotar o andar
    
    int opc;

    cout <<"\t...::::AGENCIA::::..." << endl;   
    cout<<"\n\t¿Qué tipo de auto es el que solicitas?: ";
    cout<<"\n\t\t1. Convertible.\n\t\t2. Deportivo.\n\t\t3. Sedán.\n\t\t4. Híbrido";
     cout <<"\n\n\t\tIngresa tu opción(1/4): ";
    cin >> opc;
    
        cout <<"\n\tIngresa los datos de tu auto";
        cout<<"\n\t-Empresa creadora: ";
        cin >> nomManufactura;
        cout<<"\t-Modelo: ";
        cin >> nomModelo;
        cout<<"\t-Año del modelo: ";
        cin >> anio;
        cout<<"\t-Color del modelo: ";
        cin >> color;
        cout<<"\t-Número de pasajeros: ";
        cin >> numPasajeros;
        cout<<"\t-Número de puertas: ";
        cin >> numPuertas;
        cout<<"\t-Precio: $";
        cin >> precio;
        cout<<"\t-Kilometraje (0/100,000): ";
        cin >> kilometraje;
        cout<<"\t-Modo (Estándar/Automático): ";
        cin >> tipo;
        cout<<"\t-Estado (Nuevo/Viejo): ";
        cin >> estado;
        
        
        if (opc==1)
        {
            cout << "\n\t¿Está techado? (1/0): ";
            cin >> techo;
    
            if (techo == 0)
            {
                techo = false;
            }
            
            else
            {
                techo = true;
            }
            
            cout << "\tTipo del techado (Rígido/Piel): ";
            cin >> tipoTecho;
            
            cout <<"\n\n\t...::::CONVERTIBLE::::..." << endl;
           
            Convertible convertible1(nomManufactura,nomModelomodelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado,techo,tipoTecho);
                convertible1.imprimir();
                convertible1.imprimirPrecio();
                convertible1.servicio();
        }
        
        if (opc==2)
        {
            cout << "\n\t¿Es turbo? (1/0): ";
            cin >> turbo;
            
            if (turbo == 0)
            {
                turbo = false;
            }
            
            else
            {
                turbo = true;
            }
    
            cout << "\tIngresa la potencia del turbocompresor: ";
            cin >> potencia;
            
            cout <<"\n\n\t...::::DEPORTIVO::::..." << endl;
            //OBJETO deportivo(Marca,Modelo,Año,Color,No_Pasajeros,No_Puertas,Precio,Kilometraje,Estándar/Automático,Nuevo/Usado,Turbo, Potencia)
            Deportivo deportivo1(nomManufactura,nomModelomodelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estadoturbo,potencia);
                deportivo1.imprimir();
                deportivo1.imprimirPrecioprecio();
                deportivo1.servicio();
        }
        
        if (opc==3)
        {
            
            cout <<"\n\n\t...::::SEDÁN::::..." << endl;
            //OBJETO sedan(Marca,Modelo,Año,Color,No_Pasajeros,No_Puertas,Precio,Kilometraje,Estándar/Automático,Nuevo/Usado)
            Sedanes sedan1(nomManufactura,nomModelomodelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado);
                sedan1.imprimir();
                sedan1.imprimirPrecio();
                sedan1.servicio();
        }
        
        if (opc==4)
        {
            cout <<"\n\tIngresa el modo del híbrido (Tierra/Agua): ";
            cin >> modo;
            
            cout <<"\n\n\t...::::HÍBRIDO::::..." << endl;
            //OBJETO hibrido(Marca,Modelo,Año,Color,No_Pasajeros,No_Puertas,Precio,Kilometraje,Estándar/Automático,Nuevo/Usado,Tierra/Agua)
            Hibrido hibrido1(nomManufactura,nomModelomodelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado,modo);
                hibrido1.imprimir();
                hibrido1.imprimirPrecio();
                hibrido1.servicio();
        }
        


cout << endl;
cout << endl;
}
