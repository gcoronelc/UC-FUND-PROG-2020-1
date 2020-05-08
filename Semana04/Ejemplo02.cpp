#include<iostream>
using namespace std;

// Programa principal
int main (){
	// Variables
	int num1, num2, num3, numMayor;
	// Entrada
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	cout << "Numero 3: "; cin >> num3;
	// Proceso
	numMayor = num1; // Punto de partida
	if(numMayor < num2){
		numMayor = num2;
	}
	if(numMayor < num3){
		numMayor = num3;
	}
	// Salida
	cout << "Mayor: " << numMayor << endl;
	return 0;
}
