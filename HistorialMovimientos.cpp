#include "HistorialMovimientos.hpp"

HistorialMovimientos::HistorialMovimientos(){}
HistorialMovimientos::HistorialMovimientos(int eldeposito, int elretiros){
    deposito = eldeposito;
    retiros = elretiros;
}

int HistorialMovimientos::geteldeposito(){
    return deposito;
}

int HistorialMovimientos::getelretiro(){
    return retiros;
}