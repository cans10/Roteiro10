#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED

#include <iostream>
#include "Conta.h"

using namespace std;

class ContaEspecial:public Conta{

    public:
        ContaEspecial(string n, int num, double salario, double saldo);
        void definirLimite();
};

#endif // CONTAESPECIAL_H_INCLUDED
