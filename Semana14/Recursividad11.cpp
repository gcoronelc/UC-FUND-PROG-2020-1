// Zamudio
#include <iostream>
using namespace std;

int multiplicar(int num1, int num2){
	if(num1 == 1){
		return num2;
	}
	if(num2 == 1){
		return num1;
	}
	if(num1%2 != 0){
		return (num2 + multiplicar(num1/2, num2*2));
	}
	return (multiplicar(num1/2, num2*2));
}

int main(){
	//Variable
	int num1, num2, producto;
	//Entrada
	cout << "Numero entero 1: "; cin >> num1;
	cout << "Numero entero 2: "; cin >> num2;
	//Proceso
	producto = multiplicar(num1, num2);
	//Salida
	cout << "Resultado de " << num1 << "x" << num2 << " es: " << producto;
	return 0;
}

