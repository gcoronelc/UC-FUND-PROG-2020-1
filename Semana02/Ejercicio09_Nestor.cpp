#include <iostream>
using namespace std;

int main()
{
	//variables
	int u,d,n,p;
	//entrada
	cout<<"ingrese el numero (mayor a 100) : ";cin>>n;
	//proceso
	u=n%10;
	d=n%100;
	p=d/10;
	//reporte
	cout<<"la ultima cifra es : "<<u<<endl;
	cout<<"las dos ultimas cifras son :"<<p<<" y "<<u<<endl;
    return 0;
}


