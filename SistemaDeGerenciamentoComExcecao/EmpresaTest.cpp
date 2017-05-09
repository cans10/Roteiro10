#include <iostream>
#include <vector>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "Gerenciamento.h"

using namespace std;

int main()
{
    Assalariado a1 ("Carlos", 123, 1500.00f);
    Horista h1 ("Francisco", 456, 10.00f, 35.00f);
    Comissionado c1 ("Diogo", 789, 10.00f, 5000.00f);
    Gerenciamento ger (1300.00f);
    vector<Funcionario*> f;

    f.push_back(&a1);
    f.push_back(&h1);
    f.push_back(&c1);

    ger.setFuncionarios(f);

    cout.precision(2);

    cout << "Dados dos Funcionarios:\n" << endl;
    for(int i = 0; i < f.size(); i++){
        cout<< fixed << "Nome: " << f[i]->getNome()
            << "\nMatricula: " << f[i]->getMatricula()
            //<< "\nSalario Semanal: R$ "<< f[i]->calcularSalario()
            << "\nSalario Semanal: R$ "<< ger.consultaSalarioDeFuncionario(f[i]->getMatricula())
            << "\n" << endl;
    }

    try{
        cout<< fixed << "\nOrcamento Semanal \tR$ " << ger.getOrcamento()
            << "\nTotal Folha Semanal \tR$ " << ger.calcularTotalDaFolha() << endl;

        cout << "Tem funcionario com o nome de Carlos: "<< (ger.consultaNomeDeFuncionario("Carlos")? "Sim." : "Nao.") << endl;

    } catch(exception &e){
        cout << e.what() << endl;
    }

    return 0;
}
