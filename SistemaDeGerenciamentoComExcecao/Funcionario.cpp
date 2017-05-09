#include "Funcionario.h"

Funcionario::Funcionario(string n, int m): nome(n), matricula(m){}

void Funcionario::setMatricula(int m){
    matricula = m;
}

void Funcionario::setNome(string n){
    nome = n;
}

int Funcionario::getMatricula(){
    return matricula;
}

string Funcionario::getNome(){
    return nome;
}
