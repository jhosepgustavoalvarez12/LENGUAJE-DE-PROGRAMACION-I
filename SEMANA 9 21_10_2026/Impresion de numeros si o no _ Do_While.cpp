#include <iostream>

using namespace std; 

int main()
{
	int i=1; 
	char respuesta; 
	
	cout<< "-----IMPRESION DE NUMERO-----"<< endl; 
	
	do{
		cout<<"Numero: "<< i << endl; 
		i=i+1; 
		
		cout<<"Desea imprimir el siguiente numero s/n: "<< endl; 
		cin>>respuesta;
		
	} 
	while (respuesta == 's' || respuesta == 'S');
	
	return 0;
	
}