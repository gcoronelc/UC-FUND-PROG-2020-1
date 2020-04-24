#include <iostream>
using namespace std;

int main () {
	
	//Variables
	string linea = "-------------------\n";
	int sueldoBase, importeVendido;
	double comision, sueldoNeto;
	
	//Entrada
	cout << linea;
	cout << "ENTRADA DE DATOS\n";
	cout << linea;
	cout << "Sueldo basico: "; cin >> sueldoBase;
	cout << "Importe vendido: "; cin >> importeVendido;
	
	//Proceso
	comision = importeVendido * 0.08;
	sueldoNeto = sueldoBase + comision;


	//Reporte
	cout << endl << linea;
	cout << "REPORTE\n";
	cout << linea;
	cout << "Comision mensual: " << comision << endl;
	cout << "Sueldo Neto: " << sueldoNeto << endl;

	system ("pause");
	return 0;
}
