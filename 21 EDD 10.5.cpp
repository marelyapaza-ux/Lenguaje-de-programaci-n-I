#include <iostream>
using namespace std;
 
int main() 
{
    cout << "Hello World!" << endl;
	int n,m,i,j,matriz[100][100], suma=0;   
    
    cout << "ARREGLO BIDIMENSIONAL (MATRIZ)" << endl;
	cout << "INGRESO DE LA MATRIZ" << endl;
    cout << "Cuantas Filas(n) : "; 
    cin >> n;
    cout << "Cuantas Columnas(m) : "; 
    cin >> m;
 
    for (i = 0; i< n; i++) {
        for (j = 0; j < m ; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma = suma + matriz[i][j];
        }
    }
    
    for (i = 0; i< n; i++) {
        for (j = 0; j < m ; j++) 
        	cout << matriz[i][j] << "\t";
		cout << endl;
    }
    
    cout << "La suma de los elementos de la matriz es :" << suma << endl;
    
    return 0;
}

