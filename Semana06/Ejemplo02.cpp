#include <iostream>
#include <math.h>
using namespace std;
int main() {
	// Variables
	int num1, num2, op, mayor;
	double raiz;
	// Leer los números
	system("cls");
	cout << "INGRESO DE NUMEROS\n";
	cout << "==================\n";
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	// El gran proceso del menu
	do{
		// Datos Ingresados
		system("cls");
		cout << "DATOS INGRESADOS\n";
		cout << "================\n";
		cout << "Numero 1: " << num1 << endl;
		cout << "Numero 2: " << num2 << endl;
		// El menu
		cout << endl;
		cout << "MENU DE OPCIONES\n";
		cout << "==============================================\n";
		cout << "1.- El numero de mayor valor\n";
		cout << "2.- Raiz quinta de la suma\n";
		cout << "3.- El producto de ambos entre su diferencia\n";
		cout << "4.- Salir\n";
		cout << "==============================================\n";
		// Leer la opcion
		do{
			cout << "Opcion: "; cin >> op;
			if(op < 1 || op > 4){
				cout << "Valor incorrecto." << endl;
			}
		}while(op < 1 || op > 4); // Lectura de la opcion
		// Procesar las opciones del menu
		switch(op){
			case 1: // El numero de mayor valor - ANGHELA
				//Proceso
				mayor = (num1>num2)?num1:num2;
				//Salida
				cout << endl;
				cout << "El mayor: " << mayor;
				cout << endl;
				break;
			case 2: // Raiz quinta de la suma - DIANET
				//proceso
				raiz = pow(num1+num2,0.2);
				//salida
				cout << "La raiz quinta de la suma: " << raiz <<endl ;
				break;
			case 3: // El producto de ambos entre su diferencia
				cout << "Caso 3" << endl;
				break;
			case 4: // Salir
				cout << "Fin del programa, adios." << endl;
				break;												
		} // Procesar las opciones del menu
		system("pause");
	} while(op != 4); // El gran proceso del menu
	cout << "Adios, hasta la proxima.";
	return 0;
}
