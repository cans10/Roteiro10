#ifndef VALORACIMAEXCEPTION_H_INCLUDED
#define VALORACIMAEXCEPTION_H_INCLUDED

#include <stdexcept>
using namespace std;

class ValorAcimaException : public runtime_error {

public:
    ValorAcimaException() : runtime_error("ERRO: O valor esta acima.\n") {}
};

#endif // VALORACIMAEXCEPTION_H_INCLUDED
