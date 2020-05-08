#include<iostream>
#include <sstream>
using namespace std;

// Programa principal
int main (){
	// Variables
	int num1, num2, num3, numMayor;
	stringstream reporte;
	// Entrada
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	cout << "Numero 3: "; cin >> num3;
	// Proceso
	if(num1 == num2 || num2 == num3 || num1 == num3){
		reporte << "Los numeros deben ser diferentes.";
	} else {
			numMayor = num1; // Punto de partida
			if(numMayor < num2){
				numMayor = num2;
			}
			if(numMayor < num3){
				numMayor = num3;
			}
			reporte << "Numero mayor es " << numMayor;
	}
	// Reporte
	cout << reporte.str() << endl;
	return 0;	
}
