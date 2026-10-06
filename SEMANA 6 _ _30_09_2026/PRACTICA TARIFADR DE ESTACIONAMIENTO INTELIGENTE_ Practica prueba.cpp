#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
	int vehiculo, ticket, horas, costo, montofinal;
	
	cout<<"---|TARIFADOR DE ESTACIONAMIENTO INTELIGENTE|----"<<endl; 
	
	cout<<"\n Seleccione su tipo de vehiculo"<<endl; 
	cout<<"1. Motocicleta ($2.00 por hora)"<<endl; 
	cout<<"2. Automovil ($5.00 por hora)"<<endl; 
	cout<<"3. Camioneta ($2.00 por hora)"<<endl;
	cin>>vehiculo;
	
	cout<<"\n Sus horas de permanencia"<<endl;
	cin>>horas;
	
	if(horas<=0) {
		cout<<"Error tiempo no valido"<<endl;
	}
	
	else {
	
	cout<<"Posee su ticket a la mano"<<endl;
	cin>>ticket; 
	if (ticket=0) {
		cout<<"Se le aumentara $15.00 de penalizacion al coste total"<<endl;
		
		switch(vehiculo) {
			
			case 1: 
				
				if(horas>8) {
					costo=(2*hora)+15
			}
				
			case 2:
				if(horas>8) {
					costo=(5*hora)+15
				}
			case 3:
				if(horas>8) {
					costo=(2*hora)+15
				}
			
		}
			
	}
	else (ticket=1) {
	
		switch(vehiculo){
		
			case 1:
				if(horas>8) {
					costo=
				}
		
			case 2;
				if(horas>8) {
					
				}
		
			case 3;	
				if(horas>8) {
					
				}
			
			
			default: cout<<"Su tipo de vehiculo no es vallido"<<endl;
	} 
}
}
	cout<<"Coste base"<<costo<<endl;
	cout<<"Con penalizacion"<<costo<<endl;
	cout<<"Monto final"<<montofinal
	return 0;
}


