#include <iostream> 

using namespace std; 

int main()
{
	int monto, total=0;
	char respuesta; 
	
	cout<< "TERMINAL DE RECARGA DE TARJETA DE TRANSPORTE"<<endl;
	cout<<endl;
	
	cout<<" Ingrese el monto que desea ingresar (S/1, S/2, S/5, S/10, S/20)"<<endl;
	cin>> monto;
	
	if(monto>0) 
	{
	
		total=monto;
	
		do{
		
			cout << "Desea ingresar mas dinero (s=si/n=no): "<<endl;
			cin>> respuesta; 
			
			if (respuesta=='s') 
			{
				cout<<"Cuanto mas"<<endl;
				cin>>monto;
				
				if(monto>0) {
					total=total+monto; 
							}
				else {
					cout<<"Lo siento el monto no es valido"<<endl;
								}
			}
			else {
				cout<<"TERMINO EL PROCESO"<<endl;
					}
				
			} 
		while(respuesta == 's');
	}
	else 
	{
		cout<<"Lo siento el monto no es valido"<<endl;
	}
	
	cout<<"EL MONTO TOTAL INGRESADO ES: S/"<< total <<endl;
	
	return 0;
}
       
         