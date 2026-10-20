#include <iostream>

using namespace std;

int main()
{
	int numero;
	cout << "CONVERTIR NUMEROS A PALABRAS (1-100)" << endl;
	cout << "Ingrese un numero entre 1 y 100 : ";
	cin >> numero;
	
	if (numero<1  || numero>100 ){
		cout << "ERROR: El numero ingreado esta fuera del rango permitido (1-100)" << endl;
	} 
	else {
		cout << "El numero en palabras es: ";
		if(numero == 100) {
		    cout << "Cien" << endl;
		}
		else if(numero >= 10 && numero <= 29) {
		    switch(numero) {
		    	
		    case 10: cout << "Diez"; break;
		    case 11: cout << "Once"; break;
		    case 12: cout << "Doce"; break;
		    case 13: cout << "Trece"; break;
		    case 14: cout << "Catorce"; break;
		    case 15: cout << "Quince"; break;
		    case 16: cout << "Dieciseis"; break;
		    case 17: cout << "Diecisiete"; break;
		    case 18: cout << "Dieciocho"; break;
		    case 19: cout << "Diecinueve"; break;
		    case 20: cout << "Veinte"; break;
		    case 21: cout << "Veintiuno"; break;
		    case 22: cout << "Veintidos"; break;
		    case 23: cout << "Veintitres"; break;
		    case 24: cout << "Veinticuatro"; break;
		    case 25: cout << "Veinticinco"; break;
		    case 26: cout << "Veintiseis"; break;
		    case 27: cout << "Veintisiete"; break;
		    case 28: cout << "Veintiocho"; break;
		    case 29: cout << "Veintinueve"; break;
		    } 
		    cout << endl;
		} 
		else {
			 int decenas = numero/10; 
			 int unidades = numero%10;
			 switch (decenas) {
			 case 0: break; 
			 case 3: cout << "Treinta" ; break;
			 case 4: cout << "Cuarenta" ; break;
			 case 5: cout << "Cincuenta" ; break;
			 case 6: cout << "Sesenta" ; break;
			 case 7: cout << "Setenta" ; break;
			 case 8: cout << "Ochenta" ; break;
			 case 9: cout << "Noventa" ; break;
			 }
			if(decenas>=3 && unidades >0) {
				cout << " y " ;
			}
			if(decenas>=3 || unidades>0 ) {
				switch (unidades) {
				case 1: cout << "Uno"; break;
				case 2: cout << "Dos"; break;
				case 3: cout << "Tres"; break;
				case 4: cout << "Cuatro"; break;
				case 5: cout << "Cinco" ; break;
				case 6: cout << "Seis" ; break;
				case 7: cout << "Siete" ; break;
				case 8: cout << "Ocho" ; break;
				case 9: cout << "Nueve" ; break;
				}
			}
			cout << endl;
		}	
	}
 
	cout << "Presione ENTER para finalizar";
	cin.ignore();
	cin.get();
	return 0;
}
