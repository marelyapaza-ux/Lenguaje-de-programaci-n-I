#include <iostream>

using namespace std;

int main ()
{
	cout << "Hello World!" << endl;
	int n, i;
	double notas[100], suma = 0, promedio;
	cout << "ARREGLO UNIDIMENSIONAL\n";
	cout << "Ingrese la cantidad de numeros (n):" << endl;
	cin >> n;
	
	for (i = 0; i < n; i++) {
        cout << "Nota [" << i << "]: ";
        cin >> notas[i];
        suma = suma + notas[i];
    }
    
    cout << "\n LISTA DE TODAS LAS NOTAS" << endl;
	for (int i=0; i<5;i++){
		cout << "Nota en indice [" << i << "]: " << notas[i] << endl;
	}
	
	cout << "La suma total de las notas es:" << suma << endl;
	cout << "Promedio de las notas es: " << suma/n << endl;

    return 0;
}
