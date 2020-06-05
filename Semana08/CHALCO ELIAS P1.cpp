#include <iostream>
using namespace std;
int main(){
	// Variables
	int num1, num2;
	int varAuxiliar, suma3, suma5, suma3y5;
	//Inicializamos las varaibles
	suma3 = 0;
	suma5 = 0;
	suma3y5 = 0;
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
	int num = num1;//Inicializamos 'num'
	// Bucle principal
	while(num <= num2){
		if(num%5==0){
			suma5+=num;
		}
		if(num%3==0){
			suma3+=num;
		}
		if(num%5==0 && num%3==0){
			suma3y5+=num;
		}
		num++;
	}
	// Reporte
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "------------------------------------" << endl;	
	cout << "Suma de multiplos de 5: " << suma5 << endl;
	cout << "Suma de multiplos de 3: " << suma3 << endl;
	cout << "Suma de multiplos de 5 y 3: " << suma3y5 << endl;
	
	system("pause");
	
	return 0;
}
