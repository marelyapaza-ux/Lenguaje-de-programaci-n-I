#include <iostream>

using namespace std;

int main ()
{
	double nota;
	
	do {
		cout << "Ingrese la nota (0 a 20) : " ;
		cin >> nota;
		if( nota < 0 || nota > 20) {
		  cout << "ERROR: La nota es de 0 a 20. Intente de nuevo" << endl;
		}
		
	} while (nota< 0 || nota > 20) ;
	
	if ( nota >= 10.5) {
	   cout << "APROBADO" << endl;
	}
	else {
		cout << "DESAPROBADO" << endl;
	 }
	 return 0;
}  
