#include <iostream>
using namespace std;

int *arreglo(int *entrada,int *size)
{
    cout<<"Ingresa los elementos de tu arreglo \n";
while(entrada[*size]!=-1)
{
    *size = *size+1;
    cout<<" ";
    cin>> entrada[*size];
}
}
int main()
{
    int *size = new int;
    int *entrada = new int [*size];
    
    arreglo(entrada, size);
    
    for(int i=1; i<*size; i++)
    {
        cout<<entrada[i];
        cout<<" ";
    }
}