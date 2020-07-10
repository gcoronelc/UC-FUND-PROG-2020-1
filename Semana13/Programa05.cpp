#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<sstream>
using namespace std;
 
int main(){
	
	// Variables
  int num, c;
  stringstream reporte;
  int nNumeros;
  int mayor = 1, menor = 100;// No se esta considerando al cero por no ser ni positivo ni negaivo
  
	// Config
  srand(time(NULL));
    
  // Entrada
  do{
  	cout << "ingrese la cantidad de numeros a generar: "; cin >> nNumeros;
  	if(nNumeros<=0){
  		cout << " Ingrese una cantidad valida, por favor.\n";
		}
	}while(nNumeros<=0);
    
  // Proceso
  for(c = 1; c <= nNumeros; c++)
  {
		num = 1 + rand() % (100 - 1);// Numeros del 1 al 100
		reporte<< " " << num<< " ";
		if(num < menor){
			menor = num;
		}
		if(mayor < num){
		  	mayor = num;
		}
  }
    
  // Salida
  cout << " Los numeros son: "<<reporte.str()<<endl;
  cout << " El numero mayor es: " << mayor <<endl;
  cout << " El numero menor es: " << menor <<endl;
    
  return 0;
}
