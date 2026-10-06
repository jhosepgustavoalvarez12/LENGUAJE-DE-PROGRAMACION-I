
//ESTUDIANTE: JHOSEP GUSTAVO CORONADO ALVAREZ

#include <iostream>

using namespace std;

int main()
{
	int destino,peso, solicitud, cliente, tarifa, costoexpres, costocliente;
	
	cout<<"------TARIFICADOR DE ENVIOS NACIONALES E INTERNACIONALES------"<<endl; 
	
	cout<<"Ingrese su zona de destino (tiene que ser un numero entero)"<<endl; 
	cout<<"1. Local/Urbana (S/.5.00 por kg)"<<endl;
	cout<<"2. Nacional (S/.10.00 por kg)"<<endl;
	cout<<"3. America  del Sur (S/.20.00 por kg)"<<endl;
	cout<<"4. Internacional/ Resto del mundo (S/.35.00 por kg)"<<endl;
	
	cout<<"Seleccione una opcion: ";
	cin>>destino;
	
	cout<<"\nPonga el peso de su paquete en kilogramos (kg): ";
	cin>>peso; 
	
	cout<<"¿Usted solicita servvicio expres o prioritaria?: "<<endl;
	cout<<"1. Si "<<endl;
	cout<<"0. No "<<endl;
	cin>>solicitud; 
	
	cout<<"Tipo de cliente: "<<endl;
	cout<<"1. Corporativo / Frecuente"<<endl;
	cout<<"0. Particular"<<endl;
	cin>>cliente;
	
	
	if(peso>0 && peso<=50) {	
	switch(destino) 
	{
		case 1: 
			if(peso>15) {
				cout<<"El peso es mayor a 15kg se le aplico una multa de S/.12.00  "<<endl;
				tarifa=(5*peso)+12;
			}
			else {
		 		tarifa=5*peso;
			 }
			break; 
			
			
		case 2: 
			if(peso>15) {
				cout<<"El peso es mayor a 15kg se le aplico una multa de S/.12.00  "<<endl;
				tarifa=(10*peso)+12;
			}
			else {
		 		tarifa=10*peso;
			 }
			break; 
			
		case 3:
		 	if(peso>15) {
		 		cout<<"El peso es mayor a 15kg se le aplico una multa de S/.12.00  "<<endl;
				tarifa=(20*peso)+12;
			 }
		 	else  {
		 		tarifa=20*peso;
			 }
			break; 
			
		case 4:
			if(peso>15) {
				cout<<"El peso es mayor a 15kg se le aplico una multa de S/.12.00  "<<endl;
				tarifa=(35*peso)+12;
			}
			else  {	
		 		tarifa=35*peso;
		 		}
		 	break; 
		 	
		default:
			cout<<"La opcion elegida no es valida";
			
		return 0;
	}
	
	}
	
	else {
		cout<<"Error el peso no esta en el rango"<<endl;
		
		return 0;
	}

	
	if(solicitud == 1) {
		costoexpres=tarifa*0-25;
}
	else(solicitud == 0); {
		costoexpres=tarifa;
	}
	
	if(cliente == 1) { 
	 	costocliente=costoexpres/0.10;
	}
	else(cliente == 0); {
		costocliente=costoexpres;
	}
	
	cout<<" Zona elegida: "<< destino <<endl;
	cout<<" Costo base por peso: "<< tarifa <<endl;
	cout<<" Sobretasa por carga pesada: " << tarifa <<endl; 
	cout<<" Descuento corporativo: " << cliente <<endl;
	cout<<" Monto total a pagar: " << costocliente <<endl;
	
	return 0;
}