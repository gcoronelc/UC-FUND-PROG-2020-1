#include<iostream>
#include<math.h>
using namespace std;
int main(){
	string linea= "--------------------------------------------------\n";
	//VARIABLES
	int Sueldo,Descuento,Paga;
	cout<<linea;
	cout<<"Sueldo del trabajador es= ";cin>>Sueldo;
	cout<<linea;
	//PROCESO
	if(1000>=Sueldo){
		Paga= Sueldo - ((0.10)*Sueldo);
	}else if(1000<Sueldo<2000){
		Paga= Sueldo - ((0.15)*Sueldo);	
  }
	if(Sueldo>2000){
		Paga= Sueldo - ((0.20)*Sueldo);
	}
	//SALIDA
	cout<<"La paga que recibe el trabajador es= "<<Paga<<endl;
	cout<<linea;
	return 0;
	system("pause");
}
