/*PROGRAMA HIPOTENUSA*/
#include<math.h>
#include<iostream>
using namespace std;
int main()
{   

	// Declaracion de variables
	int l1,l2 ;
	double H;
   
	//Entrada de datos
	cout<<"Ingrese lado 1: ";  cin>>l1;
	cout<<"Ingrese lado 2: ";  cin>>l2;
   
	//Proceso
	H= sqrt(pow(l1,2)+pow(l2,2));
   
	//Salida de datos
	cout<<"El hipotenusa es:"<<H<<"\n";
   
	system("pause");
	return 0; 
}
