#include <iostream>
using namespace std;
int main(){
	// Variables
	int num1, num2, cantMultiplos5, cantMultiplos5y3;
	int varAuxiliar;
	// Entrada
	cout << endl;
	cout << "ENTRADA" << endl;
	cout << "------------------------------------" << endl;
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	// Proceso
	// Inicializar variables
	cantMultiplos5 = 0;
	cantMultiplos5y3 = 0;
	// Tomando el ejemplo, conviene hacer el bucle de 10 a 50.
	// Se debe garantizar que num1 < num2. 
	if( num2 < num1 ){
		varAuxiliar = num1;
		num1 = num2;
		num2 = varAuxiliar;
	}
	// Bucle principal
	for(int num = num1; num <= num2; num++){
		cantMultiplos5 += (num%5==0)?1:0;
		cantMultiplos5y3 += (num%5==0 && num%3==0)?1:0;	
	}
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "------------------------------------" << endl;	
	cout << "Cantidad de multiplos de 5: " << cantMultiplos5 << endl;
	cout << "Cantidad de multiplos de 5 y 3: " << cantMultiplos5y3 << endl;
	return 0;
}
