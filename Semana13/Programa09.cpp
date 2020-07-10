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
		for(int i = 0; i < nNumeros ; i++)
    {
        reporte2<< " " << array2[i]<< " ";
    }
    
    // Salida
    cout << " Los numeros son: "<<reporte1.str()<<endl;
    cout << " Los numeros ordenados son: "<<reporte2.str()<<endl;
    
    return 0;
}
