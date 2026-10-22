#include <iostream>

using namespace std; 

int main()
{
	cout<< "TABLA DE MULTIPLICACION DE CUALQUIER NUMERO"<< endl; 
	
	int n, i, multi=0;
	char respuesta; 
	
	cout<< "CUAL ES EL NUMERO EL CUAL DESESA SU TABLA DE MULTIPLICACION HASTA EL 10"<< endl; 
	cin>> n; 
	
	do 
	{
		for (i=1;i<=10; i++) 
		{
			multi=n*i;
			cout<< n << "*" << i << "=" << multi << endl; 
					
		}
		
		cout<<"Deseas continuar s/n"<<endl; 
		cin>>respuesta;
		
		if (respuesta == 's' ||  respuesta == 'S') {
			cout<<"Cual es el otro valor"<< endl; 
			cin>>n;
		}	

	}
	
	while(respuesta == 's' || respuesta == 'S'); 
	
	return 0;
}