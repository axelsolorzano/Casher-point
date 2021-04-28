#include "TDevito.hpp"

TDevito::TDevito(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad, 
		   string elNumeroDeCuenta, Vigencia laVigencia): Tarjeta(elNumEnPlastico, 
			   						  elNumeroDeSeguridad,
									  	elNumeroDeCuenta,
									  		laVigencia){
	balanceAlCorte = elBalanceAlCorte;
}

float TDevito::getBalanceAlCorte(){
	return balanceAlCorte;
}