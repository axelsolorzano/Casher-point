#ifndef SISTEMAMOVIMIENTOS_HPP
#define SISTEMAMOVIMIENTOS_HPP
#include<string>
using namespace std;

class SistemaMovimientos {
    private:
        string validarcliente;
        int consultasaldo;
        int depositarefectivo;
        int retirarefectivo;
        string almacenarmovimiento;
        string consultarmovimientos;
    public:
        SistemaMovimientos();
        SistemaMovimientos(string elvalidarcliente, int elconsultasaldo, int eldepositarefectivo, int elretirarefectivo,
         string elalmacenarmovimiento, string elconsultarmovimientos);
        string getelvalidarcliente();
        int getelconsultasaldo();
        int geteldepositarefectivo();
        int getelretirarefectivo();
        string getelalmacenarmovimiento();
        string getelconsultarmovimiento();
};

#endif