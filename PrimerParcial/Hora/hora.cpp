#include <iostream>
#include "hora.h"

using namespace std;
HORA::HORA (){
    hora = minuto = segundo = 0;
    
}
HORA::HORA(int h, int m, int s) : hora(h), minuto(m), segundo(s){}

int HORA::establecer_hora()
{
    if((hora>=0 &&hora<24)&&(minuto>=0 && minuto<60)&&(segundo>=0 && segundo<60))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void HORA::print_Estandar()
{
    if(hora<10)
    {
        cout << "0" << hora;
        cout<<":";
        if(minuto<10)
        {
            cout <<"0" << minuto;
            cout << ":";
            
        }
        else
        {
            cout <<minuto;
            cout<<":";
        }
        if(segundo<10)
            {
                cout <<"0" <<segundo;
                cout << " AM";
            }
            else
            {
                cout<<segundo;
                cout<<" AM";
            }
    }
    if(hora>=10&&hora<12)
    {
        cout<< hora;
        cout<<":";
         if(minuto<10)
        {
            cout <<"0" << minuto;
            cout << ":";
            
        }
        else
        {
            cout<< minuto;
            cout<<":";
        }
        if(segundo<10)
            {
                cout <<"0" <<segundo;
                cout << " AM"<< endl;
            }
            else
            {
                cout<< segundo;
                cout <<" AM";
            }
    }
    if(hora>=13)
    {
        hora= hora-12;
        cout<<hora;
        cout<<":";
    
    if(minuto<10)
        {
            cout <<"0" << minuto;
            cout << ":";
            
        }
        else
        {
            cout<< minuto;
            cout<<":";
        }
        if(segundo<10)
            {
                cout <<"0" <<segundo;
                cout << " PM"<< endl;
            }
            else
            {
                cout<< segundo;
                cout<<" PM";
            }
    }
        if(hora==24)
        {
            hora=12;
            cout<<hora;
            cout<<":";
        
        if(minuto<10)
        {
            cout <<"0" << minuto;
            cout << ":";
            
        }
        else
        {
            cout<< minuto;
        }
        if(segundo<10)
            {
                cout <<"0" <<segundo;
                cout << " AM"<< endl;
            }
            else
            {
                cout<< segundo;
                cout<<" AM";
            }
        }
}

void HORA::print_Militar()
{
     if(hora<10)
    {
        cout << "0" << hora;
        cout<<":";
        if(minuto<10)
        {
            cout <<"0" << minuto;
            //cout << ":";
            
        }
        else
        {
            cout <<minuto;
            //cout<<":";
        }
       /* if(segundo<10)
            {
                cout <<"0" <<segundo;
               
            }
            else
            {
                cout<<segundo;
                
            }*/
    }
    else
    {
        cout<< hora;
        cout<<":";
        if(minuto<10)
        {
            cout<< "0";
            cout<<minuto;
           // cout<<":";
        }
        else
        {
            cout<<minuto;
           // cout<<":";
        }
       /* if(segundo<10)
        {
            cout<<"0";
            cout<<segundo;
            
        }
        else
        {
            cout<<segundo;
        }*/
    }
}