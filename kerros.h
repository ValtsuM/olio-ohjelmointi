#ifndef KERROS_H
#define KERROS_H

#include <memory>

#include "asunto.h"

#include <iostream>
using namespace std;


class Kerros
{
public:
    Kerros(){
        cout<<"Kerros luotu"<<endl;
    }
    ~Kerros(){

    }

    /*Asunto*/ int *as1;
    /*Asunto*/ int *as2;
    /*Asunto*/ int *as3;
    /*Asunto*/ int *as4;

    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KERROS_H
