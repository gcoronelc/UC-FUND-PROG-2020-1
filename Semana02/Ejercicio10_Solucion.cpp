#include <iostream>
using namespace std;

int main()
{
	//variables
	int d,v,c,u,n;
	//entrada
	cout<<"ingrese el monto : ";cin>>n;
	//proceso
	v = n / 20;
	n = n % 20;
	d = n / 10;
	n = n % 10;
	c = n / 5;
	u = n % 5;
	//salida
	cout<<"cantidad de S/20 :"<<v<<endl;
	cout<<"cantidad de S/10 :"<<d<<endl;
	cout<<"cantidad de S/5 :"<<c<<endl;
	cout<<"cantidad de S/1 :"<<u<<endl;
  return 0;
}
