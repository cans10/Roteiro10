#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"
#include "IConta.h"

using namespace std;


int main()
{
    double valorSaque = 0;

    Conta c1 ("Carlos", 9987, 1900.00f, 800.00f);
    ContaEspecial c2 ("Alysson", 3456, 1500.00f, 200.00f);
    c1.depositar(400.00f);

    cout.precision(2);
    cout << fixed << "Conta de " << c1.getNumeroConta() << " de " << c1.getNomeCliente() <<
     "\nSalario Mensal: R$ "<< c1.getSalarioMensal() <<"\nSaldo: R$ " << c1.getSaldo() << "\n\n" << endl;

     try{
        cout << "Informe o valor a sacar: R$ ";
        cin >> valorSaque;

        cout << fixed << "\nConta de " << c1.getNumeroConta() << " de " << c1.getNomeCliente() <<
        "\nSaldo disponivel: R$ "<< c1.getSaldo() <<"\nSaque: R$ " << valorSaque << "\n" << endl;

        c1.sacar(valorSaque);

        cout << fixed << "\nSaldo atualizado: R$ "<< c1.getSaldo() <<"\n" << endl;

     } catch (exception &e){
        cout << e.what()<< endl;
     }

    return 0;
}
