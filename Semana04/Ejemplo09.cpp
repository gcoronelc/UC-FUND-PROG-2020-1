#include<iostream>
using namespace std;

// Programa principal
int main (){
	// Variables
	char vocal;
	string reporte;
	// Datos
	cout << "Ingrese una vocal: ";
	cin  >> vocal;	
	// Proceso
	switch(vocal){
		case 'a':
		case 'A':
			reporte = "Vocal A";
			break;
		case 'e':
		case 'E':
			reporte = "Vocal E";
			break;
		case 'i':
		case 'I':
			reporte = "Vocal I";
			break;
		case 'o':
		case 'O':
			reporte = "Vocal O";
			break;
		case 'u':
		case 'U':
			reporte = "Vocal U";
			break;
		default:
			reporte = "Vocal incorrecta.";
	}
	// Salida	
	cout << reporte << endl;	
	return 0;
}
