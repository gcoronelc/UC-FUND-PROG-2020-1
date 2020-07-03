#include <iostream>
using namespace std;

// leerSN
char leerSN(string etiqueta){
	char rpta;
	do{
		cout << etiqueta;
		cin  >> rpta;
		rpta = toupper(rpta);
	} while(rpta != 'S' && rpta != 'N');
} // leerSN

// menu()
void menu(int &op){
	system("cls");
	cout << "MENU DE OPCIONES" << endl;
	cout << "-----------------------------\n";
	cout << "1.- Saludar" << endl;
	cout << "2.- Ecuacion Cuadratica" << endl;
	cout << "3.- Salir" << endl;
	cout << "-----------------------------\n\n";
	do{
		cout << "Opcion: ";
		cin >> op;
		if(op < 1 || op > 3){
			cout << "Opcion incorrecta..." << endl;
		}
	} while(op < 1 || op > 3); // do
} // menu

// saludar
void saludar(){
	system("cls");
	cout << "SALUDO\n";
	cout << "--------------------------\n";
	cout << "Hola con todos.\n";
	cout << "--------------------------\n";
} // saludar


// ecuacion
void ecuacion(){
	
}

int main(){
	// Variables de control del menu
	int op = 3;
	char rpta = 'S';
	// Menu
	do{
		menu(op);

		switch(op){
			case 1:
				saludar(); 
				system("pause");
				break;
			case 2:
				ecuacion(); 
				system("pause");
				break;
			case 3:
				rpta = leerSN("Esta seguro(a) (S/N)? ");
				break;
		}
	} while( ! (op == 3 && rpta == 'S') );
	return 0;	
} // main

