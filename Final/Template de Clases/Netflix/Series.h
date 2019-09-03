#include<string>
#include<iostream>

using namespace std;

#ifndef SERIES
#define SERIES

class Series
{
    public:
    Series();
    Series(string, string, int, int, int);
    void print();
protected:
    string nombre;
     string genero;
     int noCaps;
        int noTemporadas;
        int anioEstreno;

};

#endif

