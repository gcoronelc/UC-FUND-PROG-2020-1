#include <iostream>
using namespace std;
int main(){

  // Variables
  string linea = "-------------------------------------\n";
  int nota1;
  int nota2;
  int nota3;
  int promedio;
  string  mensaje;

  //Ingreso de datos:  
  cout << "INGRESO DE DATOS\n";
  cout << linea;
  
  do{
		cout << "Ingrese primera nota 1: ";
  	cin >> nota1;		
  } while(nota1 < 0 || nota1 > 20);
  
  do{
		cout << "Ingrese segunda nota 2: ";
    cin >> nota2;		
  } while(nota2 < 0 || nota2 > 20);
  
  do{
		cout << "Ingrese tercera nota 3: ";
    cin >> nota3;		
  } while(nota3 < 0 || nota3 > 20);
    
  cout << "\n";

  // Proceso     
  
  mensaje = "Promedio fuera de rango"; // Punto de partida
  promedio = (nota1 + nota2 + nota3)/3;
  
  if(promedio >= 0 && promedio<5){
  	mensaje = "Desaprobado, requiere reforzamiento desde cero";  	
  }
  if(promedio >= 5 && promedio<12){
  	mensaje = "Desaprobado, requiere reforzamiento";  	
  }
  if(promedio >= 12 && promedio<15){
  	mensaje = "Aprobado";  	
  }
  if(promedio >= 15 && promedio<17){
  	mensaje = "Bueno";  	
  }
  if(promedio >= 17 && promedio<=20){
  	mensaje = "Excelente";  	
  }    
  
  //Reporte
  cout << "\n";
  cout << "REPORTE\n";
  cout << linea;
  cout << "El promedio es: "<<promedio << endl;
	cout << "Mensaje: " << mensaje << endl;
         
  return 0;
}
