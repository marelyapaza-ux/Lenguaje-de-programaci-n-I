#include <iostream>
using namespace std;

int main() 
{
    double peso = 0, sumaTotal = 0, pesoMaximo= -1.0, pesoMinimo= 999999.0;
	int botellaValida=0, contarDefectoBajoPeso= 0; 
    
    cout << " CONTROL DE CALIDAD " << endl;
    
    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el peso de la botella (gramos):" << i << ": ";
        cin >> peso ;
        
        if (peso <= 0) {
            cout << "Error : Peso invalido";
            continue;
        } 
        
	    botellaValida= botellaValida + 1 ;
	    
	    sumaTotal = sumaTotal + peso;
	    
		if ( peso < 490.0)  {
			contarDefectoBajoPeso= contarDefectoBajoPeso + 1;
		}
		
		if (peso > pesoMaximo) {
		   pesoMaximo = peso;
		}
		
		if (peso < pesoMinimo) {
		   pesoMinimo = peso;
		}
	}
		
		if (botellaValida > 0) {
			cout << "Cantidad de botellas validas: " << botellaValida << endl;
			cout << "Peso promedio del lote valido : " << sumaTotal/botellaValida << "gramos" << endl;
			cout << "Cantidad de botellas con defecto bajo peso ( < 490 g): " << contarDefectoBajoPeso << endl;
		    cout << "Peso maximo registrado: " << pesoMaximo << "gramos" << endl;
		    cout << "Peso minimo registrado: " << pesoMinimo << "gramos" << endl;
		} else {
		    cout << "no se registraron pesos validos para calcular" << endl;
			} 
    return 0;
}
