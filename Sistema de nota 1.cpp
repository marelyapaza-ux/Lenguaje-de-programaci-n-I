#include <iostream>

using namespace std;

int main() {
    float nota;
    cout << "SISTEMA DE EVALUACION DE NOTAS (ESCALA 0 - 20) " << endl;
    cout << "Ingrese tu nota final (0 - 20): ";
    cin >> nota;
    
    if(nota < 0 || nota > 20) {
      cout << "ERROR: La nota ingresada no es valida. Debe escribir entre 0 y 20"<< endl;
      return 0;
    }
    else if (nota >= 18) {
        cout << "Estado: Excelente (Sobresaliente)." << endl;
    }   
    else if (nota >= 14) {
        cout << "Estado: Aprobado (Bueno)." << endl;
    }
    else if (nota >= 11) {
        cout << "Estado: Aprobado (Regular)." << endl;
    }
    else {  
        cout << "Estado: Desaprobado" << endl;
    }

    int nivel;
    if (nota >= 18) {
        nivel = 1; // Sobresaliente 18-20
    }
    else if (nota >= 14) {
        nivel = 2; // Bueno 14-17.9
    }
    else if (nota >= 11) {
        nivel = 3; // Regular 11-13.9
    }
    else {
        nivel = 4; // Desaprobado
    }
    
    switch (nivel) {
        case 1:
            cout << "Categoria A: Postulante de cuadro de honor o beca" << endl;
            break;
        case 2:
            cout << "Categoria B: Buen rendimiento academico" << endl;
            break;
        case 3:
            cout << "Categoria C: Aprobado, pero requieren reforzamiento" << endl;
            break;
        case 4:
            cout << "Categoria D: Debe rendir examen de aplazados" << endl;
            break;
        default:
            cout << "Categoria desconocida" << endl;
            break;
    }

    return 0;
} 	
