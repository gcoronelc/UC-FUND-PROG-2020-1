#include <iostream>
using namespace std;
int main(){
	// Variables
	int num1, num2, cantMultiplos3 ,cantMultiplos3pares , cantMultiplos3impares ;
	int varAuxiliar, suma;
	//Inicializamos las variables
	suma = 0;
	cantMultiplos3 = 0;
	cantMultiplos3pares = 0;
	cantMultiplos3impares = 0;
	// Entrada
	cout << endl;
	cout << "ENTRADA" << endl;
	cout << "------------------------------------" << endl;
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	// Proceso
	if( num2 < num1 ){
		varAuxiliar = num1;
		num1 = num2;
		num2 = varAuxiliar;
	}
	// Bucle principal
	for(int num = num1; num <= num2; num++){
		cantMultiplos3 += (num%3==0)?1:0;
		cantMultiplos3pares += (num%3==0 && num%2 ==0)?1:0;
		cantMultiplos3impares += (num%3==0 && num%2 == 1)?1:0;
		if(num%3==0){
			suma+=num;
		}
	}
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "------------------------------------" << endl;	
	cout << "Cantidad de multiplos de 3: " << cantMultiplos3 << endl;
	cout << "Cantidad de multiplos de 3 que son pares: " << cantMultiplos3pares << endl;
	cout << "Cantidad de multiplos de 3 que son impares: " << cantMultiplos3impares << endl;
	cout << "La suma de los multiplos de 3 es: " << suma << endl;	
	
	system("pause");
	
	return 0;
}
