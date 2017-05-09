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
    for(int i = 0; i < funcionario.size(); i++){
        if(matricula == funcionario[i]->getMatricula()){
            return funcionario[i]->calcularSalario();
        }
    }
}

int Gerenciamento::consultaNomeDeFuncionario(string nome){
    int retorno = 0;
    for(int i = 0; i < funcionario.size(); i++){
       retorno = funcionario[i]->getNome() == nome;
       if(retorno == 1){
            break;
       }
    }

    if(retorno == 0){
        throw FuncionarioNaoExisteException();
    }

    return retorno;
}

double Gerenciamento::getOrcamento(){
    return orcamento;
}
