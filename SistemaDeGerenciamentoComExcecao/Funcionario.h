#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include <string>
using namespace std;

class Funcionario {

    private:
        string nome;
        int matricula;

    public:
        Funcionario(string n, int m);
        void setNome(string n);
        void setMatricula(int m);
        string getNome();
        int getMatricula();
        virtual double calcularSalario() = 0;
};

#endif // FUNCIONARIO_H_INCLUDED
