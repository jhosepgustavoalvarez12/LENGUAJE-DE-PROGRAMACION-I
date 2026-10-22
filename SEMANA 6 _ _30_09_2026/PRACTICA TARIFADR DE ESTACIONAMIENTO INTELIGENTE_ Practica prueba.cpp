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
	
		cout<<"Posee su ticket a la mano (1=Si / 0=No)"<<endl;
		cin>>ticket; 
		
		switch(vehiculo) {
			
			case 1: 
				costo=2*horas;
				break;
				
			case 2:
				costo=5*horas;
				break;
				
			case 3:
				costo=2*horas;
				break;
			
			default: 
				cout<<"Su tipo de vehiculo no es valido"<<endl;
				return 0;
		}
		
		montofinal=costo;
		
		if (ticket==0) {
			cout<<"Se le aumentara $15.00 de penalizacion al coste total"<<endl;
			montofinal=costo+15;
		}
		
		cout<<"Coste base: $"<<costo<<endl;
		cout<<"Con penalizacion: $"<<montofinal<<endl;
		cout<<"Monto final: $"<<montofinal<<endl;
	}
	
	return 0;
}


