#include <string>

#include "fichaLibro.h"
#include "fichaVolumen.h"
#include "ficha.h"
#include "fichaRevista.h"

using namespace std;

int main()
{
    FichaLibro libro1 ("Katzenbach, J.","El Estudiante", "John Katzenbach", "B de Bolsillo" );
    FichaRevista revista1 (2016, 124356, "Kelly, T."," Vouge Mexico");
    FichaVolumen volumen1("Katzenbach, J.","El Estudiante","John Katzenbach", "B de Bolsillo", 12);
    FichaVolumen volumen2;
    
   volumen2.pedirDatos();
    
    cout << "\n*****Datos del Libro*****\n";
    libro1.PrintFicha();
    
    cout << "\n\n *****Datos de la Revista*****\n";
    revista1.PrintFicha();
    
    cout << "\n\n*****Datos del Volumen 1*****\n";
    volumen1.PrintFicha();
    
   cout << "\n\n*****Datos del Volumen 2*****";
   volumen2.PrintFicha();
    
    return 0;
    
    
}