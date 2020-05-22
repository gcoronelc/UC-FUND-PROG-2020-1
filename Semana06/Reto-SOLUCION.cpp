#include <iostream>
using namespace std;
int main() {
	// Variables
	string datos, dato;
	int suma, posicion;
	// Entrada
	cout << "Ingrese los numeros separados por coma (,).\n";
	cout << "Datos: "; cin >> datos;
	// Proceso
	suma = 0; // Punto de partida
	while(datos.size() > 0){
		posicion = datos.find(",");
		if(posicion > 0){
			dato = datos.substr(0,posicion);
			datos = datos.erase(0,posicion+1);
		} else {
			dato = datos;
			datos = "";
		}
		suma += stoi(dato); // stoi es desde la version 11 de C++
	} // Proceso
	// Reporte
	cout << "Suma: " << suma << endl;
	return 0;	
}
