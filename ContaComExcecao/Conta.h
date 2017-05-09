#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include <iostream>
#include "IConta.h"

using namespace std;

class Conta:public IConta{

    private:
        string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
        string resposta;

    public:
        Conta(string n, int num, double salario, double saldo);
        void sacar(double valor);
        void depositar(double valor);
        void setNomeCliente(string n);
        void setSalarioMensal(double s);
        void setNumeroConta(int n);
        void setSaldo(double s);
        void setLimite(double l);
        string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();
        void definirLimite();
        string getResposta();
};


#endif // CONTA_H_INCLUDED
