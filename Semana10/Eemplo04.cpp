#include<iostream>
#include<math.h>
using namespace std;

void leerNumeroPosito(string etiqueta, double &numero){
	do{
		cout << etiqueta; cin >> numero;
		if( numero <= 0 ){
			cout << "Dato incorrecto." << endl;
		}
	} while(numero <= 0);
}

void validarTriangulo(int ladoa, int ladob, int ladoc, int &estado){
	
	estado = -1;	
}

void calcularArea(double lado1, double lado2, double lado3, double &area){
	double p = (lado1 + lado2 + lado3)/2;
	area = sqrt((p)*(p-lado1)*(p-lado2)*(p-lado3));
}

void reporte(double area){
	cout << "\n=============== Salida de Datos ===============\n";
	cout << " El area del triangulo es:"<<area<<" \n";
	system("pause");
}
int main(){
	
	//Variables
	double ladoa, ladob, ladoc;
	double Area;
	int estado; // 1: ok  -1: error
	
	// Entrada
	cout << "INGRESO DE DATOS" << endl;
	cout << "========================" << endl;
	//lecturaLados(ladoa,ladob,ladoc);
	leerNumeroPosito("Lado A: ", ladoa);
	leerNumeroPosito("Lado B: ", ladob);
	leerNumeroPosito("Lado C: ", ladoc);
	
	// Validación de datos
	validarTriangulo(ladoa, ladob, ladoc, estado);
	if( estado == -1){
		cout << "Los datos no corresponden a un triangulo";
		return 0;
	}
	
	// 	Proceso
	calcularArea(ladoa,ladob,ladoc, Area);
	
	// Salida
	reporte(Area);
}
