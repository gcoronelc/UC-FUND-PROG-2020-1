//Problema_06
//-------------------------------------------------------
#include<iostream>
#include<math.h>
using namespace std;

int main()
{   //Declaración de variables
	float x,resultado =0;
	
	//Entrada de datos
	cout<<"Digite el valor de x: "; cin>>x;
	
	//Proceso
	resultado = (4 + (pow(x,3)) + (sqrt(x+8)))/(2*x);
	
	//Salida de datos
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
    return 0;
	
}
