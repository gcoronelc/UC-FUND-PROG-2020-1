#include <iostream>
#include<sstream>
#include "SimulacroLibreria.h"
using namespace std;

int main(){
	// Variables
	int op = 4;
	int curso;
	string estudiante;
	stringstream repoListado;
	double precio;
	// Inicializar variables
	repoListado << "\n\nLISTADO DE ESTUDIANTES\n\n";
	repoListado << "CURSO\t\tESTUDIANTE\t\tPRECIO\n";
	repoListado << "------------------------------------------------------------\n";
	// Bloque principal
	do{
		presentarMenu();
		leerOpcion(op);
		switch(op){
			case 1:
				matricula(curso, estudiante, precio);
				actualizarlistado(curso, estudiante, precio, repoListado);
				break;
			case 2:
				listado(repoListado);
				break;
			case 3:
				resumen();
				break;
			case 4:
				cout << "Fin del programa.\n";
				break;
		}
		system("pause");
	} while(op!=4);
	return 0;	
}

