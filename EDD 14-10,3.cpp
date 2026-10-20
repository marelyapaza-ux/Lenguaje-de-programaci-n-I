#include <iostream>

using namespace std;

int main() 
{
	int i,j,MatrizA[3][3], sumacol;
	cout << "INGRESO DE LA Matriz A" << endl;
	
	for(i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++) {
			cout << " Ingrese el valor para A [" << i << "][" << j << "]: ";
			cin >> MatrizA[i][j];	
		}
	}
	
	cout << "-- MATRIZ A RESULTANTE --" << endl;
	for(i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		    cout << MatrizA[i][j] << "\t";
		}
		cout << endl;
    }
		
	for(j = 0; j < 3; j++) {
		sumacol = 0;
		
		for (i = 0; i < 3; i++) {
			sumacol = sumacol + MatrizA[i][j];
		}
		
		cout<<"La suma de la columna "<< j <<" es: "<< sumacol << endl;
	}
	return 0;
	
}
	
		
		
