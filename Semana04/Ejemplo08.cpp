#include<iostream>
using namespace std;

// Programa principal
int main (){
	// Variables
	int numero;
	string rpta;	
	// Datos
	cout << "Ingrese un numero del 1 al 5: ";
	cin  >> numero;	
	// Proceso
	// Conversion
	switch(numero){
		case 1:
			rpta = "En romano es: I";
			break;
		case 2:
			rpta = "En romano es: II";
			break;
		case 3:
			rpta = "En romano es: III";
			break;
		case 4:
			rpta = "En romano es: IV";
			break;
		case 5:
			rpta = "En romano es: V";
			break;
		default:
			rpta = "Error en el numero.";
	}
	// Reporte
	cout << rpta << endl;	
	return 0;
}
