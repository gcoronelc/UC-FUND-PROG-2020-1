#include <iostream>
#include <sstream>
using namespace std;
int main(){
	// Variables
	int num1, num2, num3, mayor, menor, promedio;
	int op;
	// Entrada
	cout << "ENTRADA" << endl;
	cout << "==============================" << endl;
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	cout << "Numero 3: "; cin >> num3;
	// Proceso
	// El mayor
	mayor = num1;
	mayor = (num2 > mayor)?num2:mayor;
	mayor = (num3 > mayor)?num3:mayor;
	// El menor
	menor = num1;
	menor = (num2 < menor)?num2:menor;
	menor = (num3 < menor)?num3:menor;
	// El promedio
	promedio = (num1 + num2 + num3) / 3;
	// Salida
	do{
		system("cls");
		cout << "DATOS DE ENTRADA" << endl;
		cout << "==============================" << endl;		
		cout << "Numero 1: " << num1 << endl;
		cout << "Numero 2: " << num2 << endl;
		cout << "Numero 3: " << num3 << endl;
		cout << endl;
		cout << "MENU" << endl;
		cout << "==============================" << endl;	
		cout << "1.- Numero mayor" << endl;
		cout << "2.- Numero menor" << endl;
		cout << "3.- Promedio" << endl;
		cout << "4.- Salir" << endl;
		cout << endl;
		do{
			cout << "Opcion: "; cin >> op;
			if(op < 1 || op > 4){
				cout << "Opcion incorrecta." << endl;
			}
		} while(op < 1 || op > 4);
		
		cout << endl;
		switch(op){
			case 1:
				cout << "Numero mayor: " << mayor << endl;
				break;
			case 2:
				cout << "Numero menor: " << menor << endl;
				break;
			case 3:
				cout << "Promedio: " << promedio << endl;
				break;	
			case 4:
				cout << "Fin del programa: " << endl;
				break;							
		}
		if(op != 4){
			system("pause");
		}
	}while(op != 4);
	return 0;
}
