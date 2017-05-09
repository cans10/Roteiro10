#include <iostream>
#include "ValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

using namespace std;

void ValidaNumero::validarNumero(int num){

    if(num <= 0){
        throw ValorAbaixoException();
    } else if((num > 100) && (num < 1000)){
        throw ValorAcimaException();
    } else if (num >= 1000){
        throw ValorMuitoAcimaException();
    }
}




