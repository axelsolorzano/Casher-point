#include "Datos.hpp"

Datos::Datos(){}

Datos::Datos(string elnombre, int elnumerocuenta, string elfecha){
    nombre = elnombre;
    numerocuenta = elnumerocuenta;
    fecha = elfecha;
}

string Datos::getelnombre(){
    return nombre;
}

int Datos::getelnumerocuenta(){
    return numerocuenta;
}
 
string Datos::getelfecha(){
    return fecha;
}