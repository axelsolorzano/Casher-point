#include "SistemaMovimientos.hpp"

SistemaMovimientos::SistemaMovimientos(){}

SistemaMovimientos::SistemaMovimientos(string elvalidarcliente, int elconsultasaldo, int eldepositarefectivo, int elretirarefectivo,
         string elalmacenarmovimiento, string elconsultarmovimientos){          
            validarcliente = elvalidarcliente;
            consultasaldo = elconsultasaldo;
            depositarefectivo = eldepositarefectivo;
            retirarefectivo = elretirarefectivo;
            almacenarmovimiento = elalmacenarmovimiento;
            consultarmovimientos = elconsultarmovimientos;  
}

string SistemaMovimientos::getelvalidarcliente(){
    return validarcliente;
}

int SistemaMovimientos::getelconsultasaldo(){
    return consultasaldo;
}

int SistemaMovimientos::geteldepositarefectivo(){
    return depositarefectivo;
}

int SistemaMovimientos::getelretirarefectivo(){
    return retirarefectivo;
}

string SistemaMovimientos::getelalmacenarmovimiento(){
    return almacenarmovimiento;
}

string SistemaMovimientos::getelconsultarmovimiento(){
    return consultarmovimientos;
}