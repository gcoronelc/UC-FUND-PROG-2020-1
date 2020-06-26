#include <iostream>
using namespace std;

// leerEnteroPositivo
int leerEnteroPositivo(string etiqueta, string mensaje){
	int numero;
	do{
		cout << etiqueta;
		cin  >> numero;
		if( numero <= 0){
			cout << mensaje << endl;
		}
	} while(numero <= 0);
}

// menu()
void menu(int &op){
	system("cls");
	cout << "MENU CALCULADORA" << endl;
	cout << "-----------------------------\n";
	cout << "1.- Sumar" << endl;
	cout << "2.- Restar" << endl;
	cout << "3.- Multiplicar" << endl;
	cout << "4.- Dividir" << endl;
	cout << "5.- Salir" << endl;
	cout << "-----------------------------\n\n";
	do{
		cout << "Opcion: ";
		cin >> op;
		if(op < 1 || op > 5){
			cout << "Opcion incorrecta..." << endl;
		}
	} while(op < 1 || op > 5); // do
} // menu

// sumar()
void sumar(){
	// Previas
	system("cls");
	cout << "SUMAR" << endl;
	cout << "--------------------\n";
	// Variables
	int num1, num2, suma;
	// Leer datos
	num1 = leerEnteroPositivo("Numero 1: ", "El numero debe ser positivo.");
	num2 = leerEnteroPositivo("Numero 2: ", "El numero debe ser positivo.");
	// Proceso
	suma = num1 + num2;
	// Reporte
	cout << "\nREPORTE\n";
	cout << "------------------------\n";
	cout << "Suma: " << suma << endl << endl;
} // sumar

// restar()
void restar(){
	cout << "Restar" << endl;
} // restar

// multiplicar ()
void multiplicar(){
	cout << "Multiplicar" << endl;
} // multiplicar

// Dividir()
void dividir(){
	cout << "Dividir" << endl;
} // dividir

int main(){
	// Variables de control del menu
	int op = 3;
	// Menu
	do{
		menu(op);
		switch(op){
			case 1:
				sumar(); break;
			case 2:
				restar(); break;
			case 3:
				multiplicar(); break;
			case 4:
				dividir(); break;
			case 5:
				cout << "Fin del programa." << endl;
				break;
		}
		system("pause");
	} while(op != 5);
	return 0;	
} // main
