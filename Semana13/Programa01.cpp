#include <iostream>
#include <math.h>
using namespace std;

int main(){
	system("color 80");
	// Variable
	int numero, numeroAbsoluto;
	// Entrada
	cout << "Numero: ";
	cin  >> numero;
	// Proceso
	numeroAbsoluto = abs(numero);
	// Reporte
	cout << endl << endl;
	cout << "Reporte\n";
	cout << "Numero: " << numero << endl;
	cout << "Numero absoluto: " << numeroAbsoluto << endl;
	return 0;
}


