#include <iostream>

using namespace std;

int main()
{
    float peso, estatura, imc;

    cout << "Ingrese su peso en kilogramos: " << endl;
    cin >> peso;
    cout << "Ingrese su estatura en etros" << endl;
    cin >> estatura;
    
    imc = peso/ (estatura * estatura);
    
    cout << "\nSu imc es:" << imc << endl;
    
    if (imc < 18.5) 
       cout << "Diagnostico: Bajo peso " << imc << endl;
       
    else if ( imc>=18.5 && imc<=24.9)
       cout << "Diagnostico: Peso normal " << imc << endl;
       
    else if ( imc>=25.0 && imc<=29.9)
       cout << "Diagnostico: Sobrepeso " << imc << endl;
       
    else if ( imc>=30.0 && imc<=34.9)
       cout << "Diagnostico: Obesidad grado I " << imc << endl;
       
    else if ( imc>=35.0 && imc<=39.9)
       cout << "Diagnostico: Obesidad grado II " << imc << endl;
    
	else
       cout << "Diagnostico: Obesidad grado III" << imc << endl;

    
    return 0;
}
