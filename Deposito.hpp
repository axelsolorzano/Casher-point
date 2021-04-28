#ifndef DEPOSITO_HPP
#define DEPOSITO_HPP
#include<string>
#include "Datos.hpp"
using namespace std;
class Deposito: public Datos{
    private:
    float importe;

    public:
    Deposito();
    Deposito(string elnombre, int elnumerocuenta, string elfecha, float elimporte);
    
    float getelimporte();
};

#endif