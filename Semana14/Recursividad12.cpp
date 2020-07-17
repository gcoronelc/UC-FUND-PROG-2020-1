// Chalco

#include<iostream>
using namespace std;

// Recursividad
int MCD(int numero1, int numero2){
	if(numero1 < numero2){
		numero2-=numero1;
	} 
	if(numero1 > numero2){
		numero1-=numero2;
	} 
	if(numero1 == numero2){
		return numero1;
	} 
	return MCD(numero1, numero2);
}

int main(){
	
	// Var's
	int numero1, numero2;
	int result;
	// Entrada
	cout << " Numero 1:"; cin >> numero1;
	cout << " Numero 2:"; cin >> numero2;
	// Proceso
	result = MCD(numero1,numero2);
	// Salida
	cout << " El MCD es: " << result << endl;
	
	system("pause");
	return 0;
	
}
