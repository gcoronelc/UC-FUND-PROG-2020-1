#include <iostream>
#include <math.h>
using namespace std;
int main () {
	//Variables
	int xP1, yP1, xP2, yP2;
	double distancia;
	
	//Entrada
	cout << "ENTRADA DE DATOS\n";
	cout << "Ingresar la abscisa del punto 1: ";  cin >> xP1;
	cout << "Ingresar la ordenada del punto 1: "; cin >> yP1;
	cout << "Ingresar la abscisa del punto 2: ";  cin >> xP2;
	cout << "Ingresar la ordenada del punto 2: "; cin >> yP2;
	
	//Proceso
	distancia = sqrt(pow((xP1-xP2), 2.0) + pow((yP1-yP2), 2.0));
	
	//Resultado
	cout << "\n\nREPORTE\n";
	cout << "Distancia entre los puntos: " << distancia << "\n\n";
	
	system ("pause");
	return 0;
}
