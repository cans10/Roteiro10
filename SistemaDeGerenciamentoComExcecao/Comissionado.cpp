#include "Comissionado.h"

Comissionado::Comissionado (string n, int m, double v, double p): Funcionario(n, m), vendasSemanais(v), percentualComissao(p){}

void Comissionado::setVendasSemanais(double v){
    vendasSemanais = v;
}

void Comissionado::setPercentualComissao(double p){
    percentualComissao = p;
}

double Comissionado::getVendasSemanais(){
    return vendasSemanais;
}

double Comissionado::gePercentualComissao(){
    return percentualComissao;
}

double Comissionado::calcularSalario(){
    return getVendasSemanais() * gePercentualComissao() / 100;
}
