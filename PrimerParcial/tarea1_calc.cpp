#include <iostream>



template<class tipo>
tipo suma (tipo a, tipo b)
{
    return a+b;
}

template<class tipo>
tipo resta (tipo a, tipo b)
{
    return a-b;
}

template<class tipo>
tipo multiplicacion (tipo a, tipo b)
{
    return a*b;
}

template<class tipo>
tipo division (tipo a, tipo b)
{
    return a/b;
}

template<class tipo>
tipo potencia (tipo a, tipo b)
{
    tipo pot = a,i;
    for( int i =1; i<b; i++)
    {
        pot= pot*a;
    }
    return pot;
}

 template <class tipo>
tipo digito (tipo numero)
{
     int num, res; 
         num = numero; 
             if(numero - num > 0)
             { 
                 res = 0;
                  return res;
              }
                
              else
              { 
                 res = 1;
                 return res;
                }
        }

using namespace std;

int main()
{
    int calc;
    float a,b;
    char op;
    long double c,d;
    
    cout<< "***************************";
    cout<<"\nBIENVENIDO";
    cout<< "\n***************************";
    cout<<"\n01. Calculadora Básica\n02. Calculadora Científica";
    cout<< "\n***************************\n";
    cin>> calc;
    
    cout<<"\nOperación a realizar (+,-,*,/,p)\n";
    cin>> op;
    
    switch (calc)
    {
        case 1:
        
        cout<<"\nIngresa el primer número:\n ";
        cin>> (a);
        cout<<endl;
        
         if (digito(a) == 1)
         {
            cout << "\nIngresa el segundo número:\n ";
            cin >> b;
            cout<<endl;
             
         if (digito(b) == 1)
         {
            cout<<endl;
        
        
        switch (op)
        {
            case '+':
                cout<<"\nEl resultado es:\n"<<suma <int>(a,b);
                cout<<"\n";
                break;
            case '-':
                 cout<<"\nEl resultado es:\n "<<resta <int>(a,b);
                 cout<<"\n";
                break;
                
            case '*':
                 cout<<"\nEl resultado es:\n "<<multiplicacion <int>(a,b);
                 cout<<"\n";
                break;
            
            case '/':
                 cout<<"\nEl resultado es:\n"<<division <int>(a,b);
                 cout<<"\n";
                break;
            
            case 'p':
                 cout<<"\nEl resultado es:\n"<<potencia <int>(a,b);
                 cout<<"\n";
                break;
            
            default:
            cout << "ERROR";
            break;
        }
        }
         else
         {
             cout << "\tERROR: La calculadora básica no puede hacer operaciones con números decimales.\n";
         }
         }
         else{
            cout << "\tERROR: La calculadora básica no puede hacer operaciones con números decimales.\n";
         }
        break;
        
        case 2:
        cout<<"\nIngresa el primer número:\n ";
        cin>> (c);
        cout<<"\nIngresa el segundo número:\n ";
        cin>>(d);
        
        cout<<"\nOperación a realizar (+,-,*,/,p)\n";
        cin>> op;
        switch (op)
        {
            case '+':
                cout<<"\nEl resultado es:\n "<<suma <long double>(c,d);
                cout<<"\n";
                break;
        
            case '-':
                 cout<<"\nEl resultado es:\n "<<resta <long double>(c,d);
                 cout<<"\n";
                break;
            
            case '*':
                 cout<<"\nEl resultado es:\n "<<multiplicacion <long double>(c,d);
                 cout<<"\n";
                break;
            
            case '/':
                 cout<<"\nEl resultado es:\n "<<division <long double>(c,d);
                 cout<<"\n";
                break;
            
            case 'p':
                 cout<<"\nEl resultado es:\n "<<potencia <long double>(c,d);
                 cout<<"\n";
                break;
            
            break;
        }
        
    }
}
 