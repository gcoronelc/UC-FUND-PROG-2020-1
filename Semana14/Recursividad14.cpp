#include <iostream>
using namespace std;
int MaximoDivisor(int numero1, int numero2){
	int maximo = 1;
	for (int iterador=2; iterador <= 11; iterador ++){
		while (numero1%iterador == 0 && numero2%iterador == 0){
			maximo *= iterador;
			numero1 = numero1/iterador;
			numero2 = numero2/iterador;	    
		}
	}
	return maximo;
}
int main (){
	//Variables
	int numero1, numero2;
	int maximo;	
	//Entrada
	cout << "   ENTRADA     " <<endl;
	cout << "===============\n";
	cout << "Numero 1: " ; cin >> numero1;
cout << "Numero 2: " ; cin >> numero2;
	//Proceso
	maximo = MaximoDivisor(numero1, numero2);
	//Salida
	cout << "    REPORTE    " <<endl;
	cout << "===============\n";
	cout << "El m.c.d.(" << numero1 << "," << numero2 << ") = " <<maximo;	
	return 0;
}
