#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double montoOriginal, descuentoPorcentaje = 0.0, descuentoAdicional = 0.0;
	int tipoCliente;
	cout << "SISTEMA DE VENTAS Y DESCUENTOS" << endl;
	cout << "Ingrese el monto total de la compra $ ";
	cin >> montoOriginal;
	
	if (montoOriginal <= 0) {
		cout << "ERROR el monto debe ser un valor positivo" << endl;
		return 1;
	}
	cout << "Selecciona el tipo de cliente: " << endl;
	cout << "1: Cliente Regular" << endl;
	cout << "2: Cliente Miembro" << endl;
	cout << "3: Cliente Vip" << endl;
	cout << "OPCION: ";
	cin >> tipoCliente;
	
	switch(tipoCliente) {
		case 1:
			descuentoPorcentaje = 0.05;
			break;
		case 2:
			descuentoPorcentaje = 0.10;
			break;
		case 3:
			descuentoPorcentaje = 0.20;
			break;
		default:
			cout << "ERROR: Opcion del cliente no validada" << endl;
			return 1;
	}
	
	if (montoOriginal > 200.00) {
		descuentoAdicional = 0.05; 
	}
	
	double porcentajeTotal = descuentoPorcentaje + descuentoAdicional;
	double montoDescuento = montoOriginal * porcentajeTotal; 
	double montoFinal = montoOriginal - montoDescuento;
	
	cout << fixed << setprecision (2);
	cout << "\n Resumen de compra" << endl;
	cout << "Monto original $" << montoOriginal << endl;
	cout << "Descuento total aplicado: " << porcentajeTotal * 100 << "%" << endl;
	cout << "Monto descontado $" << montoDescuento << endl;
	cout << "Monto a pagar $" << montoFinal << endl;
	
	return 0;
}
	
	
		
			
			
