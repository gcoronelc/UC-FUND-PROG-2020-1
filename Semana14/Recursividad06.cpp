// EGCC
// Solo exponente positivo
// Reto, exponente negativo.
#include <iostream>
using namespace std;

float potencia(float base, int exp){
	float resp;
	if (exp == 0){
		return 1.0;
	}
	return base * potencia(base,exp - 1);
}

int main(){
	system("color 1F");
	//Variable
	float base, exp;
	float resp;
	//Entrada
	cout << "Introduce la base de la potencia: "; cin >> base;
	cout << "Exponente: "; cin >> exp;
	//Proceso
	resp = potencia(base, exp);
	//Salida
	cout << "La potencia de " << base << " ^ " << exp << " es " << resp;
	return 1;
}
