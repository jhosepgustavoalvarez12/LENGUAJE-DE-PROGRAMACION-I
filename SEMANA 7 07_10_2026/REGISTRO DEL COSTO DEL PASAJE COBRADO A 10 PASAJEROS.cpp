#include <iostream>

using namespace std; 

int main()
{
	float i, n=10, monto, suma=0, promedio, pasajepre;
	
	
	cout<<"REGISTRO DEL COSTO DEL PASAJE COBRADO A 10 PASAJEROS DURANTE UN TRAYECTO INTERPROVINCIAL"<<endl; 
	
	for(i=1;i<=n;i++)
	{
		cout<<"Indique el monto del pasajero:  "<< i << endl; 
		cin>>monto;
		
		if(monto==15.0){
		
		pasajepre=pasajepre+1;
		}
		
		suma=suma+monto;	
	
	}
	    promedio=suma/n;
	

		cout<<"El monto total recaudado del viaje es:  "<< suma << endl;
		cout<<"El costo promedio pajado por pasajero es:  "<< promedio << endl; 
		cout<<"La cantidad total de pasajes a tarifa completa son:  "<< pasajepre << endl;
		
	return 0;
}