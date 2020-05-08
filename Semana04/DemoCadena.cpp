#include <iostream>
#include <sstream>
using namespace std;
int main(){
	
	stringstream reporte;
	
	reporte << "Gustavo";
	reporte << "," << 57 << endl;
	reporte << "Chiclayo" << endl;
	
	cout << reporte.str() << endl;
	return 0;	
}
