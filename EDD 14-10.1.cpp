#include <iostream>

using namespace std;

int main() 
{
	int i,j,MatrizA[2][3];
	cout << "INGRESO DE LA Matriz A" << endl;
	
	for(i = 0; i < 2; i++) {
		
		for (j = 0; j < 3; j++) {
			cout << " Ingrese el valor para A [" << i << "][" << j << "]: ";
			cin >> MatrizA[i][j];	
		}
	}
	
	cout << "-- MATRIZ A RESULTANTE --" << endl;
	for(i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
		    cout << MatrizA[i][j] << "\t";
		}
        cout << endl;
    }
    return 0;
}
			
	
