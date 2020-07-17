#include <iostream>
using namespace std;
int factorial (int n){
	if (n<0){
		return 0;
	}
	if(n<=1){
		return 1;
	}
	return n * factorial(n-1);
}
int main (){
	int n,r;
	cout << "Ingrese valor de n: "; cin >>n;
	r = factorial(n);
	cout << "El factorial es: " <<r;
}
