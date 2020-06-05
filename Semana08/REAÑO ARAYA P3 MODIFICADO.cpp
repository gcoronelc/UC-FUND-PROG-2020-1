#include<iostream>
#include<sstream>
using namespace std;
int main(){
	//VARIABLES
	string linea= "----------------------------------\n";
	double nota1,nota2,nota3,nota4,promedio, notaMenor;
	int op=3;
	//stringstream condicion;
	string condicion;
	// ENTRADA
	cout<< linea;
	cout << " ENTRADA\n" << endl;
	cout << linea;
	cout << "Nota 1: " ; cin >> nota1;
	cout << "Nota 2: " ; cin >> nota2;
	cout << "Nota 3: " ; cin >> nota3;
	cout << "Nota 4: " ; cin >> nota4;
	// PROCESO
	// Determinar la nota menor
	notaMenor = nota1; // Punto de partida
	notaMenor = (nota2 < notaMenor)?nota2:notaMenor;
	notaMenor = (nota3 < notaMenor)?nota3:notaMenor;
	notaMenor = (nota4 < notaMenor)?nota4:notaMenor;
	// EL PROMEDIO
	promedio= (nota1 + nota2 + nota3 + nota4 - notaMenor)/3;
	 // LA CONDIDICON
	if(promedio >= 14){
		condicion = "APROBADO";
	} else { 
	  condicion = "DESAPROBADO";
	}	 
	//SALIDA
	do{
		cout<<endl;
		cout<<linea;
		cout<< "MENU" << endl;
		cout<<  linea;
		cout<<" 1.- El promedio " << endl;
		cout<<" 2.- La condicion " << endl;
		cout<<" 3.- Salir " << endl;
		cout<< endl;
		do{
			cout<< "Opcion: "; cin >> op;
			if(op < 1 || op > 3){
				cout<<"Opcion incorrecta\n";
		 	}
		}while(op < 1 || op > 3);
		cout<<endl;
		switch(op){
			case 1: 
			    cout<< "El promedio es: " << promedio << endl;
			    break;
			case 2:
				cout<< "La condicion del estudiante es: " << condicion<< endl;
				break;
			case 3:                                                  
				cout << "FIN DEL PROGRAMA" << endl;
				break;  		
		}
		if(op !=3){
			system("pause");
		}
	}while(op!=3);
	return 0;
}
