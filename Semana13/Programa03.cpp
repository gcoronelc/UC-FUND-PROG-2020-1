#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
	// Variables
	string linea = "------------------------------------------";
	double cuota, descuento, importe;
	char colegio, categoria;
	// Entrada de datos
	//Cuota
	do{
		cout << "Ingresar cuota: "; cin >> cuota;
		if(cuota <= 0){
			cout << "Cuota invalida" << endl;
		}
	}while(cuota <= 0);
	//Categoria
	do{
		cout << "Ingresar categoria (A, B, C): "; cin >> categoria;
		categoria = toupper(categoria);
		if( ! (categoria == 'A' || categoria == 'B' || categoria == 'C')){
			cout << "Categoria invalida" << endl;
		}
	}while( ! (categoria == 'A' || categoria == 'B' || categoria == 'C'));
	// Proceso
	switch(categoria){
		case 'A': 
			descuento = cuota * 0.5;
			break;
		case 'B': 
			descuento = cuota * 0.4;
			break;
		case 'C': 
			descuento = cuota * 0.3;
			break;
	}
	importe = cuota - descuento;
	// Reporte
	cout << linea << endl;
	cout << "El importe a pagar es S/ " << importe << endl;
	return 0;
}		
