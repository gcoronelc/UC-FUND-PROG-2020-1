#include<iostream>

using namespace std;

int main(){
	
	// Variables
	double C1,EP,C2,EF,PF;
	string condicion;
		
	//Entrada
	cout << "ENTRADA DE DATOS\n";
	cout<<"Digite la nota del Consolidado1: ";cin>>C1;
	cout<<"Digite la nota del examen parcial: ";cin>>EP;
	cout<<"Digite la nota del Consolidado1: ";cin>>C2;
	cout<<"Digite la nota del examen final: ";cin>>EF;
	
	//Proceso
	PF = (C1*0.20) + (EP*0.25) + (C2*0.20) + (EF*0.35);
	condicion = (PF>=14.0)?"APROBADO":"DESAPROBADO";
	
	//Salida
	cout << endl;
	cout << "Promedio: " << PF << endl;
	cout<<"LA CONDICION DEL ESTUDIANTE ES: "<< condicion;
	
	return 0;
}
