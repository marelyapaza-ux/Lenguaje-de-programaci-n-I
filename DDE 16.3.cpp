#include <iostream>

using namespace std;

int main() {
    float glucosa;
    int categoria = 0;

    cout << "=== CLASIFICACIÓN DE GLUCOSA EN SANGRE (AYUNAS) ===" << endl;
    cout << "Ingrese el nivel de glucosa en mg/dL: ";
    
    
    if (!(cin >> glucosa) || glucosa < 0) {
        cout << "Error: Ingrese un valor válido de glucosa." << endl;
        return 1;
    }

    
    if (glucosa < 70.0) {
        categoria = 1; 
    } 
    else if (glucosa >= 70.0 && glucosa <= 99.0) {
        categoria = 2; 
    } 
    else if (glucosa >= 100.0 && glucosa <= 125.0) {
        categoria = 3; 
    } 
    else {
        categoria = 4; 
    }

    cout << "\n---------------- DIAGNÓSTICO ----------------" << endl;
    switch (categoria) {
        case 1:
            cout << "Estado: HIPOGLUCEMIA" << endl;
            cout << "Detalle: Nivel críticamente bajo de azúcar en sangre." << endl;
            cout << "Recomendación: Consumir carbohidratos de rápida absorción y consultar a un médico." << endl;
            break;

        case 2:
            cout << "Estado: NORMAL" << endl;
            cout << "Detalle: Nivel saludable de glucosa en ayunas." << endl;
            cout << "Recomendación: Mantener hábitos de alimentación sanos y actividad física regular." << endl;
            break;

        case 3:
            cout << "Estado: PREDIABETES" << endl;
            cout << "Detalle: Nivel elevado de glucosa en ayunas." << endl;
            cout << "Recomendación: Realizar cambios en la dieta, hacer ejercicio y realizar seguimiento médico." << endl;
            break;

        case 4:
            cout << "Estado: DIABETES" << endl;
            cout << "Detalle: Nivel alto de glucosa en ayunas." << endl;
            cout << "Recomendación: Acudir al médico o endocrinólogo para confirmación y tratamiento." << endl;
            break;

        default:
            cout << "Categoría no reconocida." << endl;
            break;
    }
    cout << "---------------------------------------------" << endl;

    return 0;
}
