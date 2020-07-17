// Chalco
#include<iostream>
#include<math.h>
using namespace std;

double potencia(int x, int n){
  if (n==1) return x;
  if (n%2==0) {
    return potencia(x,n/2)*potencia(x,n/2); 
  } else {
    return x*potencia(x, (n-1)/2)*potencia(x, (n-1)/2);
  }
}

int main(){
	int x;
	int y;
	cout << " base:"; cin >> x;
	cout << " exponente:"; cin >> y;
	cout << "\n\n\n";
	cout << " Resultado:" << potencia(x,y) << endl;	
	cout << " Resultado:" << pow(x,y) << endl;	
	//system("pause");
	return 0;
}
