#include<iostream>
#include<sstream>
using namespace std;
int main(){
	// Variables
	string linea = "-----------------------------------------\n";
	int op, contManazas, cantPersonas, cantHombres, cantNinos;
	int cantMujeres, cantAdultos;
	int contFamilias, cantTotalHombres, cantTotalNinos;
	int cantTotalMujeres, cantTotalAdultos, cantTotalPersonas;
	string familia;
	stringstream avanceReporte;
	// Inicializar variables
	contManazas = 0;
	op = 3;
	// Bucle principal del menú
	do{
		// Inicializar manzana
		if( op == 3 ){
			contManazas++;
			contFamilias = 0;
			cantTotalHombres = 0;
			cantTotalNinos = 0;
			cantTotalMujeres = 0;
			cantTotalAdultos = 0;
			cantTotalPersonas = 0;	
			avanceReporte.str("");
		} 
		// MENU
		system("cls");
		cout << "MENU" << endl;
		cout << "Manzana: " << contManazas << endl;
		cout << linea;
		cout << "1.- Registrar familia" << endl;
		cout << "2.- Avance de reporte" << endl;
		cout << "3.- Reporte final" << endl;
		cout << "4.- Salir" << endl;
		cout << linea;
		do{
			cout<< "Opcion: "; cin >> op;
			if(op < 1 || op > 4){
				cout<<"Opcion incorrecta\n";
		 	}
		}while(op < 1 || op > 4);
		// Proceso opción del menú
		switch(op){
			case 1:
				// Lectura
				cout << endl;
				cout << "LECTURA DE DATOS" << endl;
				cout << "Familia: "; cin >> familia;
				cout << "Cantidad de personas: "; cin >> cantPersonas;
				cout << "Cantidad de hombres: "; cin >> cantHombres;
				cout << "Cantidad de ninos: "; cin >> cantNinos;
				// Proceso
				cantMujeres = cantPersonas - cantHombres;
				cantAdultos = cantPersonas - cantNinos;
				contFamilias++;
				cantTotalPersonas += cantPersonas;
				cantTotalHombres += cantHombres;
				cantTotalMujeres += cantMujeres;
				cantTotalNinos += cantNinos;
				cantTotalAdultos += cantAdultos;
				avanceReporte << "FAMILIA " << familia << "\t" << cantPersonas << endl;
				break;
			case 2:
				cout << endl;
				cout << "AVANCE DEL REPORTE " << endl;
				cout << "Cantidad de familias: " << contFamilias << endl;
				cout << linea;
				cout << avanceReporte.str();
				cout << linea;
				system("pause");
				break;
			case 3:
				cout << endl;
				cout << "REPORTE FINAL " << endl;
				cout << "Manzana: " << contManazas << endl;
				cout << linea;
				cout << avanceReporte.str();
				cout << linea;
				cout << "Total de familias: " << contFamilias << endl;				
				cout << "Total de Personas: " << cantTotalPersonas << endl;				
				cout << "Total de Hombres: " << cantTotalHombres << endl;				
				cout << "Total de Mujeres: " << cantTotalMujeres << endl;				
				cout << "Total de Ninos: " << cantTotalNinos << endl;				
				cout << "Total de Adultos: " << cantTotalAdultos << endl;				
				system("pause");	
				break;
			case 4:
				cout << "Fin del programa" << endl;
				break;
		}
		
	} while(op != 4); // Del bucle principal
	return 0;	
}
