#include <iostream>

using namespace std;

int main ()
{
	cout << "Hello World!" << endl;
	int i, numero;
	char respuesta;
	do {
	cout << "Ingrese el numero para generar la tabla de multiplicacion: ";
	cin >> 	numero;
	
	cout << " Tabla del " << numero << " : " << endl;
	for (i = 1; i <=10; i++){
		cout << numero << " x " << i << " = " << (numero * i) << endl;
	}	
	cout << "¿Desea generar otra tabla s/n:";
	cin >> respuesta;
	cout << endl;
	
	} while  (respuesta == 's' || respuesta == 'S');
	
	return 0;
}

	
