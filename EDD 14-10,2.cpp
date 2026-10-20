#include <iostream>

using namespace std;

int main() 
{
	int i,j,MatrizA[3][3], suma=0;
	cout << "INGRESO DE LA Matriz A" << endl;
	
	for(i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++) {
			cout << " Ingrese el valor para A [" << i << "][" << j << "]: ";
			cin >> MatrizA[i][j];
			suma = suma + MatrizA[i][j];	
		}
	}
	
	cout << "-- MATRIZ A RESULTANTE --" << endl;
	for(i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
		    cout << MatrizA[i][j] << "\t";
		}
        cout << endl;
    }
    
    cout << "\n La suma total de la matriz A es: " <<  suma << endl;
    return 0;
}
			
	
