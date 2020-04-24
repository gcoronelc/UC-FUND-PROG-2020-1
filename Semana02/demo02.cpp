#include <iostream>
using namespace std;

int main(){
	// Variables
	string linea = "-----------------------------------\n";
	int precio, cantidad, importeVenta;
	
	// Entrada
	cout << linea;
	cout << "ENTRADA DE DATOS\n";
	cout << linea;
	cout << "Precio: ";   cin >> precio;
	cout << "Cantidad: "; cin >> cantidad;
	
	// Proceso
	importeVenta = precio * cantidad;
	
	// Reporte
	cout << endl << linea;
	cout << "REPORTE\n";
	cout << linea;
	cout << "Importe venta: " << importeVenta << endl;
	
	system("pause");
	return 0;
}
