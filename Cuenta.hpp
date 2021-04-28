#ifndef CUENTA_HPP
#define CUENTA_HPP
#include<string>
#include "HistorialMovimientos.hpp"
using namespace std;
class Cuenta{
    private:
    string tipocuenta;
    int numerocuenta;
    string clienteasosiado;
    HistorialMovimientos historialmovimientos;
    public:
    Cuenta();
    Cuenta(string eltipocuenta, int elnumerocuenta, string elclienteasosiado, HistorialMovimientos elhistorialmovimientos);
    string geteltipocuenta();
    int getelnumerocuenta();
    string getelclienteasosiado();
    HistorialMovimientos getelhistorialmovimientos();

};

#endif