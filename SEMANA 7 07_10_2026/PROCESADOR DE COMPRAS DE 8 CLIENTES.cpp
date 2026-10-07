#include <iostream>

using namespace std; 

int main()
{
	float i, n=8, monto, suma=0, clientepr, promedio;
	
	
	cout<<"PROCESADOR DE COMPRAS DE 8 CLIENTES (TURNO MAÑANA)"<<endl; 
	
	for(i=1;i<=n;i++)
	{
		cout<<"Monto del cliente: "<< i << endl; 
		cin>>monto; 
		
		if(monto>100)
		{
			cout<<"Es un cliente preferencial-------  "<<endl;
			clientepr=clientepr+1;
		}
		suma+=monto;
		
	
	}
	    promedio=suma/n;
	
		cout<<"La cantidad de clientes son:  "<< n << endl;
		cout<<"La suma total de las ventas del turno mañana son: "<< suma << endl;
		cout<<"El promedio es: "<< promedio << endl; 
		cout<<"EL total de clintes preferenciales son: "<<  clientepr << endl;
}