#ifndef TDEVITO_HPP
#define TDEVITO_HPP
#include "Vigencia.hpp"
#include "Tarjeta.hpp"
using namespace std;
class TDevito : public Tarjeta {
	private:
		float balanceAlCorte;

	public:
		TDevito(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad,string elNumeroDeCuenta, Vigencia laVigencia);

		float getBalanceAlCorte();
}; 

#endif