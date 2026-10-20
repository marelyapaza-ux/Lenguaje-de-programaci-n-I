#include <iostream>
using namespace std;

int main() 
{
    int temperatura = 0, sumaTotal = 0, contarAlertas= 0;
    
    for (int i = 1; i <= 5; i++) {
        cout << "Ingrese la temperatura (ºC)" << i << ": ";
        cin >> temperatura;
        
        if (temperatura > 28.0) {
            contarAlertas = contarAlertas + 1;
        }
        
        sumaTotal = sumaTotal + temperatura;
    }  
    
    cout << "La temperatura promedio del dia: " << sumaTotal/ 5 << endl;
    cout << "Cantidad total de alertas por calor extremo: " << contarAlertas << endl;
    
    return 0;
}
