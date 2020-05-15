#include <iostream>
#include <sstream>
using namespace std;
int main(){
	// Variables
	int importe, valorBillete, cantBilletes;
	string descBillete;
	stringstream reporte;
	// Leer el importe
	cout << "Importe: "; cin >> importe;
	// Proceso
	for(int i=1; i <= 8; i++){
		switch(i){
			case 1:
				valorBillete = 200;
				descBillete = "Billetes de 200: ";
				break;
			case 2:
				valorBillete = 100;
				descBillete = "Billetes de 100: ";
				break;
			case 3:
				valorBillete = 50;
				descBillete = "Billetes de 50: ";
				break;
			case 4:
				valorBillete = 20;
				descBillete = "Billetes de 20: ";
				break;
			case 5:
				valorBillete = 10;
				descBillete = "Billetes de 10: ";
				break;
			case 6:
				valorBillete = 5;
				descBillete = "Monedas de 5: ";
				break;
			case 7:
				valorBillete = 2;
				descBillete = "Monedas de 2: ";
				break;
			case 8:
				valorBillete = 1;
				descBillete = "Monedas de 1: ";
				break;
		} // Del Switch
		cantBilletes = importe / valorBillete;
		importe = importe % valorBillete;
		if( cantBilletes > 0 ){
			reporte << descBillete << cantBilletes << endl;
		}
	} // Del For
	// Reporte
	cout << "\nREPORTE\n";
	cout << reporte.str() << endl;
	return 0;
}
