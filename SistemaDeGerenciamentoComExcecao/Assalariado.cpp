#include "Assalariado.h"

Assalariado::Assalariado(string n, int m, double s):Funcionario(n, m),salario(s){}

void Assalariado::setSalario(double s){
    salario = s;
}

double Assalariado::getSalario(){
    return salario;
}

double Assalariado::calcularSalario(){
    return getSalario()/4;
}
