#ifndef VALORMUITOACIMAEXCEPTION_H_INCLUDED
#define VALORMUITOACIMAEXCEPTION_H_INCLUDED

#include <stdexcept>
using namespace std;

class ValorMuitoAcimaException : public runtime_error {

public:
    ValorMuitoAcimaException() : runtime_error("ERRO: O valor esta muito acima.\n") {}
};

#endif // VALORMUITOACIMAEXCEPTION_H_INCLUDED
