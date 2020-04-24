#include<iostream>

using namespace std;

int main(){
	
	
	//Entrada
	double C1,EP,C2,EF,PF;
	string condicion;
	cout << "ENTRADA DE DATOS\n";
	cout<<"Digite la nota del Consolidado1: ";cin>>C1;
	cout<<"Digite la nota del examen parcial: ";cin>>EP;
	cout<<"Digite la nota del Consolidado1: ";cin>>C1;
	cout<<"Digite la nota del examen final: ";cin>>EF;
	
	//Proceso
	PF = (C1*0.20) + (EP*0.25) + (C2*0.20) + (EF*0.35);
	if(PF>=14){
		condicion = "APROBADO";
	} else {
		condicion = "DESAPROBADO";
	}
	
	//Salida
	cout<<"LA CONDICION DEL ESTUDIANTE ES: "<< condicion;
	
	return 0;
}
