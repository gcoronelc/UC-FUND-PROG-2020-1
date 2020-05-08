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
	if( resto == 0 ){
		reporte = "Es par";
	} else {
		reporte = "Es impar";
	}
	// Salida	
	cout << "Reporte: " << reporte << endl;
	return 0;
}
