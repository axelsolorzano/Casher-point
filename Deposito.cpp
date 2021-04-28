#include "Deposito.hpp"

Deposito::Deposito(){}

Deposito::Deposito(string elnombre, int elnumerocuenta, string elfecha, float elimporte): Datos(elnombre, elnumerocuenta, elfecha){
    
    importe = elimporte;
}

float Deposito::getelimporte(){
    return importe;
}