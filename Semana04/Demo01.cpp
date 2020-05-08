#include<iostream>
using namespace std;

// Programa principal
int main (){

	int a = 10;
	int b = 20;
	int c;
	
	c = ++a + b++;
	
	cout << "c = " << ++c << endl;
	 	
	return 0;
}
