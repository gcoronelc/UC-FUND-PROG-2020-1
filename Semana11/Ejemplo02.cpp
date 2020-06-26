#include <iostream>
using namespace std;

// leerSN
char leerSN(string etiqueta){
	char rpta;
	do{
		cout << etiqueta;
		cin  >> rpta;
		rpta = toupper(rpta);
	} while(rpta != 'S' && rpta != 'N');
} // leerSN

// leerPrecio
void leerPrecio( double &precio){
	do{
		cout << "Precio: ";
		cin  >> precio;
		if(precio <= 0.0){
			cout << "Precio incorrecto.\n";
		}
	} while(precio <= 0.0);
} // leerPrecio

// leerCantidad
void leerCantidad( double &cantidad ){
	do{
		cout << "Cantidad: ";
		cin  >> cantidad;
		if(cantidad <= 0.0){
			cout << "Cantidad incorrecta.\n";
		}
	} while(cantidad <= 0.0);
} // leerCantidad

// obtenerPorcentajeDcto
double obtenerPorcentajeDcto( double cantidad ){
	double porcentaje = 0.0;
	porcentaje = (cantidad > 2.0 && cantidad <= 5.0)?0.10:porcentaje;
	porcentaje = (cantidad > 5.0 && cantidad <= 10.0)?0.15:porcentaje;
	porcentaje = (cantidad > 10.0)?0.20:porcentaje;
	return porcentaje;	
}
// procesarVenta
void procesarVenta( double precio, double cantidad, double &importe, double &descuento, double &neto){
	// Variables
	double porcentajeDcto;
	// Proceso
	importe = precio * cantidad;
	porcentajeDcto = obtenerPorcentajeDcto( cantidad );
	descuento = importe * porcentajeDcto;
	neto = importe - descuento;
} // procesarVenta

// reporteVenta
void reporteVenta(double importe, double descuento, double neto){
	cout << endl;
	cout << "REPORTE DE VENTA\n";
	cout << "==============================\n";
	cout << "Importe: " << importe << endl;
	cout << "Descuento: " << descuento << endl;
	cout << "Neto: " << neto << endl;
	cout << endl;
} // reporteVenta

int main(){
	// Variables
	char rpta;
	double precio, cantidad, importe, descuento, neto;
	// Proceso principal
	do{
		// Titulo
		system("cls");
		cout << "SISTEMA DE VENTA: KISKIRISKI\n";
		cout << "==============================\n\n";
		// Lectura
		leerPrecio( precio );
		leerCantidad( cantidad );
		// Proceso
		procesarVenta( precio, cantidad, importe, descuento, neto);
		// Reporte
		reporteVenta(importe, descuento, neto);
		// Control de ventas
		rpta = leerSN("Otra venta (SN)? ");
	} while(rpta == 'S');
	return 0;
} // main
