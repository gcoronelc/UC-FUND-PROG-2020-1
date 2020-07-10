#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<sstream>
using namespace std;
 
int main(){
	
	// Variables
    int num;
    stringstream reporte;
    int nNumeros;
    int cntAprob = 0,cntDesaprob = 0;
    double acumuladorSuma = 0;
    int mayor = 0, menor = 20;// No se esta considerando al cero por no ser ni positivo ni negaivo
    double promedio;
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
    for(int c = 1; c <= nNumeros; c++)
    {
        num = 0 + rand() % (20 - 1);// Numeros del 1 al 100
        reporte<< " " << num<< " ";
        if(num < menor){
        	menor = num;
		}
		if(mayor < num){
        	mayor = num;
		}
		cntAprob+=(num>=14)?1:0;
		cntDesaprob+=(num<14)?1:0;
		acumuladorSuma+=num;
    }
    
    promedio = acumuladorSuma/nNumeros;
    
    // Salida
    cout << " Los numeros son: "<<reporte.str()<<endl;
    cout << " La nota mayor es: " << mayor <<endl;
    cout << " La nota menor es: " << menor <<endl;
    cout << " El promedio de las notas es: " << promedio <<endl;
    cout << " El numero de desaprobados es: " << cntDesaprob <<endl;
    cout << " El numero de aprobados es: " << cntAprob <<endl;
    
    return 0;
}
