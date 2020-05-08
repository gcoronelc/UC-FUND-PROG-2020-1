#include<iostream>
#include <sstream>
using namespace std;

// Programa principal
int main (){
	// Variables
	int num1, num2, menor;
	stringstream reporte;
	// Entrada
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	// Proceso
	if( num1 == num2){
		reporte << "Los numeros son iguales.";
	} else {
		menor = num1;
		if(num2 < num1){
			menor = num2;
		}
		reporte << "El menor es: " << menor;
	}
	// Reporte
	cout << reporte.str() << endl;
	return 0;
}
