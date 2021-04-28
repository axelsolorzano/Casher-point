#include "Cuenta.hpp"

Cuenta::Cuenta(){}
Cuenta::Cuenta(string eltipocuenta, int elnumerocuenta, string elclienteasosiado, HistorialMovimientos elhistorialmovimientos){
    tipocuenta = eltipocuenta;
    numerocuenta = elnumerocuenta;
    clienteasosiado = elclienteasosiado;
    historialmovimientos = elhistorialmovimientos;
}

string Cuenta::geteltipocuenta(){
    return tipocuenta;
}

int Cuenta::getelnumerocuenta(){
    return numerocuenta;
}

string Cuenta::getelclienteasosiado(){
    return clienteasosiado;
}

HistorialMovimientos Cuenta::getelhistorialmovimientos(){
    return historialmovimientos;
}