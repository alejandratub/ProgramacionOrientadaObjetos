#include <iostream>



template<class tipo>
tipo suma (tipo a, tipo b)
{
    tipo variable;
    variable=a+b;
    return variable;
}
using namespace std;
int main()
{
    cout<< "La suma de 134+343 es: "<<suma<int>(134,343);
    cout<< "\n La suma de 134.345454+343.434343 es:  "<<suma<double>(134.345454,343.434343);
    cout<<"\nLa suma de 134.2+343.4 es: "<<suma<int>(134.2,343.4);
    return 0;
}