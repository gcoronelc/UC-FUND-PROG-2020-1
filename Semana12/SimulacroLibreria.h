#include <iostream>
#include<sstream>
using namespace std;

string nombCurso(int curso){
	string nombre = "None";
	switch(curso){
		case 1:
			nombre = "Fund. PRogramacion";
			break;
		case 2:
			nombre = "Matematicas";
			break;
		case 3:
			nombre = "Comunicacion";
			break;
		case 4:
			nombre = "Religion";
			break;
		case 5:
			nombre = "Quimica General";
			break;
	}
	return nombre;
}

void presentarMenu(){
	system("cls");
	cout << "MENU" << endl;
	cout << "---------------------\n";
	cout << "1.- Matricula\n";
	cout << "2.- Listado\n";
	cout << "3.- Resumen\n";
	cout << "4.- Salir\n";
	cout << "---------------------\n";
}

void leerOpcion(int &op){
	do{
		cout << "Opcion: "; 
		cin  >> op;
		if( op < 1 || op > 4 ){
			cout << "Opcion no es correcta.\n";
		}
	} while(op<1 || op >4);
}

void matricula(int &curso, string &estudiante, double &precio){
	// Curso
	cout << "\n\nCURSO\n";
	cout << "---------------------\n";
	cout << "1.- " << nombCurso(1) << endl;
	cout << "2.- " << nombCurso(2) << endl;
	cout << "3.- " << nombCurso(3) << endl;
	cout << "4.- " << nombCurso(4) << endl;
	cout << "5.- " << nombCurso(5) << endl;
	cout << "---------------------\n";	
	do{
		cout << "Curso: "; 
		cin  >> curso;
		if( curso < 1 || curso > 5 ){
			cout << "Opcion no es correcta.\n";
		}
	} while(curso<1 || curso >5);
	// Estudiante
	cout << "Estudiante: "; 
	cin  >> estudiante;
	// Precio
	do{
		cout << "Precio: "; 
		cin  >> precio;
		if( precio <= 0.0 ){
			cout << "Valor es incorrecto.\n";
		}
	} while( precio < 0.0);
}

void actualizarlistado(int curso, string estudiante, double precio, stringstream &repoListado){
	repoListado << nombCurso(curso) << "\t" << estudiante << "\t" << precio << endl;
}

void procesarMatricula(int curso, double precio,
int &matCurso1, int &matCurso2, int &matCurso3, int &matCurso4, int &matCurso5,
double &totalCurso1, double &totalCurso2, double &totalCurso3, double &totalCurso4, double &totalCurso5){
	switch(curso){
		case 1:
			matCurso1++;
			totalCurso1 += precio;
			break;
		case 2:
			matCurso2++;
			totalCurso2 += precio;
			break;
		case 3:
			matCurso3++;
			totalCurso3 += precio;
			break;
		case 4:
			matCurso4++;
			totalCurso4 += precio;
			break;
		case 5:
			matCurso5++;
			totalCurso5 += precio;
			break;											
	}
}
					
void listado(stringstream &repoListado){
	cout << repoListado.str() << endl;
}

void resumen(int matCurso1, int matCurso2, int matCurso3, int matCurso4, int matCurso5,
double totalCurso1, double totalCurso2, double totalCurso3, double totalCurso4, double totalCurso5){
	cout << "\n\nRESUMEN\n\n";
	cout << "CURSO\t\tMATRICULADOS\tTOTAL\n";
	cout << "------------------------------------------------------\n";
	cout << nombCurso(1) << "\t" << matCurso1 << "\t" << totalCurso1 << endl;
	cout << nombCurso(2) << "\t\t" << matCurso2 << "\t" << totalCurso2 << endl;
	cout << nombCurso(3) << "\t\t" << matCurso3 << "\t" << totalCurso3 << endl;
	cout << nombCurso(4) << "\t\t" << matCurso4 << "\t" << totalCurso4 << endl;
	cout << nombCurso(5) << "\t" << matCurso5 << "\t" << totalCurso5 << endl;
	cout << "------------------------------------------------------\n";
}



