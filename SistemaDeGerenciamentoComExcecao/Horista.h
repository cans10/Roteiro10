#ifndef HORISTA_H_INCLUDED
#define HORISTA_H_INCLUDED

#include <iostream>
#include "Funcionario.h"

using namespace std;

class Horista : public Funcionario{

private:
    double salarioPorHora;
    double horasTrabalhadas;

public:
    Horista(string n, int m, double s, double h);
    void setSalarioPorHora(double s);
    void setHorasTrabalhadas(double h);
    double getSalarioPorHora();
    double getHorasTrabalhadas();
    double calcularSalario();

};

#endif // HORISTA_H_INCLUDED
