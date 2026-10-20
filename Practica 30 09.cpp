#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int categoria , telepeaje ;
	double peso, tarifaBase=0.0, multa=0.0, descuento= 0.0, totalPagar= 0.0;

	cout << "CALCULADORA DE PEAJE Y EXCESO DE CARGA" << endl;
	
	cout << "Selecciona la categoria del vehiculo : " << endl;
	cout << "1: Auto / Camioneta ($3.00)" << endl;
	cout << "2: Autobus ($6.00)" << endl;
	cout << "3: Camion de carga ($10.00)" << endl;
	cout << "OPCION: ";
	cin >> categoria;
	
	switch(categoria) {
		case 1:
			tarifaBase = 3.00;
			break;
		case 2:
			tarifaBase= 6.00;
			break;
		case 3:
			tarifaBase = 10.00;
			break;
		default:
			cout << "ERROR: Categoria erronea" << endl;
			return 1;
	}
	
	cout << "Ingrese el peso total del vehiculo (en toneladas): ";
	cin >> peso;
	
	if (peso <= 0) {
		cout << "ERROR: El peso ingresado debe ser mayor a 0" << endl;
		return 1; 
	}
	
	if(categoria== 3 && peso > 12.0) {
		multa = (peso - 12.0) * 2.50;
	}
	
	cout << "Cuenta con pase electronico de telepeaje (1: Si, 0: No): ";
	cin >> telepeaje;
	
	if(telepeaje == 1) {
		descuento= tarifaBase * 0.15;
	}
	
	totalPagar = (tarifaBase - descuento) + multa;
	
	cout << fixed << setprecision(2);
	
	cout << "Categoria de vehiculo   : ";
	if (categoria == 1) {
		cout << "Auto/ Camioneta";
	} else if (categoria == 2) {
		cout << "Autobus";
	} else if (categoria == 3) {
		cout << "Camion de carga";
	}
	cout << endl;	
		
	cout << "Tarifa Base          : $" << tarifaBase << endl;
	cout << "Descuento por telepeaje : -$" << descuento << endl;
	cout << "Penalizacion por exceso   : +$" << multa << endl;
	cout << "Monto total a pagar  : $" << totalPagar << endl;
	
	return 0;
}
	
	
		
			
			
