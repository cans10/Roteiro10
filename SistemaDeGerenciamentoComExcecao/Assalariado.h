#ifndef ASSALARIADO_H_INCLUDED
#define ASSALARIADO_H_INCLUDED

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Assalariado : public Funcionario{

private:
    double salario;

public:
    Assalariado(string n, int m, double s);
    void setSalario(double s);
    double getSalario();
    double calcularSalario();

};

#endif // ASSALARIADO_H_INCLUDED
