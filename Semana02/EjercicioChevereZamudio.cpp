/*
Revisar solución
*/

#include <iostream>
using namespace std;

int main () {
	
	//Variables
	string linea = "-------------------\n";
	int precio, cantidad;
	double importeVenta, impuesto, totalVenta;
	
	//Entrada
	cout << linea;
	cout << "ENTRADA DE DATOS\n";
	cout << linea;
	cout << "Precio: "; cin >> precio;
	cout << "Cantidad: "; cin >> cantidad;
	
	//Proceso
	importeVenta = precio * cantidad;
	impuesto = importeVenta * 0.18;
	totalVenta = importeVenta + impuesto;
	
	//Reporte
	cout << endl << linea;
	cout << "REPORTE\n";
	cout << linea;
	cout << "Importe de la venta: " << importeVenta << endl;
	cout << "Impuesto: " << impuesto << endl;
	cout << "Total de la venta: " << totalVenta << endl;
	
	system ("pause");
	return 0;
}
