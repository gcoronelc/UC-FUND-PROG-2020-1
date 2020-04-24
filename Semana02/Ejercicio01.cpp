#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
	// Variables
	string linea = "------------------------------------------";
	int num1, num2;
	int suma, resta, producto, division,resto;
	// Entrada de datos
	cout << "Numero 1:"; cin >> num1;
	cout << "Numero 2:"; cin >> num2;
	// Proceso
	suma = num1 + num2;
	resta = num1 - num2;
	producto = num1 * num2;
	division = num1 / num2;
	resto = num1 % num2;
	// Reporte
	cout << linea << endl;
	cout << "Suma: " << suma << endl;
	cout << "Resta: " << resta << endl;
	cout << "Producto: " << producto << endl;
	cout << "Cociente: " << division << endl;
	cout << "Resto: " << resto << endl;
	return 0;
}


