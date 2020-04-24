/* 
PROGRAMA DE FUNCION
Calcula z = x^3 + 5x - 6
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// Variables
	int x;
	double z;
	// Entrada de datos
	cout << "\n";
	cout << "::: FUNCION z = x^3 + 5x - 6 :::\n";
	cout << "==================================\n";
	cout << "Ingrese el valor de x: "; cin >> x;
	
	// Proceso
	z = pow(x, 3) + 5*x - 6;
	
	// Reporte
	cout << "\n";
	cout << "::: REPORTE :::\n";
	cout << "==================================\n";
	cout << "Valor de z: " << z << "\n\n";
	
	system("pause");
	return 0;
}


