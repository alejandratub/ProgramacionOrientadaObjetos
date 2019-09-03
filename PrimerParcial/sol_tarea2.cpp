//solucion tarea 2
#include <iostream>
using namespace std;

void resizeArr(int **array, int &size)//recibe doble apuntador porque apunta a la dirección de la dirección
{
    int *newArray = new int [size + 3];
    for(int k = 0; k < size; k++)
    {
        newArray[k]= (*array)[k];
    }
    size = size*2;
    delete[] *array; //borra el contenido dentri de l memoria
    *array = newArray;

}

int main()
{
    int *arr;
    int max = 3;
    arr = new int [max];
    int i = 0;
    int numElemento = 0;
    
    while (i != -1)
    {
        cin>> i;
        if(i != -1)
        {
            arr[numElemento]=i;
            numElemento++;
        }
        if(numElemento == max)
        {
            resizeArr(&arr, max); //pasa la dirección de la variable 
        }
    }
    
    for (int k = 0; k < max; k++){
        cout << arr[k];
        cout <<"";
    }
}