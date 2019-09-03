#include <stdio.h>
using namespace std;

int * arreglonumero(int * arreglo, int size)
{
    int temporal=0;
    for (int i = 0; i < size; i++)
    {
        if(i>i+1)
        {
            temporal= arreglo[i+1];
        arreglo[i+1] = arreglo[i];
        arreglo[i]=temporal;
            
        }
    }
    return arreglo ;
}
int main(){

    int *z;
   int *elementos;
   int size =20;
   elementos=new int [size];
    elementos[0]=2;
    elementos[1]=6;
    elementos[2]=45;
    elementos[3]=76;
    elementos[4]=23;
    elementos[5]=24;
    elementos[6]=12;
    elementos[7]=98;
    elementos[8]=34;
    elementos[9]=65;
    elementos[10]=71;
    elementos[11]=29;
    elementos[12]=87;
    elementos[13]=61;
    elementos[14]=3;
    elementos[15]=0;
    elementos[16]=98;
    elementos[17]=8;
    elementos[18]=42;
    elementos[19]=75;
   int * numeros ;
   numeros = new int [size];
   numeros = arreglonumero(elementos,size);
    for (int i =0 ;i<=size;i++)
    {
       printf("%i ",numeros[i]);
    }
       
}
 
    
