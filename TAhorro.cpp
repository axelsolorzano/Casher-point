#include "TAhorro.hpp"

TAhorro::TAhorro(float elBalanceAlCorte, string elNumEnPlastico, string elNumeroDeSeguridad, 
		   string elNumeroDeCuenta, Vigencia laVigencia): Tarjeta(elNumEnPlastico, 
			   						  elNumeroDeSeguridad,
									  	elNumeroDeCuenta,
									  		laVigencia){
	balanceAlCorte = elBalanceAlCorte;
}

float TAhorro::getBalanceAlCorte(){
	return balanceAlCorte;
}