#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// Variables
	int op, radio, lado, base, altura;
	double area;
	// Estructura General
	do{
		// Mostrar el menu
		system("cls");
		cout << "HALLANDO AREAS\n";
		cout << "===============================\n";
		cout << "1.- Circunferencia" << endl;
		cout << "2.- Cuadrado" << endl;
		cout << "3.- Triangulo" << endl;
		cout << "4.- Salir" << endl;
		cout << "===============================\n";
		// Leer opcion
		do{
			cout << "Opcion: "; cin >> op;
			if(op < 1 || op > 4){
				cout << "Valor incorrecto." << endl;
			}
		}while(op < 1 || op > 4); // Lectura de la opcion
		cout << endl << endl;
		// Proceso del MENU
		switch(op){
			case 1: // Curcunferencia
				// Entrada
				cout << "Radio: "; cin >> radio;
				// Proceso
				area = 3.141516 * pow(radio,2);				
				// Salida
				cout << "Area: " << area << "u2" << endl;
				break;
			case 2: // Cuadrado - Allison
				// Entrada - V2
				do{
					cout << "Lado: "; cin >> lado;
				}while(lado<=0);
				// Proceso
				area = pow(lado,2);				
				// Salida
				cout << "Area: " << area << "u2" << endl;
				break;
			case 3: // Triangulo - JESHUA
				// Entrada
				cout << "Base : "; cin >> base;
				cout << "Altura : "; cin >> altura;
				// Proceso
				area = (base * altura) / 2;
				// Salida
				cout << "Area : " << area << "u2" << endl;
				break;
			case 4: // Salir
				cout << "Fin del programa, adios." << endl;
				break;												
		} // Proceso del menu
		system("pause");
	} while(op != 4); // Es del MENU
	cout << "Chau, hasta la proxima vez." << endl;
	return 0;
}
