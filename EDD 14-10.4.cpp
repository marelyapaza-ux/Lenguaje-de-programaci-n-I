#include <iostream>

using namespace std;

int main() 
{
	int i,j,MatrizA[3][3], sumaDP;
	cout << "INGRESO DE LA Matriz A" << endl;
	
	for(i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++) {
.			cout << " Ingrese el valor para A [" << i << "][" << j << "]: ";
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
		
	for(i = 0; i < 3; i++) {
		sumaDP= sumaDP + MatrizA[i][i];	
	}
		
		cout<<"La suma de la diagonal princiapl es : "<< sumaDP << endl;
	
	return 0;
	
}
