#include <iostream>

using namespace std; 

int main()
{
	float i,n=8 , peso, suma=0, promedio, pesobajo;

	
	cout<<"CONTROL DE CALIDAD EN PLANTA INDUSTRIAL (MINIMOS, MAXIMOS Y VALIDACION)"<<endl;
	
	for (i=1;i<=n;i++) 
	{
		cout<<"Ingrese el peso de la botella ( en gramos ): "<< i << endl; 
		cin>>peso; 
		
		if(peso<=0) {
			cout<<"Error el peso no es valido"<< endl; 
			continue; 
		}
		
		if(peso<490)  {
			cout<<"Bajo peso"<<endl; 
			pesobajo=pesobajo+1;
		}
		
		if(peso )
		
		suma=suma+peso;  
	}
		promedio= suma/8;

		
	cout << "La suma de los pesos validos son: "<< suma << " g " << endl;
	cout << "El promedio del peso es: "<< promedio << " g " << endl; 

	
	return 0;
}