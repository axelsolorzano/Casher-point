#ifndef CAJERO_HPP
#define CAJERO_HPP
#include<string>
using namespace std;
class Cajero{
    private:
        int codigounico;
        int numerosucursal;
        string nombrebanco;

    public:
        Cajero();
        Cajero(int elcodigounico, int elnumerosucursal, string elnombrebanco);
        int getelcodigounico();
        int getelnumerosucursal();
        string getelnombrebanco();
};
#endif