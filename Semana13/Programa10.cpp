#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<sstream>
using namespace std;
 
int main(){
	
	// Variables
    int num;
    stringstream reporte1;
    stringstream reporte2;
    int nNumeros;
    int aux;
    int pos;
    double acumuladorSuma = 0;
    double media;
    int posicionMediana1;
    int posicionMediana2;
    double mediana;
    // Config
    srand(time(NULL));
    
    // Entrada
    do{
    cout << "ingrese la cantidad de numeros a generar: "; cin >> nNumeros;
    if(nNumeros<=0){
    	cout << " Ingrese una cantidad valida, por favor.\n";
	}
	}while(nNumeros<=0);
	
  int array1[nNumeros];// Inicializada aqui por el dato nNumeros
  int array2[nNumeros];
    
  // Proceso
  // Creo los dos arreglos y concateno el primero
  for(int i = 0; i < nNumeros ; i++)
  {
      array2[i] = array1[i] = 0 + rand() % (100 - 1);// Numeros del 1 al 100
      reporte1<< " " << array1[i] << " ";
      acumuladorSuma+=array1[i];
  }
    
  //Ordenamiento por Inserción
  for(int i=0;i<nNumeros;i++){
      pos = i;
      aux = array2[i];
      while((pos>0) && (array2[pos-1] > aux)){ //numeroIzq > numeroActual
          array2[pos] = array2[pos-1];
          pos--;
      }
      array2[pos] = aux;
  }
    
  // Concateno
	for(int i = 0; i < nNumeros ; i++){
        reporte2<< " " << array2[i]<< " ";
  }
        
  // Media o Promedio
  media = acumuladorSuma/nNumeros;
    
  // Mediana
  if(nNumeros%2 == 1){
    	posicionMediana1 = (nNumeros/2)+0.5;
    	mediana = array2[posicionMediana1];
	}
	if(nNumeros%2 == 0){
		nNumeros++;
		posicionMediana1 = (nNumeros/2)+0.5;
		posicionMediana2 = (nNumeros/2)-0.5;
		mediana = (array2[posicionMediana1]+array2[posicionMediana2])/2.0;
	}
    
    
  // Salida
  cout << " Los numeros son: "<<reporte1.str()<<endl;
  cout << " Los numeros en orden son: "<<reporte2.str()<<endl;
  cout << " La media de los numeros es: "<<media<<endl;
  cout << " La mediana de los numeros es: "<<mediana<<endl;
  
  return 0;
}
