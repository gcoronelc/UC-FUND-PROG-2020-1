// ZAMUDIO
#include<iostream>
using namespace std;

int fibonaci(int num){
	if(num==1 || num==2){
		return 1;
	}
	return fibonaci(num-1) + fibonaci(num-2);
}

int main(){
	//Variables
	int num, numFibonaci;
	//Entrada de datos
	cout << " Ingrese el valor del numero: "; cin >> num;
	cout << endl;
	//Proceso
	numFibonaci = fibonaci(num);
	//Reporte
	cout << " El numero Fibonaci es: " << numFibonaci;
	cout << endl;
	return 0;
}

