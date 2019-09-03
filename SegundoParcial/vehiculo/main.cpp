#include <iostream>
#include <string>

using namespace std;

#include "vehiculo.h"
#include "convertible.h"
#include "deportivos.h"
#include "sedanes.h"
#include "hibrido.h"

int main()
{
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
     
     cout << "*****AGENCIA*****" << endl;
     cout <<"Ingresa los datos del vehículo:" << endl;
     cout<<"Empresa creadora:" << endl;
     cin >>  nomManufactura;
        cout<<"Modelo:"  << endl;
        cin >> nomModelo;
        cout<<"Año del modelo:" << endl;
        cin >> anio;
        cout<<"Color del modelo:"  << endl;
        cin >> color;
        cout<<"Número de pasajeros:"  << endl;
        cin >> numPasajeros;
        cout<<"Número de puertas:"  << endl;
        cin >>  numPuertas;
        cout<<"Precio:"  << endl;
        cin>>  precio;
        cout<<"Kilometraje:" << endl;
        cin >> kilometraje ;
        cout<<"Estándar/Automático:" << endl;
        cin >> tipo;
        cout<<"Estado:" << endl;
        cin >> estado;
        cout << endl;
        cout << endl;
        
        cout << "***********************"<< endl;
        cout << "Ingresa el tipo de auto:" << endl;
        cout << "\t1. Converible \n\t2. Deportivo \n\t3.Sedan \n\t4. Hibrido" << endl;
        cin >> opc;
        
    
            if(opc == 1)
            {
            
            cout << "CONVERIBLE" << endl;
            
            cout << "Ingrese el estado del techo: (Abierto/Cerrado)" << endl;
            cin >> techo;
            
            cout << "Ingrese el tipo de techo: (Rigido/Piel)" << endl;
            cin >> tipoTecho;
            
            Convertible convertible1(nomManufactura,nomModelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado,techo,tipoTecho);
            convertible1.imprimir();
            convertible1.imprimirPrecio();
            convertible1.servicio();
            convertible1.setAnio(anio);
            }
            
            if(opc == 2)
            {
            
            cout << "DEPORTIVO" << endl;
            
            cout << "Ingrese el estado del turbo: (Activado/Desactivado)" << endl;
            cin >> turbo;
            
            cout << "Ingrese la potencia: " << endl;
            cin >> potencia;
            
            Deportivo deportivo1(nomManufactura,nomModelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado,turbo,potencia);
            deportivo1.imprimir();
            deportivo1.imprimirPrecio();
            deportivo1.servicio();
            deportivo1.setAnio(anio);
            
            }
            
            if(opc ==3)
            {
            
            cout << "SEDAN" << endl;
            
            Sedanes sedan1(nomManufactura,nomModelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado);
            sedan1.imprimir();
            sedan1.imprimirPrecio();
            sedan1.servicio();
            sedan1.setAnio(anio);
            
            }
            
            if(opc == 4)
            {
            
            cout << "HIBRIDO" << endl;
            
            cout << "Ingrese el modo en el que se encuentra: (Flotando/Andando)" << endl;
            cin >> modo;
            Hibrido hibrido1(nomManufactura,nomModelo,anio,color,numPasajeros,numPuertas,precio,kilometraje,tipo,estado, modo);
            hibrido1.imprimir();
            hibrido1.imprimirPrecio();
            hibrido1.servicio();
            hibrido1.setAnio(anio);
            
            }
            
        
}