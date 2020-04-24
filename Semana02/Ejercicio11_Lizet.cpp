//problema11-practica2
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//Variables
	double R,V;
	
	//Entrada
	cout<<"Ingrese el valor del radio: "; cin>>R;
	
	//Proceso
	V= (4*M_PI*pow(R,3))/3;
	
	//Salida
	cout << "PI: " << M_PI << endl;
	cout<<"El volumen es: "<<V<<"\n";
	system("pause");
	
	return 0;
}


