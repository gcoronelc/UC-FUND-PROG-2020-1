#include <iostream>
using namespace std;
int main(){
	int n = 5, f = 1;
	for(;n>1;f*=n--);
	cout << "Factorial: " << f << endl;	
	return 0;
}
