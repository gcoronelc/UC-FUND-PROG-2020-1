#include<iostream>
#include<sstream>
using namespace std;

void leerNumero( int &nroTabla ){
	cout << "TABLA DE MULTIPLICAR" << endl;
	cout << "Numero de tabla: ";
	cin >> nroTabla;	
}

void calcTabla( int nroTabla, string &tabla ){
	stringstream reporte;
	int producto;
	for(int i = 1; i <= 12; i++){
		producto = i * nroTabla;
		reporte << nroTabla << " x " << i << " = " << producto << endl;
	}
	tabla = reporte.str();
}

void presentarTabla(int nroTabla, string tabla){
	cout << endl;
	cout << "TABLA DE MULTIPLICAR" << endl;
	cout << "Tabla: " << nroTabla << endl;
	cout << tabla;
}

int main(){
	// Variables
	int nroTabla;
	string tabla = "Muy Pronto";
	// Lectura
	leerNumero(nroTabla);
	// Proceso
	calcTabla( nroTabla, tabla );
	// Reporte
	presentarTabla(nroTabla, tabla);
}

