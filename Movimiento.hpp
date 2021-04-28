#ifndef MOVIMIENTO_HPP
#define MOVIMIENTO_HPP
#include<string>
#include "Datos.hpp"
using namespace std;
class Movimiento:public Datos{
    private:
    int cantidad;

    public:
    Movimiento();
    Movimiento(string elnombre, int elnumerocuenta, string elfecha, int elcantidad);
    int getelcantidad();
};

#endif