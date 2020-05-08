#include<iostream>
using namespace std;

int main(){
	//variables
	double sueldo, descuento, neto, porcDcto;

	//Ingreso de datos
	cout<<"SUELDO:";
	cin>> sueldo; 
	cout <<"\n";
			
	//Proceso
	if (0<sueldo && sueldo<=1000){
		porcDcto = 10;
	}
	else if(1000<sueldo && sueldo<=2000){
		porcDcto = 15;
	}
	else if(sueldo>2000){
		porcDcto = 20;
	}
	descuento = sueldo * porcDcto / 100.0;
	neto = sueldo - descuento;
	
	//Reporte
	cout << "Porc. de Dcto. " << porcDcto << "%" << endl;
	cout << "Descuento: " << descuento << endl;
	cout<< "SUELDO NETO: "<< neto <<endl;		
	system("pause");
	return 0;
}
