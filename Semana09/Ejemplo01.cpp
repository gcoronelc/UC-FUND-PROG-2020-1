#include <iostream>
using namespace std;

// Prototipos
int cubo(int numero);
double cubo(double numero);

int main(){
	// Variables
	int numero1, cubo1;
	double numero2, cubo2;
	// Datos
	cout << "Numero 1:"; cin >> numero1;
	cout << "Numero 2:"; cin >> numero2;
	// Proceso
	cubo1 = cubo(numero1);
	cubo2 = cubo(numero2);
	// Reporte
	cout << "El cubo de " << numero1 << " es " << cubo1 << endl;
	cout << "El cubo de " << numero2 << " es " << cubo2 << endl;
	return 0;
}

// Implementaci�n de funciones
int cubo(int numero){
	return numero * numero * numero;
}

double cubo(double numero){
	return numero * numero * numero;
}

