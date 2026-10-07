#include <iostream>


using namespace std; 

int main()
{
	int i, n=10, num, suma=0, par, impar=0, nulo;
	
	
	cout<<"PROCESADOR DE UNA LISTA DE 10 NUMEROS"<<endl; 
	
	for(i=1;i<=n;i++)
	{
		cout<<"Ingrese el numero:  "<< i << endl; 
		cin>>num;
		

		if(num % 2 == 0)
		{
		
		par=par+1;
		}
		
		if(num % 2 - 1 == 0) 
		{
			
		impar=impar+1;
		
		}
		
		if( num == 0) 
		{
		nulo=nulo+1;
		}
	 
	 suma=suma+num;
	}
		cout<<"La suma de todos los numeros son: "<< suma << endl;
		cout<<"Los numeros pares son: "<< par << endl;
		cout<<"Los numeros impares son:  "<< impar << endl; 
		cout<<"Los numeros nulos son:  "<< nulo << endl;
		
	return 0;
}