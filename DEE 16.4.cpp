#include <iostream>

using namespace std;

int main() {
    int opcion;

    cout << "=== CONSULTA DE COMPATIBILIDAD SANGUÍNEA (GLÓBULOS ROJOS) ===" << endl;
    cout << "Seleccione el grupo sanguíneo a consultar:" << endl;
    cout << "1. O- (Donante Universal)" << endl;
    cout << "2. O+" << endl;
    cout << "3. A-" << endl;
    cout << "4. A+" << endl;
    cout << "5. B-" << endl;
    cout << "6. B+" << endl;
    cout << "7. AB-" << endl;
    cout << "8. AB+ (Receptor Universal)" << endl;
    cout << "Ingrese su opción (1-8): ";
    
    if (!(cin >> opcion)) {
        cout << "\nError: Ingrese un número válido." << endl;
        return 1;
    }

    cout << "\n---------------- RESULTADO DE COMPATIBILIDAD ----------------" << endl;
    
    switch (opcion) {
        case 1:
            cout << "Tipo de sangre: O negativ" << endl;
            cout << " Puede DONAR a: Todos los grupos (O-, O+, A-, A+, B-, B+, AB-, AB+)" << endl;
            cout << " Puede RECIBIR de: O-" << endl;
            break;

        case 2:
            cout << "Tipo de sangre: O positivo" << endl;
            cout << " Puede DONAR a: O+, A+, B+, AB+" << endl;
            cout << " Puede RECIBIR de: O-, O+" << endl;
            break;

        case 3:
            cout << "Tipo de sangre: A negativo" << endl;
            cout << " Puede DONAR a: A-, A+, AB-, AB+" << endl;
            cout << " Puede RECIBIR de: O-, A-" << endl;
            break;

        case 4:
            cout << "Tipo de sangre: A positivo" << endl;
            cout << " Puede DONAR a: A+, AB+" << endl;
            cout << " Puede RECIBIR de: O-, O+, A-, A+" << endl;
            break;

        case 5:
            cout << "Tipo de sangre: B negativo" << endl;
            cout << " Puede DONAR a: B-, B+, AB-, AB+" << endl;
            cout << " Puede RECIBIR de: O-, B-" << endl;
            break;

        case 6:
            cout << "Tipo de sangre: B positivo" << endl;
            cout << " Puede DONAR a: B+, AB+" << endl;
            cout << " Puede RECIBIR de: O-, O+, B-, B+" << endl;
            break;

        case 7:
            cout << "Tipo de sangre: AB negativo" << endl;
            cout << " Puede DONAR a: AB-, AB+" << endl;
            cout << " Puede RECIBIR de: O-, A-, B-, AB-" << endl;
            break;

        case 8:
            cout << "Tipo de sangre: AB positivo" << endl;
            cout << " Puede DONAR a: AB+" << endl;
            cout << " Puede RECIBIR de: Todos los grupos (O-, O+, A-, A+, B-, B+, AB-, AB+)" << endl;
            break;

        default:
            cout << "Opción no válida. Ingrese un número entre 1 y 8." << endl;
            break;
    }

    cout << "------------------------------------------------------------" << endl;

    return 0;
}
