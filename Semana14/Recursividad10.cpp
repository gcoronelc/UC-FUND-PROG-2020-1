// Cortez
// EJERCICIO 5 
 
#include <iostream>
using namespace std;

int suma (int n);

int main()
{
	
	int num;
	cout << "Ingrese el numero: ";
	cin  >>num;
	cout << "La suma de los digitos es:"<< suma (num) << endl;
	system ("pause");
	
	return 0;
}


int suma (int n)
{
	if (n==0)
	{
		return n;
	}
	return n%10 + suma(n/10);
}
