#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	//Variables (Considerando valores enteros)
	int Cateto1,Cateto2, hipotenusa, area, perimetro;
	string line = "------------------------";
	
	//Entrada
	cout<<line<<" ENTRADA "<<line<<endl;
	cout<<"Cateto 1: ";cin>>Cateto1;
	cout<<"Cateto 2: ";cin>>Cateto2;
	
	//Proceso
	hipotenusa = sqrt(pow(Cateto1,2)+pow(Cateto2,2));
	area = (Cateto1*Cateto2)/2;
	perimetro = Cateto1 +Cateto2 + hipotenusa;
	
	//Salida
	cout<<line<<" SALIDA "<<line<<endl;
	cout<<"Hipotenusa: "<<hipotenusa;
	cout<<"\nArea: "<<area;
	cout<<"\nPerimetro: "<<perimetro;
	
	
	return 0;	
}
