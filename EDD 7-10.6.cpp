#include <iostream>
using namespace std;

int main() 
{
    int numero = 0, sumaTotal = 0, contarPares=0, contarImpares= 0, contarNulos=0; 
    
    cout << " CLASIFICACION DE NUMEROS ENTEROS " << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero ;
        
        if (numero == 0) {
            contarNulos = contarNulos + 1;
        } else if (numero % 2 == 0) {
         	contarPares = contarPares + 1;
        } else {
         	contarImpares= contarImpares+1;
        }
        
        sumaTotal = sumaTotal + numero;
    }  
    
    cout << "Cantidad de numeros pares " << contarPares << endl;
    cout << "Cantidad de numeros impares " << contarImpares << endl;
    cout << "Cantidad de numeros nulos  " << contarNulos  << endl;
    cout << "La suma total : " << sumaTotal << endl;
    
    return 0;
}
