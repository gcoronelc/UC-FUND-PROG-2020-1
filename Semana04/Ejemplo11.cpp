#include<iostream>
using namespace std;

// Programa principal
int main (){
	// Variables
	int numero, resto;
	string reporte;
	// Entrada
	cout << "Ingresar numero: ";
	cin  >> numero;
	// Proceso
	resto = numero % 2;
	reporte = (resto==0)?"Es par":"Es impar";
	// Salida	
	cout << "Reporte: " << reporte << endl;
	return 0;
}
