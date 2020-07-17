// EGCC
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
	cout << "Ingrese el valor del numero: "; cin >> num;
	cout << endl;
	// Proceso Y Reporte
	cout << "Serie: ";
	for(int i = 1; i <= num; i++){
		numFibonaci = fibonaci(i);
		cout << numFibonaci << "  ";
	}
	cout << endl << endl;
	return 0;
}

