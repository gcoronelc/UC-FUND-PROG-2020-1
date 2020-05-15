#include <iostream>
using namespace std;
int main(){
	// Variables
	int numero, suma = 0;
	// Entrada y Proceso
	cout << "Ingreso de numeros." << endl;
	cout << "Ingrese 0 para finalizar." << endl;
	do{
		cout << "Numero: "; cin >> numero;
		suma += numero;
	}while(numero != 0);
	// Reporte
	cout << "Suma: " << suma << endl;
	return 0;
}
