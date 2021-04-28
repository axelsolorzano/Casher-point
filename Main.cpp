#include "Cliente.cpp"
#include "Tarjeta.cpp"
#include "TCredito.cpp"
#include "Vigencia.cpp"
#include "TDevito.cpp"
#include "TAhorro.cpp"
#include "Cuenta.cpp"
#include "Datos.cpp"
#include "Deposito.cpp"
#include "HistorialMovimientos.cpp"
#include "Movimiento.cpp"
#include "SistemaMovimientos.cpp"
#include "Cajero.cpp"

#include <stdlib.h>
#include <iostream>


int main(void){
	// Creating a client object with the Empty constructor
	// crando un objeto cliente con el constructor vasio
	Cliente cliente1;
	Tarjeta tarjeta1;
	Vigencia vigencia1("12","24");
	TCredito tc1(1050.75, "1111222233334444", "543", "55986436", vigencia1);
	
	cout << "Balance de tc1: " << tc1.getBalanceAlCorte() << endl;
	cout << "tc1, num en plastico: " << tc1.getNumDePlastico() << endl;  
	cout << "tc1, num de seg: " << tc1.getNumDeSeguridad() << endl;  
	cout << "tc1, num de cta: " << tc1.getNumDeCuenta() << endl;  
	cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;

	Cliente cfantasma;
	Tarjeta tfantasma;
	Vigencia vfantasma("1","29");
	TCredito tcfantasma(3050.05, "6666777788889999", "123", "44986436", vfantasma);

	cout<<"Balance de tcfantasma: "<<tcfantasma.getBalanceAlCorte()<<endl;
	cout<<"tcfantasma numero del plastico: "<<tcfantasma.getBalanceAlCorte()<<endl;
	cout<<"tcfantasma numero de seguridad: "<<tcfantasma.getNumDeSeguridad()<<endl;
	cout<<"tcfantasma numero de cuentea: "<<tcfantasma.getNumDeCuenta()<<endl;
	cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;

    // Creating an client object with the non-empty constructor
	Cliente cliente2("Joe", "AIMA234343MKA", "Bla bla bla...");

	cout << "Nombre: " << cliente2.getNombre() << endl;
	cout << "RFC: " << cliente2.getRFC() << endl;
	cout << "Domicilio: " << cliente2.getDomicilio() << endl;

	cout << "Nombre del cliente1: " << cliente1.getNombre() << endl;

	Tarjeta tarjeta2("12334", "345", "453678", vigencia1);

	cout << "Numero de plastico (1): " << tarjeta1.getNumDePlastico() << endl;
	cout << "Numero de plastico (2): " << tarjeta2.getNumDePlastico() << endl;
	cout<<"---------------------------------------------------------------------------------------------------------------------------"<<endl;
	// crando un objeto cliente con el constructor no vasio
	Cliente vivo("Kratos","AK47AK48","calle olimpo");
	Vigencia vvigencia("12","10");
	HistorialMovimientos hvivo(1000,500);
	Tarjeta tvivo("30524","450","481965",vvigencia);
	TCredito tcvivo(5048.25,"121245457878","450","85201346",vvigencia); 
	TAhorro tavivo(548.25,"111245157818","450","85209336",vvigencia); 
	TDevito tdvivo(5048.25,"111245159819","450","85809836",vvigencia); 
	Datos datosvivo("Kratos",450,"10/12/21");
	Movimiento mvivo("Kratos",450,"10/12/20",500);
	Deposito depositovivo("Kratos",450,"15/8/21",100.50);
	Cuenta cvivo("credito",450,"Kratos",hvivo);
	Cajero cavivo(7856,548,"banco olimpo");
	SistemaMovimientos svivo("kratos",7000,1000,500,"deposito y retiro del saldo guerdado", "se deposito 10000 y se retiro 500");

	cout<<"----------cliente-----------"<<endl;
	cout<<"Nombre: "<<vivo.getNombre()<<endl;
	cout<<"RFC: "<<vivo.getRFC()<<endl;
	cout<<"Domicilio: "<<vivo.getDomicilio()<<endl;
	cout<<endl;

	cout<<"----------tarjeta-----------"<<endl;
	cout<<"tvivo, numero de cuenta: "<<tvivo.getNumDeCuenta()<<endl;
	cout<<"tvivo, numero de platico: "<<tvivo.getNumDePlastico()<<endl;
	cout<<"tvivo, numero de seguridad: "<<tvivo.getNumDeSeguridad()<<endl;
	cout<<"tvivo, vigencia: "<<vvigencia.getAnio()<<"/"<<vvigencia.getMes()<<endl;
	cout<<endl;

	cout<<"----------tarjeta de credito----------"<<endl;
	cout<<"Balance de tcvivo: "<<tcvivo.getBalanceAlCorte()<<endl;
	cout<<"tcvivo, numero del plastico: "<<tcvivo.getBalanceAlCorte()<<endl;
	cout<<"tcvivo, numero de seguridad: "<<tcvivo.getNumDeSeguridad()<<endl;
	cout<<"tcvivo, numero de cuentea: "<<tcvivo.getNumDeCuenta()<<endl;
	cout<<"tcvivo, vigencia: "<<vvigencia.getAnio()<<"/"<<vvigencia.getMes()<<endl;
	cout<<endl;

	cout<<"----------tarjeta de Devito----------"<<endl;
	cout<<"Balance de tdvivo: "<<tdvivo.getBalanceAlCorte()<<endl;
	cout<<"tdvivo, numero del plastico: "<<tdvivo.getBalanceAlCorte()<<endl;
	cout<<"tdvivo, numero de seguridad: "<<tdvivo.getNumDeSeguridad()<<endl;
	cout<<"tdvivo, numero de cuentea: "<<tdvivo.getNumDeCuenta()<<endl;
	cout<<"tdvivo, vigencia: "<<vvigencia.getAnio()<<"/"<<vvigencia.getMes()<<endl;
	cout<<endl;

	cout<<"----------tarjeta de Ahorro----------"<<endl;
	cout<<"Balance de tavivo: "<<tavivo.getBalanceAlCorte()<<endl;
	cout<<"tavivo, numero del plastico: "<<tavivo.getBalanceAlCorte()<<endl;
	cout<<"tavivo, numero de seguridad: "<<tavivo.getNumDeSeguridad()<<endl;
	cout<<"tavivo, numero de cuentea: "<<tavivo.getNumDeCuenta()<<endl;
	cout<<"tavivo, vigencia: "<<vvigencia.getAnio()<<"/"<<vvigencia.getMes()<<endl;
	cout<<endl;

	cout<<"----------Datos----------"<<endl;
	cout<<"Nombre: "<<datosvivo.getelnombre()<<endl;
	cout<<"Numero de cuenta: "<<datosvivo.getelnumerocuenta()<<endl;
	cout<<"Fecha: "<<datosvivo.getelfecha()<<endl;
	cout<<endl;

	cout<<"----------Movimiento----------"<<endl;
	cout<<"Nombre: "<<mvivo.getelnombre()<<endl;
	cout<<"Numero de cuenta: "<<mvivo.getelnumerocuenta()<<endl;
	cout<<"Fecha: "<<mvivo.getelfecha()<<endl;
	cout<<"Cantidad movida: "<<mvivo.getelcantidad()<<endl;
	cout<<endl;

	cout<<"----------Deposito----------"<<endl;
	cout<<"Nombre: "<<depositovivo.getelnombre()<<endl;
	cout<<"Numero de cuenta: "<<depositovivo.getelnumerocuenta()<<endl;
	cout<<"Fecha: "<<depositovivo.getelfecha()<<endl;
	cout<<"Importe: "<<depositovivo.getelimporte()<<endl;
	cout<<endl;

	cout<<"----------Cuenta-----------"<<endl;
	cout<<"tipo de cuenta:  "<<cvivo.geteltipocuenta()<<endl;
	cout<<"numero de cuenta: "<<cvivo.getelnumerocuenta()<<endl;
	cout<<"Cliente asociado: "<<cvivo.getelclienteasosiado()<<endl;
	cout<<"Historial de movimientos recientes: \ndeposito: "<<hvivo.geteldeposito()<<" retiro: "<<hvivo.getelretiro()<<endl;
	cout<<endl;

	cout<<"----------Cajero-----------"<<endl;
	cout<<"Codigo unico: "<<cavivo.getelcodigounico()<<endl;
	cout<<"Numero de sucursal: "<<cavivo.getelnumerosucursal()<<endl;
	cout<<"Nombre del banco: "<<cavivo.getelnombrebanco()<<endl;
	cout<<endl;

	cout<<"----------SistemaMovimiento-----------"<<endl;
	cout<<"validarcliente:  "<<svivo.getelvalidarcliente()<<endl;
	cout<<"saldo actual: "<<svivo.getelconsultasaldo()<<endl;
	cout<<"depositado: "<<svivo.geteldepositarefectivo()<<endl;
	cout<<"retiro: "<<svivo.getelretirarefectivo()<<endl;
	cout<<"movimiento registrado: "<<svivo.getelalmacenarmovimiento()<<endl;
	cout<<"mostranto movimiento reciente: "<<svivo.getelconsultarmovimiento()<<endl;
	cout<<endl;




	return EXIT_SUCCESS;
}


