#include <iostream>
using namespace std;

// Mostrar cabecera
void showCabecera(){
	cout << "CALCULAR SUELDO A PAGAR" << endl;
	cout << "RENTA DE 4TA CATEGORIA" << endl;
}

// Leer Horas Trabajadas
int leerHorasTrabajadas(){
	int horas;
	do{
		cout << "Horas trabajadas: "; cin >> horas;
		if( horas <= 0 ){
			cout << "Dato incorrecto." << endl;
		}
	} while(horas <= 0);
	return horas;
}

// Leer pago por hora
double leerHorasPagoHora(){
	double pago;
	do{
		cout << "Pago por hora: "; cin >> pago;
		if( pago <= 0 ){
			cout << "Dato incorrecto." << endl;
		}
	} while(pago <= 0);
	return pago;
}

// Proceso
void procesarPago(int horaTrabajadas, double pagoHora,
double &ingresos, double &renta, double &neto){
	ingresos = horaTrabajadas * pagoHora;
	renta = (ingresos>1500.0)?ingresos*0.08:0.0;
	neto = ingresos - renta;
}

// Procedimiento para el reporte
void reportePago(double ingresos, double renta, double neto){
	cout << endl;
	cout << "REPORTE DE PAGO" << endl;
	cout << "Ingresos: " << ingresos << endl;
	cout << "Renta: " << renta << endl;
	cout << "Sueldo neto: " << neto << endl;
}

int main() {
	// Variables
	int horaTrabajadas;
	double pagoHora, ingresos, renta, neto;	
	// Datos
	showCabecera();
	horaTrabajadas = leerHorasTrabajadas();
	pagoHora = leerHorasPagoHora();
	// Proceso
	procesarPago(horaTrabajadas,pagoHora,ingresos,renta,neto);
	// Reporte
	reportePago(ingresos, renta, neto);
	return 0;
}

