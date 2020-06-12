#include <iostream>
using namespace std;

// Implementación de funciones
float cuadrado(float numero){
	float rpta;
	rpta = numero * numero;
	return rpta;
}

int main(){
	// Variables
	float numero1, cuadrado1;
	// Datos
	cout << "Numero: "; cin >> numero1;
	// Proceso
	cuadrado1 = cuadrado(numero1);
	// Reporte
	cout << "El cuadrado de " << numero1 << " es " << cuadrado1 << endl;
	return 0;
}
