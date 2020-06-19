#include<iostream>
using namespace std;

void sumar(int num1, int num2){
	int suma;
	suma = num1 + num2;
	cout << num1 << " + " << num2 << " = " << suma << endl;
}

int main(){
	sumar(34,56);
	sumar(12,65);
	sumar(65,27);
	return 0;
}
