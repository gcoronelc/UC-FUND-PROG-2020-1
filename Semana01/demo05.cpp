#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// Variables
	string linea = "------------------------------------------";
	int num1, num2;
	int suma, resta, producto, cociente;
	double raiz, cubo;
	// Entrada de datos
	cout << "Numero 1:"; cin >> num1;
	cout << "Numero 2:"; cin >> num2;
	// Proceso
	suma = num1 + num2;
	resta = num1 - num2;
	producto = num1 * num2;
	cociente = num1 / num2;
	raiz = sqrt(suma);
	cubo = pow(num1,3);
	// Reporte
	cout << linea << endl;
	cout << "Suma: " << suma << endl;
	cout << "Resta: " << resta << endl;
	cout << "Producto: " << producto << endl;
	cout << "Cociente: " << cociente << endl;
	cout << "Raiz cuadrada: " << raiz << endl;
	cout << "Cubo del primero: " << cubo << endl;
	return 0;
}
