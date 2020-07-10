#include<iostream>
using namespace std;
 
int main(){
	
	int notas[5];
	
	notas[0] = 15;
	notas[1] = 12;
	notas[2] = 18;
	notas[3] = 10;
	notas[4] = 16;
	
	for(int i = 0; i <= 4; i++){
		cout << "notas[" << i << "] = " << notas[i] << endl;
	}
	
	return 0;
}
