#include <iostream>
using namespace std;
int main(int argc, char ** argv) {
	
	string dato = "Eric Gustavo, Coronel Castillo";
	
	int longitud = dato.size();
	int posicion = dato.find("Gustavo");
	string nombre = dato.substr(5,7);
	string dato2 = dato.erase(0, dato.find("Gustavo"));
	
	cout << "Longitud: " << longitud << endl;
	cout << "Posicion: " << posicion << endl;
	cout << "Extraer: " << nombre << endl;
	cout << "Dato2: " << dato2 << endl;
	
	return 0;	
}
