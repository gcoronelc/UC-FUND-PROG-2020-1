#include <iostream>
using namespace std;

// Implementación de funciones
int Factorial(int numero){
	int factorial = 1;
	for(int j = 1; j<= numero ; j++){
		factorial*=j;
	}
	return factorial;
}


int main(){
	// Variables
	int numero1;
	int factorial;
	
	// Datos
	cout << " Numero : "; cin >> numero1;
	
	// Proceso
	factorial = Factorial(numero1);
	
	// Reporte
	cout << "\n El factorial de " << numero1 << " es " << factorial << endl;
	
	return 0;
}
