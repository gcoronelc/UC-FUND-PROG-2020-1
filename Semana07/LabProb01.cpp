#include <iostream>
#include <sstream>
using namespace std;
int main(){
	// Variables
	int op, cantidad, sumaBilletes, sumaMonedas, sumaTotal;
	// Entrada y Proceso
	sumaBilletes = 0;
	sumaMonedas = 0;
	system("cls");
	do{
		cout << endl;
		cout << "MENU" << endl;
		cout << "============================" << endl;		
		cout << "1.- Billetes de 200 Soles" << endl;
		cout << "2.- Billetes de 100 Soles" << endl;
		cout << "3.- Monedas de 5 Soles" << endl;
		cout << "4.- Monedas de 2 Soles" << endl;
		cout << "5.- Salir" << endl;
		cout << endl;
		do{
			cout << "Opcion: "; cin >> op;
			if(op < 1 || op > 5){
				cout << "Opcion incorrecta." << endl;
			}
		} while(op < 1 || op > 5);
		if(op == 5){
			break;
		}
		cout << "Cantidad: "; cin >> cantidad;
		// Analisis
		switch(op){
			case 1: // Billetes de 200
				sumaBilletes += cantidad * 200;
				break;
			case 2: // Billetes de 100
				sumaBilletes += cantidad * 100;
				break;			
			case 3: // Monedas de 5
				sumaMonedas += cantidad * 5;
				break;					
			case 4: // Monedas de 2
				sumaMonedas += cantidad * 2;
				break;							
		}
	} while(op != 5);
	sumaTotal = sumaBilletes + sumaMonedas;
	
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "============================================" << endl;
	cout << "Suma de dinero en billetes: " << sumaBilletes << endl;
	cout << "Suma de dinero en monedas: " << sumaMonedas << endl;
	cout << "Suma toal de dinero: " << sumaTotal << endl;
	
	return 0;
}
