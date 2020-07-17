// Cortez
#include <iostream>
using namespace std;

int MaxCD(int a, int b){
	if (a==0){
		return b;
	}
	return  MaxCD (b%a, a);
}

int main (){
	int a, b;
	cout<< "1er Numero: ";
	cin>>a;
	cout<< "2do Numero: ";
	cin>>b;
	cout<<"El Maximo Comun Divisor es:"<< MaxCD(a, b);
	return 0;
}
