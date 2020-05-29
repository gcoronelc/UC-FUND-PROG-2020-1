#include <iostream>
#include <sstream>
using namespace std;
int main(){
	// Variables
	int num1, num2, cantPrimos, sumaPrimos, varAuxiliar;
	int divisor, contDivisibles;
	stringstream listaPrimos;
	// Entrada
	cout << endl;
	cout << "ENTRADA" << endl;
	cout << "------------------------------------" << endl;
	cout << "Numero 1: "; cin >> num1;
	cout << "Numero 2: "; cin >> num2;
	// Proceso
	cout << endl;
	cout << "PROCESO" << endl;
	cout << "------------------------------------" << endl;
	// Inicializar variables
	cantPrimos = 0;
	sumaPrimos = 0;
	// Tomando el ejemplo, conviene hacer el bucle de 10 a 50.
	// Se debe garantizar que num1 < num2. 
	if( num2 < num1 ){
		varAuxiliar = num1;
		num1 = num2;
		num2 = varAuxiliar;
	}
	// Bucle principal
	while(num1 <= num2){
		cout << "Analizando " << num1 << endl;
		// Analizar si num1 es primo
		contDivisibles = 0;
		divisor = 1;
		while(divisor <= num1){
			if(num1%divisor == 0){
				contDivisibles++;
			}
			divisor++;
		}
		if( contDivisibles == 2 ){ // num1 es primo
			cantPrimos++;
			sumaPrimos += num1;
			listaPrimos << num1 << ", ";
		}
		// Incrementar num1
		num1++;
	}
	// Salida
	cout << endl;
	cout << "REPORTE" << endl;
	cout << "------------------------------------" << endl;
	cout << "Cantidad de numero primos: " << cantPrimos << endl;
	cout << "Lista numero primos: " << listaPrimos.str() << endl;
	cout << "Suma de numero primos: " << sumaPrimos << endl;
	return 0;
}
