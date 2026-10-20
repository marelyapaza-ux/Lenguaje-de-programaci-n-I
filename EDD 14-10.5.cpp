#include <iostream>

using namespace std;

int main() 
{
    int contador = 1, sumaPar = 0, suma=0, sumaImpar = 0;
	while (contador <= 10) {
		cout << "Numero : " << contador << endl;
		if (contador % 2 == 0) 
	       sumaPar = sumaPar + contador;
	    else
	       sumaImpar = sumaImpar + contador;
	    
		suma = suma + contador;
		contador = contador + 1;
	    
	}
	
	cout<<"La suma total de numeros pares es  : "<< sumaPar << endl;
	cout<<"La suma total de numeros pares es  : "<< sumaImar << endl;
	cout<<"La suma total es : "<< suma << endl;
	
	return 0;
}
