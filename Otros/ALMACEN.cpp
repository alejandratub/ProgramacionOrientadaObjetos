
#include <iostream>
#include <string>

#include "auto.h"
#include "convertible.h"
#include "deportivos.h"
#include "sedanes.h"
#include "hibrido.h"

using namespace std;

void print_datos(AUTO *arreglo){
    int tamano_arreglo = 4;
    int i;
    
    
    cout <<"\n\tID\tEMPRESA\t\tMODELO\t\tAÑO\t\tPRECIO($)\n";
        for(i = 0; i < tamano_arreglo; i++){
            cout <<"\t"<< i <<"\t";
            cout <<arreglo[i].getEmpresa() <<"\t\t";
            cout <<arreglo[i].getModelo() <<"\t\t";
            cout << arreglo[i].getAnio() <<"\t\t";
            cout <<"$ " << arreglo[i].getPrecio() <<"\t";
            cout <<"\n";
        }
}


int main(){
    int tamano_arreglo = 4;
    AUTO *autos = new AUTO[100];
    
    string empresa, modelo, color, modo, estado, tipo_techo, ingresar_modelo;
    double precio, kilometraje;
    int anio_modelo, no_pasajeros, no_puertas, anio,x, y, i, opc, posicion;
    
    autos[0] = AUTO("Sedán","AX45",2011,"Negro",4,4,125400,100000,"Estándar","Usado");
    autos[1] = AUTO("BMW","ARJ45",2016,"Negro",4,4,125600,100000,"Automático","Nuevo");
    autos[2] = AUTO("Ferrari","A0102",2014,"Negro",4,4,125700,100000,"Estándar","Usado");
    autos[3] = AUTO("Suzuki","Swift",2015,"Blanco",4,4,221000,7000,"Estándar","Usado");
    
do{
    cout <<"\n\t\t...:::ALMACÉN DE AUTOS:::..." << endl;
    cout <<"\t1. Ver el número de elementos del almacén.\n\t2. Agregar un vehículo al almacén.\n\t3. Eliminar el último elemento del almacén.\n\t4. Eliminar elemento por por posición del almacén.\n\t5. Imprimir lista de vehículos por año de fabricación.\n\t6. Imprimir lista de vehículos por modelo.\n\t7. Ordenar los vehículos por año.\n\t8. Ordenar los vehículos por precio.\n";
    cout <<"\n\tIngresa tu opción(1/7): ";
    cin >> opc;
    
    
    switch (opc){
        case 1:
        print_datos(autos);
        break;
        
        case 2:
            cout<<"\n\t-Empresa creadora: ";cin >> empresa;
            cout<<"\t-Modelo: ";cin >> modelo;
            cout<<"\t-Año del modelo: ";cin >> anio_modelo;
            cout<<"\t-Color del modelo: ";cin >> color;
            cout<<"\t-Número de pasajeros: ";cin >> no_pasajeros;
            cout<<"\t-Número de puertas: ";cin >> no_puertas;
            cout<<"\t-Precio: $";cin >> precio;
            cout<<"\t-Kilometraje: ";cin >> kilometraje;
            cout<<"\t-Modo (Estándar/Automático): ";cin >> modo;
            cout<<"\t-Estado (Nuevo/Viejo): ";cin >> estado;
        
            tamano_arreglo = tamano_arreglo + 1;
            autos[tamano_arreglo - 1] = AUTO(empresa,modelo,anio_modelo,color,no_pasajeros,no_puertas,precio,kilometraje,modo,estado);
            print_datos(autos);
            
            cout <<"\t"<< tamano_arreglo - 1 <<"\t";
            cout <<autos[tamano_arreglo - 1].getEmpresa() <<"\t\t";
            cout <<autos[tamano_arreglo - 1].getModelo() <<"\t\t";
            cout << autos[tamano_arreglo - 1].getAnio() <<"\t\t";
            cout <<"$ " << autos[tamano_arreglo - 1].getPrecio() <<"\t";
            cout <<"\n";
        break;
        
        case 3:
            autos[tamano_arreglo - 1] = AUTO("-","-",0,"-",0,0,0,0,"-","-");
            tamano_arreglo--;
        break;
        
        case 4:
            cout <<"\n¿Qué deseas posición deseas eliminar?: ";
            cin >> posicion;
            autos[posicion]=AUTO("-","-",0,"-",0,0,0,0,"-","-");
        break;
        
        case 5:
            cout <<"\tIngresa el año que deseas: ";
            cin >> anio;
            
            for(i = 0; i < tamano_arreglo; i++){
                if (autos[i].getAnio() == anio){
                    cout <<"\t"<< i <<"\t";
                    cout <<autos[i].getEmpresa() <<"\t\t";
                    cout <<autos[i].getModelo() <<"\t\t";
                    cout <<autos[i].getAnio() <<"\t\t";
                    cout <<"$ " <<autos[i].getPrecio() <<"\t";
                    cout <<"\n";
                }
            }
        break;
        
        case 6:
            cout <<"\tIngresa el modelo que deseas: ";
            cin >> ingresar_modelo;
            
            for(i = 0; i < tamano_arreglo; i++){
                if (autos[i].getModelo() == ingresar_modelo){
                    cout <<"\t"<< i <<"\t";
                    cout <<autos[i].getEmpresa() <<"\t\t";
                    cout <<autos[i].getModelo() <<"\t\t";
                    cout <<autos[i].getAnio() <<"\t\t";
                    cout <<"$ " <<autos[i].getPrecio() <<"\t";
                    cout <<"\n";
                }
            }
        break;
        
        case 7:
        
        cout <<"\t¿Cómo lo deseas?\n\t\t1. De menor a mayor.\n\t\t2. De mayor a menor.";
        cout <<"\n\tTu opción (1/2): ";
        cin >> opc;
        
        
            switch (opc){
                case 1:
                
                    int x, y;
                
                    for(y = 0; y < tamano_arreglo - 1; y++){
                        for (x = 0; x < tamano_arreglo - 1 - y; x++){
                            if (autos[x].getAnio() > autos[ x + 1].getAnio()){
                                AUTO temp = autos[x];
                                autos[x] = autos[x + 1];
                                autos[x + 1] = temp;
                            }
                        }
                    }
                    
                    print_datos(autos);
                break;
                
                case 2:
                
                    for(y = 0; y < tamano_arreglo - 1; y++){
                        for (x = 0; x < tamano_arreglo - 1 - y; x++){
                            if (autos[x].getAnio() < autos[ x + 1].getAnio()){
                                AUTO temp = autos[x];
                                autos[x] = autos[x + 1];
                                autos[x + 1] = temp;
                            }
                        }
                    }
                    
                    print_datos(autos);
                break;
                
                default:
                    cout <<"\n\t\tERROR.Inténtalo de nuevo.";
                break;
            }
            
        break;
        
        case 8:
        cout <<"\t¿Cómo lo deseas?\n\t\t1. De menor a mayor.\n\t\t2. De mayor a menor.";
        cout <<"\n\tTu opción (1/2): ";
        cin >> opc;
        
        
            switch (opc){
                case 1:
                
                
                    for(y = 0; y < tamano_arreglo - 1; y++){
                        for (x = 0; x < tamano_arreglo - 1 - y; x++){
                            if (autos[x].getPrecio() > autos[ x + 1].getPrecio()){
                                AUTO temp = autos[x];
                                autos[x] = autos[x + 1];
                                autos[x + 1] = temp;
                            }
                        }
                    }
                    
                    print_datos(autos);
                    
                break;
                
                case 2:
                for(y = 0; y < tamano_arreglo - 1; y++){
                        for (x = 0; x < tamano_arreglo - 1 - y; x++){
                            if (autos[x].getPrecio() < autos[ x + 1].getPrecio()){
                                AUTO temp = autos[x];
                                autos[x] = autos[x + 1];
                                autos[x + 1] = temp;
                            }
                        }
                    }
                    
                    print_datos(autos);
                    
                break;
                
                default:
                break;
            }
        break;
        
        default:
        cout <<"\n\t\tERROR.Inténtalo de nuevo.";
        break;
    }
cout <<"\n\t¿Deseas repetir? (1/0): ";
cin >> opc;
}

while(opc != 0 && opc == 1);
delete [] autos;
}