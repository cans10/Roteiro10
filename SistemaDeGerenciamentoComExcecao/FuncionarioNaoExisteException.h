#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H_INCLUDED
#define FUNCIONARIONAOEXISTEEXCEPTION_H_INCLUDED

#include <stdexcept>
using namespace std;

class FuncionarioNaoExisteException : public runtime_error {

public:
    FuncionarioNaoExisteException() : runtime_error("ERRO: Este Funcionario nao existe na Empresa.\n") {}
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H_INCLUDED
