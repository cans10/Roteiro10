#ifndef ICONTA_H_INCLUDED
#define ICONTA_H_INCLUDED

#include <iostream>

using namespace std;

class IConta{

public:
    virtual void sacar(double valor) = 0;
    virtual void depositar(double valor) = 0;
};

#endif // ICONTA_H_INCLUDED
