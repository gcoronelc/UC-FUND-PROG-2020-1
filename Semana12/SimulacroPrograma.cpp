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
	int matCurso1=0, matCurso2=0, matCurso3=0, matCurso4=0, matCurso5=0;
	double totalCurso1=0.0, totalCurso2=0.0, totalCurso3=0.0, totalCurso4=0.0, totalCurso5=0.0;
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
				procesarMatricula(curso, precio,
					matCurso1, matCurso2, matCurso3, matCurso4, matCurso5,
					totalCurso1, totalCurso2, totalCurso3, totalCurso4, totalCurso5);
				break;
			case 2:
				listado(repoListado);
				break;
			case 3:
				resumen(matCurso1, matCurso2, matCurso3, matCurso4, matCurso5,
					totalCurso1, totalCurso2, totalCurso3, totalCurso4, totalCurso5);
				break;
			case 4:
				cout << "Fin del programa.\n";
				break;
		}
		system("pause");
	} while(op!=4);
	return 0;	
}

