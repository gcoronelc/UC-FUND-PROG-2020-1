#include<iostream>
using namespace std;
main() { 

	//entrada	
	string linea = "-------------------------------";
	float C1,EP,C2,EF,promedio;
	cout<<"consolidado 1: ";
	cin>>C1;
	cout<<"evaluacion parcial: ";
	cin>>EP;
	cout<<"consolidado 2: ";
	cin>>C2;
	cout<<"evaluacion final: ";
	cin>>EF;
	
	// proceso
	
	promedio=((C1*0.2)+(EP*0.25)+(C2*.02)+(EF*0.35));
	
	if (promedio>=14){
		cout<<endl;
		cout<<"aprovado! tu calificacion es : "<<promedio;
	}
	else
	{
	//reporte
		cout<<endl;
		cout<<"desaprobado tu calificacion es : "<<promedio;
	}
	return 0;
}
	
