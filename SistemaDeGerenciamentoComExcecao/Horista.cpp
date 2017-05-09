#include "Horista.h"

Horista::Horista(string n, int m, double s, double h): Funcionario(n, m), salarioPorHora(s), horasTrabalhadas(h){}

void Horista::setSalarioPorHora(double s){
    salarioPorHora = s;
}

double Horista::getSalarioPorHora(){
    return salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horas){
    horasTrabalhadas = horas;
}

double Horista::getHorasTrabalhadas(){
    return horasTrabalhadas;
}

double Horista::calcularSalario(){
    float salario;
    if(getHorasTrabalhadas() > 40){
        salario = (getSalarioPorHora() * 40) + (getSalarioPorHora() * (getHorasTrabalhadas() - 40) * 1.5f);
    } else {
        salario = salarioPorHora * getHorasTrabalhadas();
    }
    return salario;
}
