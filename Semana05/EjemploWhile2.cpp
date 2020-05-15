#include <iostream>
#include <sstream>
using namespace std;
int main(){
	// Variables
	int n, contador = 1;
	stringstream serie;
	// Entrada de Datos
	cout << "Valor de N:"; cin >> n;
	// Proceso
	while( contador <= n ){
		serie << contador << " ";
		contador++;
	}
	// Reporte
	cout << "Serie: " << serie.str() << endl;
	return 0;	
}
