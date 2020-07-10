#include<iostream>
using namespace std;
 
int main(){
	
	// Variables
	int size = 5;
	int notas[5];
	int auxiliar;
	
	// Datos
	notas[0] = 15;
	notas[1] = 12;
	notas[2] = 18;
	notas[3] = 10;
	notas[4] = 16;
	
	// Ordenar
	for(int i = 0; i < (size - 1); i++) {
		for( int j = i + 1; j < size; j++){
			if(notas[i] > notas[j]){
				auxiliar = notas[i];
				notas[i] = notas[j];
				notas[j] = auxiliar;
			}
		}
	}
	
	// Reporte
	for(int i = 0; i <= 4; i++){
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}
	return 0;
	
}
