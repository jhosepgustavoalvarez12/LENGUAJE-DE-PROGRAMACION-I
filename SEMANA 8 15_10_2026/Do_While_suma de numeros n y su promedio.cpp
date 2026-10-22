#include <iostream> 

using namespace std; 

int main()
{
	float n, suma=0,i=1, dato; 
	cout<< " Seleccione cuantos numeros desea sumar: "<<endl;
	cin>> n;  
	do{
		
			
		cout<<" Ingrese el dato:  "<< i << endl;
	 	cin>> dato; 
		
		
		suma=suma+dato;
		
		i=i+1;	
	}while(i<=n); 
	       
	cout<<" La suma total es: "<< suma << endl;
	cout<<endl; 
	
	cout<<" El promedio es: "<< suma/n << endl;
	
	
	return 0; 
		
}