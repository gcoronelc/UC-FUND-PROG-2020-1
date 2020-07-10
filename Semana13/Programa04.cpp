#include<iostream>
#include<math.h>
using namespace std;

int main(){
	// Variables
	string linea = "--------------------------------";
	double variable_r, variable_a, variable_b;
	// Entrada de datos
	cout << linea << endl;
	cout << " Ingrese el valor de 'a': "; cin >> variable_a;
	cout << " Ingrese el valor de 'b': "; cin >> variable_b;
	// Proceso
	variable_r = sqrt(2*variable_a) + pow((3+(2*variable_b)), 0.2);
	// Reporte
	cout << linea << endl;
	cout << "\t REPORTE\n";
	cout << " Valor de 'r': " << variable_r;
	return 0;
}
