#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ValidaNumero.h"


using namespace std;


int main()
{
    int num;
    int controle = 0;
    ValidaNumero v;

    while (controle == 0)
    {
        printf("Digite o numero entre 1 e 100: ");
        cin >> num;
        try
        {
            v.validarNumero(num);
            cout<< "Correto: o numero "<< num << " esta entre 1 e 100." << endl;
            controle = 1;
        }
        catch(exception &e)
        {
            cout << e.what() << endl;
        }
    }
    return 0;
}
