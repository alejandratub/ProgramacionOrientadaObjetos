#ifndef SERIES_H
#define SERIES_H

#include <iostream>
#include <string>

#include "netflix.h"

using namespace std;

class Series: public virtual Netflix
{
    
    public:
        Series();
        Series(string,string,int,int,int);
        Series(int,int,int);
        ~Series();
        
        void imprimir();
        
    protected:
        int * noCaps;
        int * noTemporadas;
        int * anioEstreno;
};
#endif