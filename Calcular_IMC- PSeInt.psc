Algoritmo Calcular_IMC
	Definir peso, estatura, imc Como Real
	
	Escribir "Ingrese su peso en kilogramos: "
	Leer peso
	
	Escribir "Ingrese su estatura en metros: "
	Leer estatura
	
	imc <- peso / (estatura * estatura)
	
	Escribir "Su imc es:" , imc
	
	Si imc < 18.5
		Escribir "Diagnostico: Bajo Paso"
	    Sino
			Si imc >= 18.5 Y imc <= 24.9 Entonces
				Escribir "Diagnotico: Peso Normal"
			SiNo
				Si imc >= 25.0 Y imc <= 29.9 Entonces
					Escribir "Diagnostico: Sobrepeso"
				SiNo
					Si imc >= 30.0 Y imc <= 34.9 Entonces
						Escribir " Diagnostico: Obesidad grado I"
					SiNo
						Si imc >= 35.0 Y imc <= 39.9 Entonces
							Escribir "Diagostico : Obesidad grado II"
						Sino 
							Escribir "Diagnostico : Obesidad grado III"
						FinSi
					FinSi
				FinSi
		FinSi
		
	FinSi
	
FinAlgoritmo