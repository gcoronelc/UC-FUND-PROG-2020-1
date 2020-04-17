/*PROGRAMA EJEMPLO
 Calcula el area de un triangulo 
*/
#include<iostream>
using namespace std;
int main()
{   // Declaracion de variables
   int b,h;
   double s;
   //Entrada de datos
   cout<<"Ingrese base: ";
   cin>>b;
   cout<<"Ingrese altura: ";
   cin>>h;
   //Proceso
   s=(b*h)/2.0;
   //Salida de datos
   cout<<"El area del triangulo es : "<<s<<"\n";
   system("pause");
   return 0; 
}
