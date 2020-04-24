/*
Revisar solución
*/

#include <iostream>
using namespace std;
int main(){
 	
    float Pp,Q,igv,ventas,total;
    
    cout<<"precio del producto: ";
    cin>>Pp;
    cout<<"cantidad vendida: ";
    cin>>Q;
    cout<<"\n";
    
    ventas=Pp*Q;
    igv=(Pp*Q)*0.18;
    total= ventas + igv;
    
    cout<<"la ventas es: "<<ventas<<endl;
    cout<<"igv es: "<<igv<<endl;
    cout<<"total es: "<<total<<endl;
    return 0;

}
