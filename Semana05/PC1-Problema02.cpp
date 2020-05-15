#include <iostream>
using namespace std;
int main(){

  // Variables
  string linea = "-------------------------------------\n";
  int hora;
  int salario;
  int pagoHora;  
  int categoria;
  int salarioNeto; 
  int bono;

  // Ingreso de datos:  
  cout << "INGRESO DE DATOS\n";
  cout << linea;
  cout << "Ingrese Horas trabajadas por semana: "; cin >> hora;		
  cout << "Ingrese el pago por hora: "; cin >> pagoHora;		
    
  cout << "\nCATEGORIA\n";
  cout << "1: suficiente " << endl;
  cout << "2: No pobre " << endl;
  cout << "3: Pobre " << endl;
  cout << "4: Pobre extremo " << endl;
  cout << linea;
  cout << "Elegir opcion: "; cin >> categoria;
  

  //Proceso     
  
  salario = hora * pagoHora;
  switch(categoria){
  	case 1:
  		bono = 50; break;
		case 2:
			bono = 100;	 break;
		case 3:
			bono = 150; break;		
		case 4:
			bono = 200;	break;
	}
	salarioNeto = salario + bono;
  
  // Reporte
  
  cout << "\n";
  cout << "REPORTE\n";
  cout << linea;
	cout << " Salario : " << salario << endl;
	cout << " Bono : " << bono << endl;
	cout << " Salario Neto : " << salarioNeto << endl;
         
  return 0;
}
