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
	reporte = "Impar"; // Punto de partida
	resto = numero % 2;
	if( resto == 0 ){
		reporte = "Es par";
	} 
	// Salida	
	cout << "Reporte: " << reporte << endl;
	return 0;
}
