#include <iostream>
using namespace std;

int main() 
{
    int pago = 0, sumaTotal = 0, contarPagosMayor100 = 0;
    
    for (int i = 1; i <= 8; i++) {
        cout << "Ingrese el pago " << i << ": ";
        cin >> pago;
        
        if (pago > 100) {
            contarPagosMayor100 = contarPagosMayor100 + 1;
        }
        
        sumaTotal = sumaTotal + pago;
    }  
    
    cout << "La suma total de ventas: " << sumaTotal << endl;
    cout << "El promedio de ventas: " << (sumaTotal / 8) << endl;
    cout << "Clientes preferenciales con pagos > a 100: " << contarPagosMayor100 << endl;
    
    return 0;
}
