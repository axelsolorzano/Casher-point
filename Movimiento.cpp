#include "Movimiento.hpp"
Movimiento::Movimiento(){}

Movimiento::Movimiento(string elnombre, int elnumerocuenta, string elfecha, int elcantidad): Datos(elnombre, elnumerocuenta, elfecha){
    cantidad = elcantidad;
}


int Movimiento::getelcantidad(){
    return cantidad;
}