#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temporal=*a;
    *b=*a;
    *b=temporal;
}

int main(){
    int orden[]={ 0, 1, 15, 65, 23, 3, 87, 34, 29, 40, 64, 35, 54, 29, 4, -7, 7, 9, 8, 10};
    int size = 20;
    
    cout << "El arreglo está así: ";
        for (int i=0; i<size; i++){
            cout << orden[i];
            cout <<" ";
        }
    
     for(int y=0; y<size-1; y++){
        for(int x=0; x<size-1-y; x++){
            if(orden[x]>orden[x + 1]){
                swap(orden[x], orden[x + 1]);
            }
        }
    }
        cout << endl;
        cout << "El arreglo en orden está así: ";
        
        for(int i = 0; i < size; i++){
            cout << orden[i];
            cout << " ";
        }
    
    
}

