#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
main(){
	//variable
	float p,a,b,c,Area;
	//entrada
	cout<<"valor de a: ";
	cin>>a;
	cout<<"valor de b: ";
	cin>>b;
	cout<<"vlor de c: ";
	cin>>c;
	//proceso
	p=(a+b+c)/2;
	Area=sqrt(p*(p-a)*(p-b)*(p-c));
	//salida
	cout<<"el p es: "<<p<<endl;
	cout<<"el Area es: "<<Area<<endl;
	return 0;
}

