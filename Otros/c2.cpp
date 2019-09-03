#include <iostream> 
#include <string> 
 
using namespace std; 
 

void cifrar(int desplazamiento, string & mensaje){ 
    for (int i = 0; i < mensaje.length(); i++){ 
        /*Para tratar a las minúsculas*/
        if (mensaje[i] >= 'a' && mensaje[i] <= 'z'){
            
                if (mensaje[i] + desplazamiento > 'z'){ 
                    mensaje[i] = 'a' - 'z' + mensaje[i] + desplazamiento - 1; 
                } 
                
                else if (mensaje[i] + desplazamiento < 'a'){ 
                    mensaje[i] = 'z' - 'a' + mensaje[i] + desplazamiento + 1; 
                } 
                
                else{ 
                mensaje[i] += desplazamiento; 
                }
                
        } 
        
        
        /*Para tratar a las mayúsculas*/
        else if (mensaje[i] >= 'A' && mensaje[i] <= 'Z') { 
                if (mensaje[i] + desplazamiento > 'Z') { 
                    mensaje[i] = 'A' - 'Z' + mensaje[i] + desplazamiento - 1; 
                } 
                
                else if (mensaje[i] + desplazamiento < 'A') { 
                    mensaje[i] = 'Z' - 'A' + mensaje[i] + desplazamiento + 1; 
                } 
                
                else{ 
                mensaje[i] += desplazamiento; 
                } 
        } 
    } 
} 
 

void descifrar(int desplazamiento, string & mensaje){ 
    cifrar(-desplazamiento, mensaje); 
} 
 

int main(){
    int desplazamiento; 
    string mensaje; 
    int opc;
    
    cout <<"\t\t\t==MENÚ==";
    cout <<"\n\t1. Cifrado César.\n\t2. Cifrado Vigeneré.";
    cout <<"\n\n\tIntroduce lo que quieres hacer: ";
    cin >> opc;
    
    cout << "\tIntroduce el mensaje a cifrar: "; 
    cin >> mensaje; 
    
    
    switch (opc){
        
        case 1:
        cout << "\tIntroduce el desplazamiento deseado: "; 
        cin >> desplazamiento; 
 
        cifrar(desplazamiento, mensaje); 
        cout <<"\n\tLa frase cifrada en César es: " <<  mensaje << endl; 
    
        descifrar(desplazamiento, mensaje); 
        cout << "\tLa frase descifrada es: " << mensaje << endl;
        
        break;
        
        case 2:
        break;
        
        default:
        cout <<"ERROR.";
        break;
    }
    
    
 
    
 
} 