#ifndef HISTORIALMOVIMIENTOS_HPP
#define HISTORIALMOVIMIENTOS_HPP
#include<string>
using namespace std;
class HistorialMovimientos{
    private:
    int deposito;
    int retiros;
    public:
    HistorialMovimientos();
    HistorialMovimientos(int eldeposito, int elretiros);
    int geteldeposito();
    int getelretiro();
};
#endif