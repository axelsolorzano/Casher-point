#ifndef DATOS_HPP
#define DATOS_HPP
#include<string>
using namespace std;
class Datos {
    private:
    string nombre;
    int numerocuenta;
    string fecha;

    public:
    Datos();
    Datos(string elnombre, int elnumerocuenta, string elfecha);
    string getelnombre();
    int getelnumerocuenta();
    string getelfecha();
};

#endif