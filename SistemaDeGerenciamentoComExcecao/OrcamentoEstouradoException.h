#ifndef ORCAMENTOESTOURADOEXCEPTION_H_INCLUDED
#define ORCAMENTOESTOURADOEXCEPTION_H_INCLUDED

#include <stdexcept>
using namespace std;

class OrcamentoEstouradoException : public runtime_error {

public:
    OrcamentoEstouradoException() : runtime_error("ERRO: Orcamento Semanal Estourado.\n") {}
};


#endif // ORCAMENTOESTOURADOEXCEPTION_H_INCLUDED
