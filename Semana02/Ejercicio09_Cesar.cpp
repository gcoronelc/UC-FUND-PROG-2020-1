#include<iostream>
#include<math.h>
using namespace std;

int main(){
	//Variables
	int n, digito, digitos;
	
	//Entrada
	cout<<"Digite el numero: ";cin>>n;
	
	//Proceso
	digito = n%10;
	digitos = n%100;
	
	//Salida
	cout<<"\nLos ultimos dos digitos son: "<< digitos;
	cout<<"\nEl ultimo digito es: "<< digito;
	
	return 0;
}
