#include <iostream> 

using namespace std; 

int main()
{
	int n=10, suma=0,i=1, dato; 
	cout<< " Selecciona el numero hasta donde desea obtener la suma"<<endl;
	cin>> n;  
	do{
		
			
		cout<<" Ingrese el dato:  " << endl;
	 	cin>> dato; 
		
		
		suma=suma+dato;
		
		i=i+1;	
	}while(i<=n); 
	       
	cout<<"La suma total es: "<< suma << endl;
	cout<<endl; 
	
	cout<<" El promedio es: "<< suma/n << endl;
	
	
	return 0; 
		
}