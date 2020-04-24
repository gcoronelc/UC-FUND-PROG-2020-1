//ejercicio7-practica2
// La inversion total no puede ser un datos de entrada
#include<iostream>
#include<math.h>
using namespace std;
int main (){
	//Variables
	double a,b,c,d,e,T,m,n,o,p,q;
	
	//Entrada
	//cout<<"Ingrese la cantidad total de la inversion:"; cin>>T;
	cout<<"La primera inversion:"; cin>>a;
	cout<<"La segunda inversion:"; cin>>b;
	cout<<"La tercera inversion:"; cin>>c;
	cout<<"La cuarta inversion:"; cin>>d;
	cout<<"La quinta inversion:"; cin>>e;
	
	//Proceso
	T=a+b+c+d+e;
	m=(a*100)/T;
	n=(b*100)/T;
	o=(c*100)/T;
	p=(d*100)/T;
	q=(e*100)/T;
	
	//Salida
	cout<<"\n";
	cout<<"Con respecto a:"<<T<<"\n";
	cout<<"El porcentaje de la primera inversion es:"<<m<<"%\n";
	cout<<"El porcentaje de la segunda inversion es:"<<n<<"%\n";
	cout<<"El porcentaje de la tercera inversion es:"<<o<<"%\n";
	cout<<"El porcentaje de la cuarta inversion es:"<<p<<"%\n";
	cout<<"El porcentaje de la quinta inversion es:"<<q<<"%\n";
	cout<<"\n";
	
	system("pause");
	
	return 0;
}
