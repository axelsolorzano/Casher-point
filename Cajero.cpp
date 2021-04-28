#include "Cajero.hpp"

Cajero::Cajero(){}

Cajero::Cajero(int elcodigounico, int elnumerosucursal, string elnombrebanco){
    codigounico = elcodigounico;
    numerosucursal = elnumerosucursal;
    nombrebanco = elnombrebanco;
}

int Cajero::getelcodigounico(){
    return codigounico;
}

int Cajero::getelnumerosucursal(){
    return numerosucursal;
}

string Cajero::getelnombrebanco(){
    return nombrebanco;
}
