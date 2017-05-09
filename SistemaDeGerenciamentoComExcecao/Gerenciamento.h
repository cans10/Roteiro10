#ifndef GERENCIAMENTO_H_INCLUDED
#define GERENCIAMENTO_H_INCLUDED

#include<string>
#include "Funcionario.h"
#include <vector>

using namespace std;

class Gerenciamento{

private:
    double orcamento;
    vector <Funcionario*> funcionario;

public:
    Gerenciamento(double o);
    void setFuncionarios(vector<Funcionario*> &func);
    double calcularTotalDaFolha();
    double consultaSalarioDeFuncionario(int matricula);
    int consultaNomeDeFuncionario(string nome);
    double getOrcamento();
};

#endif // GERENCIAMENTO_H_INCLUDED
