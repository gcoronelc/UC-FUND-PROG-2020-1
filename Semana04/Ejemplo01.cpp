#include<iostream>
#include<math.h>
using namespace std;

// Programa principal
int main (){
	// Variables
	int x;
	double y;
	// Entrada
	cout << "Ingresar el valor de x: ";
	cin  >> x;
	// Proceso
	y = 0;
	if( x > 0){
		y = sqrt( 1 + x*x*x ) / x;
	}
	// Salida
	cout << "y = " << y << endl;
	return 0;	
}
