#include <iostream>

using namespace std;

int main()
{
    float peso, estatura, imc;
    int opcionRango;
    cout << "CALCULO DE INDICE DE MASA CORPORAL" << endl;
    cout << "Ingrese su peso en kilogramos (kg)" << endl;
    cin >> peso;
    cout << "Ingrese su estatura en metros (m)" << endl;
    cin >> estatura;
    
    if(peso<=0 || estatura <=0) {
       cout << "Error el peso y la estatura deben ser valores positivos" << endl;
    }
    else;
         imc = peso/ (estatura * estatura);
         if(imc<18.5) {
         	opcionRango = 1;
    }else if (imc>=18.5 && imc<=24.9) {
    opcionRango = 2;}
    else if (imc>=25 && imc<=29.9) {
    	opcionRango = 3;
    }else if (imc>=30.0 && imc<=34.9){
    opcionRango = 4;}
    else {
    	opcionRango= 5;
    }
    
    
    cout << "Su Indice de Masa Corporal calculado es: "<<imc<<"kg/m2"<<endl;
    cout << "Diagnostico: ";
    switch (opcionRango) {
    	
    case 1:
    	cout << "Bajo peso" << endl;
    	break;
    case 2:
    	cout << "Peso normal" << endl;
    	break;
    case 3:
    	cout << "Sobrepeso" << endl;
    	break;
    case 4:
    	cout << "Obesidad grado I" << endl;
    	break;
    case 5:
    	cout << "Obesidad grado II" << endl;
    	break;
    default:
    	cout << "No pudo clasificar el IMC" << endl;
    }
    return 0;
    }
    
    
    
    	
    	
    	
 

