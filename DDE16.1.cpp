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
		if(numero == 100);
		    cout << "Cien" << endl;
		 }
		else if(numero >= 10 && numero <= 29)
		    switch(numero) {
		    	
		    case 10: << "Diez"; break;
		    case 11: << "Once"; break;
		    case 12: << "Doce"; break;
		    case 13: << "Trece"; break;
		    case 14: << "Catorce"; break;
		    case 15: << "Quince"; break;
		    case 16: << "Dieciseis"; break;
		    case 17: << "Diecisiete"; break;
		    case 18: << "Dieciocho"; break;
		    case 19: << "Diecinueve"; break;
		    case 20: << "Veinte"; break;
		    case 21: << "Veintiuno"; break;
		    case 22: << "Veintidos"; break;
		    case 23: << "Veintitres"; break;
		    case 24: << "Veinticuatro"; break;
		    case 25: << "Veinticinco"; break;
		    case 26: << "Veintiseis"; break;
		    case 27: << "Veintisiete"; break;
		    case 28: << "Veintiocho"; break;
		    case 29: << "Veintinueve"; break;
		    
		    } 
		    cout << endl;
		} 
		else {
			 int docenas = numero/10;
			 int unidades = numero%10;
			 switch (docenas) {
			 	
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
   
