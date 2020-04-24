#include<iostream>
using namespace std;

int main(){
	
	// Variables
  int b, h;
  double area;
	
	//Entrada
  cout << "\n";
  cout << "::: AREA DE UN TRIANGULO:::\n";
  cout << "===============================\n";
  cout << "Ingrese base: ";   cin >> b;
  cout << "Ingrese altura: "; cin >> h;
  
	//Proceso
    area = (b * h) / 2.0;
	
	//Reporte
  cout <<"\n";
  cout << ":::REPORTE:::\n";
  cout << "==========\n";
  cout << "Area del triangulo: " << area << "\n\n";
	
	system("pause");
	return 0;
}
