#include<iostream>
using namespace std;

// Programa principal
int main (){
	
	string s1 = "a";
	string s2 = "abc";
	int rpta;
	
	rpta = s1.compare(s2);
	cout << "Compare: " << rpta << endl;
	if( rpta == 0){
		cout << "Son iguales.";
	} else {
		cout << "Son diferentes";
	}
	
	return 0;
}



