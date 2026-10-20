/* Marely Camila Apaza Quispe.cpp*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int tipoHabitacion, noches, huespedes, planAlimentacion, huespedesExtras, capacidadBase = 0 ;
	double costoporNoche=0.0, recargoHuespedes=0.0, costoAlimentacion=0.0;
    double subtotalAlojamiento=0.0, totalAcumulado=0.0, descuento=0.0, montoTotal=0.0;
	cout << "TARIFICADOR DE RESERVAS DE HOTEL" << endl;
	
	cout << "Selecciona el tipo de habitacion : " << endl;
	cout << "1: Habitacion Estandar (S/.50.00 por noche)" << endl;
	cout << "2: Habitacion Doble (S/.80.00 por noche)" << endl;
	cout << "3: Suite Ejecutiva (S/.140.00 por noche)" << endl;
	cout << "OPCION: ";
	cin >> tipoHabitacion;
	
	switch(tipoHabitacion) {
		case 1:
			costoporNoche = 50.00;
			capacidadBase = 1;
			break;
		case 2:
			costoporNoche = 80.00;
			capacidadBase = 2;
			break;
		case 3:
			costoporNoche = 140.00;
			capacidadBase = 3;
			break;
		default:
			cout << "ERROR: Opcion de habitacion no valida" << endl;
			return 1;
	}
	
	cout << "Ingrese el numero total de noches de estadia: ";
	cin >> noches;
	cout << "Ingrese la cantidad total de huespedes: ";
	cin >> huespedes;
	
	if (noches <= 0 || huespedes < 1) {
		cout << "ERROR: El numero de noches debe ser mayor a 0 y los huespedes al menos 1 "<< endl;
		return 1; 
	}
	
	if(huespedes > capacidadBase) {
		huespedesExtras= huespedes - capacidadBase;
		recargoHuespedes = huespedesExtras*15.00*noches;
	}
	
	subtotalAlojamiento= (costoporNoche * noches) + recargoHuespedes;
	
	cout << "Seleccione Plan de Alimentacion: " << endl;
	cout << "1: Solo Desayuno (incluido sin costo adicional)" << endl;
	cout << "2: Pension Completa: Almuerzo y cena (S/25.00 por persona por noche)" << endl;
    cout << "OPCION: ";
	cin >> planAlimentacion;
	
	if(planAlimentacion  == 2) {
		costoAlimentacion= 25.00 * huespedes * noches;
	 } else if ( planAlimentacion != 1 ) {
	     cout << "ERROR: Plan de alimentacion No valida "<< endl;
		
	}
	
	totalAcumulado = subtotalAlojamiento + costoAlimentacion;
	
	if (noches > 5) {
		descuento= totalAcumulado * 0.12;
	}
	
	montoTotal = totalAcumulado - descuento;
	
	cout << fixed << setprecision(2);
	
	cout << "Tipo de habitacion   : ";
	if (tipoHabitacion == 1) {
		cout << "Habitacion estandar";
	} else if (tipoHabitacion == 2) {
		cout << "Habitacion doble ";
	} else if (tipoHabitacion == 3) {
		cout << "Suite Ejecutiva";
	}
	cout << endl;	
		
	cout << "Subtotal de alojamiento      : S/." << subtotalAlojamiento << endl;
	cout << "Recargo por huespedes : S/." << recargoHuespedes << endl;
	cout << "Costo de Alimentacion  : S/." << costoAlimentacion << endl;
	cout << "Descuento estadia larga : -S/." << descuento << endl;
	cout << "Monto total a pagar : S/." << montoTotal << endl;
	
	return 0;
}
