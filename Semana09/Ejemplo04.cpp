#include <iostream>
using namespace std;

void analizaNota(int nota){
	if( nota < 0 || nota > 20){
		cout << "Nota incorrecta." << endl;
		return;
	}
	//cout << "Nota correcta."  << endl;
	string condicion = (nota>=11)?"Aprobado":"Desaprobado";
	cout << "Condicion: " << condicion << endl;
}

int main(){
	// Variables
	int nota;
	// Datos
	cout << "Nota: "; cin >> nota;
	// Proceso
	analizaNota( nota );
	return 0;
}
