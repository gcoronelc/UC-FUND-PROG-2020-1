#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
	
	// Variables
    int num, suma, i;
    
    // Entrada de datos
    cout << "\t Ingrese numeros enteros\n";
    cout << "==================================\n";
    do{
	    cout << "Numero : "; cin >> num;
	    // Proceso
	    suma += num;
	    i++;
    }while (num > 0 || num < 0);
    
    
    // Salida
    cout << "\t Respuesta\n";
    cout << "==================================\n";
    cout << "La suma es de : " << suma << endl;
    cout << "==================================\n";
    
    
    system("PAUSE");
    return 0;
}
