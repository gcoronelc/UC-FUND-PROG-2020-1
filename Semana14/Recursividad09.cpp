// Zamudio
// Ejercicio 3
#include <iostream>
using namespace std;

float dividir(float num1, float num2){
	if(num2 > num1){
		return 0;
	}
	return dividir(num1 - num2, num2) + 1;
}

int main(){
	//Variable
	float num1, num2;
	float cociente;
	//Entrada
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	//Proceso
	cociente = dividir(num1, num2);
	//Salida
	cout << "Resultado de " << num1 << "/" << num2 << " es: " << cociente;
	return 0;
}
