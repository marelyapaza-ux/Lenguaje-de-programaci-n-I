#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int servicio, edad, nocturno;
	double costoBase = 0.0, descuento = 0.0, recargo = 0.0, costoFinal = 0.0;

	cout << "CALCULADORA DE TRIAJE Y COSTO DE CONSULTA MEDICA" << endl;
	
	cout << "Selecciona el servicio medico : " << endl;
	cout << "1: Medicina General ($30.00)" << endl;
	cout << "2: Pediatria ($45.00)" << endl;
	cout << "3: Cardiologia ($70.00)" << endl;
	cout << "4: Traumatologia ($60.00)" << endl;
	cout << "OPCION: ";
	cin >> servicio;
	
	switch(servicio) {
		case 1:
			costoBase = 30.00;
			break;
		case 2:
			costoBase = 45.00;
			break;
		case 3:
			costoBase = 70.00;
			break;
		case 4:
			costoBase = 60.00;
			break;
		default:
			cout << "ERROR: Codigo de servicio erroneo" << endl;
			return 1;
	}
	
	cout << "Ingrese la edad del paciente (en anos): ";
	cin >> edad;
	
	if (edad < 0) {
		cout << "ERROR: La edad ingresada no puede ser negativa" << endl;
		return 1; 
	}
	
	if(servicio == 2 && edad >= 18) {
		cout << "Debe ser atendido en Medicina General" << endl;
		costoBase = 30.00;
		servicio = 1;
	}
	
	if(edad >= 65) {
		descuento = costoBase * 0.25;	
	}
	
	cout << "Es horario de atencion nocturna? (1: Si, 0: No): ";
	cin >> nocturno;
	
	if(nocturno == 1) {
		recargo = costoBase * 0.20;
	}
	
	costoFinal = (costoBase - descuento) + recargo;
	
	cout << fixed << setprecision(2);
	
	cout << "Servicio asignado   : ";
	if (servicio == 1) {
		cout << "Medicina General";
	} else if (servicio == 2) {
		cout << "Pediatria";
	} else if (servicio == 3) {
		cout << "Cardiologia";
	} else if (servicio == 4) {
		cout << "Traumatologia";
	}
	cout << endl;	
		
	cout << "Costo base          : $" << costoBase << endl;
	cout << "Descuento aplicado  : -$" << descuento << endl;
	cout << "Recargo             : +$" << recargo << endl;
	cout << "Total neto a pagar  : $" << costoFinal << endl;
	
	return 0;
}
	
	
		
			
			
