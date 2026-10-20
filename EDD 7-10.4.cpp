#include <iostream>
using namespace std;

int main() 
{
    int contarAltoConsumo = 0,consumo = 0, sumaTotal = 0; 
    
    cout << "REGISTRO DE CONSUMO ELECTRICO SEMANAL" << endl;
    
    for (int i = 1; i <= 7; i++) {
        cout << "Ingrese el consumo (kWh) del dia " << i << ": ";
        cin >> consumo;
        
        if (consumo > 15.0) {
            contarAltoConsumo = contarAltoConsumo + 1;
        }
        
        sumaTotal = sumaTotal + consumo;
    }  
    
    cout << "El consumo acumulado total de la semana: " << sumaTotal << " kWh" << endl;
    cout << "Consumo promedio diario: " << (sumaTotal / 7.0) << " kWh" << endl;
    cout << "Cantidad de dias con exceso de consumo: " << contarAltoConsumo << endl;
    
    return 0;
}
