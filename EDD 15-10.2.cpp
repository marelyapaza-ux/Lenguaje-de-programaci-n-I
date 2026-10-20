#include <iostream>

using namespace std;

int main ()
{
	int n, i=0, suma=0, numero;
	cout << "Ingrese la cantidad de numeros (n):" << endl;
	cin >> n;

	do {
		cout << "Numero : " << i+1 << endl;
		cin >> numero;
		suma = suma + numero;
		i= i + 1;
		
	} while ( i < n );
	cout << "La suma total es:" << suma << endl;
	cout << "Promedio es: " << suma/n << endl;
	return 0;
}
