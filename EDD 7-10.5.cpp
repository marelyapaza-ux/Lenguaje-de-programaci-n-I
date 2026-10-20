#include <iostream>
using namespace std;

int main() 
{
    double pago = 0, sumaTotal = 0; 
    int contarTarifaCompleta = 0;
    cout << "REGISTRO DE PASAJE" << endl;
    
    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese el monto " << i << ": ";
        cin >> pago;
        
        if (pago == 15.0) {
            contarTarifaCompleta = contarTarifaCompleta + 1;
        }
        
        sumaTotal = sumaTotal + pago;
    }  
    
    cout << "El dinero total acumulado en caja  " << sumaTotal << " soles" << endl;
    cout << "El costo promedio pagado por pasajero: " << sumaTotal / 10.0 << " soles" << endl;
    cout << "La cantidad total de pasajes a tarifa completa cobrados: " << contarTarifaCompleta << endl;
    
    return 0;
}
