// Leer un número entero y calcular la suma de sus digitos.
// Lectura es: 5467
// Salida: 22
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	// Variables
	int numero, suma = 0, digito;
	// Lectura
	cout << "Numero: "; cin >> numero;
	// Proceso
	numero = abs(numero);
	do{
		digito = numero % 10;
		// suma += digito;
		suma = suma + digito;
		numero /= 10;
	} while( numero > 0);
	// Reporte
	cout << "Suma: " << suma << endl;
	return 0;
}
