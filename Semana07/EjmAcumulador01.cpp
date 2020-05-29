#include <iostream>
using namespace std;
int main(){
	// Variables
	int numero, sumaImpares;
	// Lectura y Proceso
	sumaImpares = 0;
	for( int cont = 1; cont <= 5; cont++){
		cout << "Numero " << cont << ": ";
		cin >> numero;
		// Evaluar el numero ingresado
		if( numero % 2 == 1 ){
			sumaImpares += numero;
		}
	}
	// Reporte
	cout << "Suma de impares: " << sumaImpares << endl;
}
