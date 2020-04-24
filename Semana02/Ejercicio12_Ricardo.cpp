//Problema_12
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
	resultado = (sqrt(x+3) + (2*x))/ (x+(cbrt(x+1)));
	
	//Salida de datos
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
    return 0;
	
}
