#include"Series.h"


Series::Series(string nombre, string genero, int noCaps, int noTemporadas, int anioEstreno)
{

    this->nombre = nombre;
    this->genero = genero;
    this->noCaps = noCaps;
    this->noTemporadas = noTemporadas;
    this->anioEstreno = anioEstreno;
}

void Series::print()
{
    cout << "Nombre: " << nombre  << endl;
    cout << "Género: " << genero << endl;
    cout << "Número de Capítulos: " << noCaps << endl;
    cout << "Número de Temporadas: " << noTemporadas << endl;
    cout << "Año de Estreno: " << anioEstreno << endl;
}