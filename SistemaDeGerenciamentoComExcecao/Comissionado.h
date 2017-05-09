#ifndef COMISSIONADO_H_INCLUDED
#define COMISSIONADO_H_INCLUDED

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Comissionado : public Funcionario{

private:
    double vendasSemanais;
    double percentualComissao;

public:
    Comissionado(string n, int m, double v, double p);
    void setVendasSemanais(double v);
    void setPercentualComissao(double c);
    double getVendasSemanais();
    double gePercentualComissao();
    double calcularSalario();

};

#endif // COMISSIONADO_H_INCLUDED
