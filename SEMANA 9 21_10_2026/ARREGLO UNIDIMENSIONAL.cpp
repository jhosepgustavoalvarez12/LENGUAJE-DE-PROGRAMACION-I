#include <iostream>

using namespace std; 

int main()
{
	int notas[5]={2,14,15,18,20}, i; 
 
	cout<<"ARREGLO UNIDIMENSIONAL \n"<<endl;  
	cout<<"Primera Nota indice 0:  "<< notas[0] << endl; 
	cout<<"Ultima nota indice 4:  "<< notas[4] << endl; 
	
	for (i=0;i<5; i++) 
		cout<< "Nota en indice ["<< i <<"] : "<< notas[i] << endl; 
		
		
	return 0; 
}