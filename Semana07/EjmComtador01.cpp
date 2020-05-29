#include <iostream>
using namespace std;
int main(){
	// Variables
	int numero, contPares;
	// Lectura y Proceso
	contPares = 0;
	for( int cont = 1; cont <= 5; cont++){
		cout << "Numero " << cont << ": ";
		cin >> numero;
		// Evaluar el numero ingresado
		if( numero % 2 == 0 ){
			contPares++;
		}
	}
	// Reporte
	cout << "Cantidad de numeros pares: " << contPares << endl;
}
