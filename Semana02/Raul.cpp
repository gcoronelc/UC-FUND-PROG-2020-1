#include<iostream>
#include<math.h>
using namespace std;

int main(){
		//Variables
	string linea = "--------------------------\n";
	int Cateto1,Cateto2,A;
	double H;
	//Entrada
	
	cout<<linea;
	cout<<"ENTRADA DE DATOS\n";
	cout<<linea;
	cout<<"Cateto1:"; cin >> Cateto1;
	cout<<"Cateto2:"; cin >> Cateto2;
	
	//Proceso
     H = sqrt((pow(Cateto1, 2.0) + pow(Cateto2, 2.0)));
     
     A = (Cateto1*Cateto2)/2.0;
	//Reporte
	cout<<endl<<linea;
	cout<< "REPORTE\n";
	cout << linea;
	cout << "H: "<< H << endl;
	cout << linea;
	cout << "A: "<< A << endl;
	cout << "Gustavo" << endl;
	
	system ("pause");
 	return 0;
}
