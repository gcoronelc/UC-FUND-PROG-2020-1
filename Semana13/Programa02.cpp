#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main(){
	// Configuracion
	system("color 78");
	// Variables
	float n1, n2, s, reto, r2, p;
	string nombre;
	// Datos
	cout << "Ingrese numero 01: "; cin>>n1;
	cout << "Ingrese numero 02: "; cin>>n2;
	// Proceso
	// 8*5/10*2 => 8
	s = (sqrt(n1)+pow(n2,0.25))/5*n1;
	r2 = sqrt(n1);
	p  = pow(n2,0.25);
	reto = 8*5/10*2;
	// Reporte
	cout << "El resultado es: " << s << endl;
	cout << "Reto: " << reto << endl;
	cout << "r2: " << r2 << endl;
	cout << "p: " << p << endl;
	return 0;
	system("pause");
}
