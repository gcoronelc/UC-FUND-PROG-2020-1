#include<iostream>
#include<math.h>
using namespace std;

// Funciones
void lecturaLados(double &lado1, double &lado2,double &lado3){//Lectura
	do{
		cout << "\n=============== Entrada de Datos ===============\n";
		cout << " Primer Lado: "; cin >> lado1;
		cout << " Segundo Lado: "; cin >> lado2;
		cout << " Tercer Lado: "; cin >> lado3;	
		if(lado1 <= 0 || lado2 <= 0 || lado3 <= 0){
			cout << " Al menos un dato ingresado no es valido. Intentelo de nuevo, por favor.\n";
		}
	}while(lado1 <= 0 || lado2 <= 0 || lado3 <= 0);
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
	
	// Entrada
	lecturaLados(ladoa,ladob,ladoc);
	
	// 	Proceso
	calcularArea(ladoa,ladob,ladoc, Area);
	
	// Salida
	reporte(Area);
}
