#ifndef VALORABAIXOEXCEPTION_H_INCLUDED
#define VALORABAIXOEXCEPTION_H_INCLUDED

#include <stdexcept>
using namespace std;

class ValorAbaixoException : public runtime_error {

public:
    ValorAbaixoException() : runtime_error("ERRO: O Valor esta abaixo.\n") {}
};

#endif // VALORABAIXOEXCEPTION_H_INCLUDED
