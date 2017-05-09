#include <iostream>
#include <vector>
#include <string>
#include "Gerenciamento.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"

Gerenciamento::Gerenciamento(double o): orcamento(o){}

void Gerenciamento::setFuncionarios(vector<Funcionario*> &func){
    funcionario = func;
}

double Gerenciamento::calcularTotalDaFolha(){
    double totalFolha = 0;

    for(int i = 0; i < funcionario.size(); i++){
        totalFolha += funcionario[i]->calcularSalario();
    }

    if(totalFolha > orcamento){
       throw OrcamentoEstouradoException();
    }
    return totalFolha;
}

double Gerenciamento::consultaSalarioDeFuncionario(int matricula){
    int existe = 0;
    double salarioSemanal = 0;
    for(int i = 0; i < funcionario.size(); i++){
        if(matricula == funcionario[i]->getMatricula()){
            salarioSemanal += funcionario[i]->calcularSalario();
            existe = 1;
        }
    }

    if(existe == 0){
        throw FuncionarioNaoExisteException();
    }

    return salarioSemanal;
}

int Gerenciamento::consultaNomeDeFuncionario(string nome){
    int existe = 0;
    for(int i = 0; i < funcionario.size(); i++){
       existe = funcionario[i]->getNome() == nome;
       if(existe == 1){
            break;
       }
    }

    if(existe == 0){
        throw FuncionarioNaoExisteException();
    }

    return existe;
}

double Gerenciamento::getOrcamento(){
    return orcamento;
}
