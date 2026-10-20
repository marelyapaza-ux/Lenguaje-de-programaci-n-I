#include <iostream>

using namespace std;

int main ()
{
	int monto, saldoT= 0, opcion;
	do {
		cout << "Ingrese el monto (S/.1, S/.2, S/.5, S/.10, S/.15) : " ;
		cin >> monto;
		
		saldoT= saldoT + monto;
		
		cout << "¿Desea ingresar mas dinero? (1. S / 2. N) : " ;
		cin >> opcion;
		
	} while (opcion == 1);
	
	cout << "El saldo final de la tarjeta: " << saldoT << endl;
    return 0;
}
