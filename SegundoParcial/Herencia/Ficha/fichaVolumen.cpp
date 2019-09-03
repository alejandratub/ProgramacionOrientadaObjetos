#include "fichaVolumen.h"
#include <iostream>
using namespace std;

FichaVolumen::FichaVolumen(){}

FichaVolumen::FichaVolumen( string ref, string tit, string au, string ed, int vol): FichaLibro(ref,tit,au,ed)
{
    volumen = vol;
    
}
void FichaVolumen::PrintFicha()
{
    FichaLibro::PrintFicha();
    cout << "\nVolumen: " << volumen;
}
void FichaVolumen::pedirDatos(){
    cout <<"\nIngresa el título: \n";
    cin >> titulo;
    
    cout <<"\nIngresa la referencia: \n ";
    cin >> referencia;
    
    cout <<"\nIngresa el autor: \n";
    cin >> autor;
    
    cout <<"\nIngresa la editorial: \n";
    cin >>editorial;
    
    cout <<"\nIngresa el volumen: \n";
    cin >>volumen;
}

FichaVolumen::~FichaVolumen(){}