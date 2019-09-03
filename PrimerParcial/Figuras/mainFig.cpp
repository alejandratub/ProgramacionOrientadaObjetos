#include <iostream>

#include "circulo.h"
#include "triangulo.h"
#include "cuadrado.h"

using namespace std;

int main()
{
    
    CUADRADO obj1(5);
    CUADRADO obj2 = obj1;
    CUADRADO obj3 = obj1;
    CUADRADO obj4 = obj1;
    CUADRADO obj5 = obj1;
   
   TRIANGULO obj_1(12,10,8);
   TRIANGULO obj_2 = obj_1;
   TRIANGULO obj_3 = obj_1;
   TRIANGULO obj_4 = obj_1;
   TRIANGULO obj_5 = obj_1;
   
   CIRCULO objeto1(8);
   CIRCULO objeto2 = objeto1;
   CIRCULO objeto3 = objeto1;
   CIRCULO objeto4 = objeto1;
   CIRCULO objeto5 = objeto1;
    
    cout << "\n OBJETO 1"<<"\n";
    cout << "\n *****CUADRADO*****"<<"\n";
    obj1.areaCUADRADO();
    obj1.perimetroCUADRADO();
    obj1.imprimirAreaCUADRADO();
    obj1.imprimirPerimetroCUADRADO();
    
    cout <<"\n *****TRIANGULO*****"<<"\n";
    obj_1.areaTRIANGULO();
    obj_1.perimetroTRIANGULO();
    obj_1.imprimirAreaTRIANGULO();
    obj_1.imprimirPerimetroTRIANGULO();
    
    cout<<"\n *****CIRCULO*****"<<"\n";
    objeto1.areaCIRCULO();
    objeto1.perimetroCIRCULO();
    objeto1.imprimirAreaCIRCULO();
    objeto1.imprimirPerimetroCIRCULO();
    
    cout << "\n OBJETO 2"<<"\n";
    cout << "\n *****CUADRADO*****"<<"\n";
    obj2.areaCUADRADO();
    obj2.perimetroCUADRADO();
    obj2.imprimirAreaCUADRADO();
    obj2.imprimirPerimetroCUADRADO();
    obj2.setValoresCUADRADO(14);
    
    cout <<"\n *****TRIANGULO*****"<<"\n";
    obj_2.areaTRIANGULO();
    obj_2.perimetroTRIANGULO();
    obj_2.imprimirAreaTRIANGULO();
    obj_2.imprimirPerimetroTRIANGULO();
    obj_2.setValoresTRIANGULO(14,12,11);
    
    cout<<"\n *****CIRCULO*****"<<"\n";
    objeto2.areaCIRCULO();
    objeto2.perimetroCIRCULO();
    objeto2.imprimirAreaCIRCULO();
    objeto2.imprimirPerimetroCIRCULO();
    objeto2.setValoresCIRCULO(16);
    
     cout << "\n OBJETO 3"<<"\n";
    cout << "\n *****CUADRADO*****"<<"\n";
    obj3.areaCUADRADO();
    obj3.perimetroCUADRADO();
    obj3.imprimirAreaCUADRADO();
    obj3.imprimirPerimetroCUADRADO();
    obj3.setValoresCUADRADO(20);
    
    cout <<"\n *****TRIANGULO*****"<<"\n";
    obj_3.areaTRIANGULO();
    obj_3.perimetroTRIANGULO();
    obj_3.imprimirAreaTRIANGULO();
    obj_3.imprimirPerimetroTRIANGULO();
    obj_3.setValoresTRIANGULO(18,19,13);
    
    cout<<"\n *****CIRCULO*****"<<"\n";
    objeto3.areaCIRCULO();
    objeto3.perimetroCIRCULO();
    objeto3.imprimirAreaCIRCULO();
    objeto3.imprimirPerimetroCIRCULO();
    objeto3.setValoresCIRCULO(6);
    
     cout << "\n OBJETO 4"<<"\n";
    cout << "\n *****CUADRADO*****"<<"\n";
    obj4.areaCUADRADO();
    obj4.perimetroCUADRADO();
    obj4.imprimirAreaCUADRADO();
    obj4.imprimirPerimetroCUADRADO();
    obj4.setValoresCUADRADO(6);
    
    cout <<"\n *****TRIANGULO*****"<<"\n";
    obj_4.areaTRIANGULO();
    obj_4.perimetroTRIANGULO();
    obj_4.imprimirAreaTRIANGULO();
    obj_4.imprimirPerimetroTRIANGULO();
    obj_4.setValoresTRIANGULO(10,9,7);
    
    cout<<"\n *****CIRCULO*****"<<"\n";
    objeto4.areaCIRCULO();
    objeto4.perimetroCIRCULO();
    objeto4.imprimirAreaCIRCULO();
    objeto4.imprimirPerimetroCIRCULO();
    objeto4.setValoresCIRCULO(4);
    
     cout << "\n OBJETO 5"<<"\n";
    cout << "\n *****CUADRADO*****"<<"\n";
    obj5.areaCUADRADO();
    obj5.perimetroCUADRADO();
    obj5.imprimirAreaCUADRADO();
    obj5.imprimirPerimetroCUADRADO();
    obj5.setValoresCUADRADO(27);
    
    cout <<"\n *****TRIANGULO*****"<<"\n";
    obj_5.areaTRIANGULO();
    obj_5.perimetroTRIANGULO();
    obj_5.imprimirAreaTRIANGULO();
    obj_5.imprimirPerimetroTRIANGULO();
    obj_5.setValoresTRIANGULO(2,6,5);
    
    cout<<"\n *****CIRCULO*****"<<"\n";
    objeto5.areaCIRCULO();
    objeto5.perimetroCIRCULO();
    objeto5.imprimirAreaCIRCULO();
    objeto5.imprimirPerimetroCIRCULO();
    objeto5.setValoresCIRCULO(19);
    
    
}