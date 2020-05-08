#include<iostream>
using namespace std;

// Programa principal
int main (){
	// Variables
	int edad;
	string etapa;
	// Entrada
	cout << "Edad de la persona: ";
	cin  >> edad;
	// Proceso
	etapa = "Edad fuera del limte."; // Punto de partida
	if( edad >= 0 && edad < 6){
		etapa = "Infante";
	}
	if( edad >= 6 && edad < 12){
		etapa = "Niño";
	}
	if( edad >= 12 && edad < 18){
		etapa = "Adolecente";
	}
	if( edad >= 18 && edad < 27){
		etapa = "Joven";
	}
	if( edad >= 27 && edad < 60){
		etapa = "Adulto";
	}
	if( edad >= 60 && edad <= 130){
		etapa = "Adulto Mayor";
	}
	// Salida
	cout << "Etapa: " << etapa << endl;
	return 0;
}
