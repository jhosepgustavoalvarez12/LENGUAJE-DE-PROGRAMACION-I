#include <iostream>

using namespace std; 

int main()
{
	int contador=1, suma=0, sumaimpar=0, sumapares=0; 
	
	while(contador<=10) 
	{
		
		cout<<"Numero: "<< contador << endl;
		suma=suma+contador;
		contador = contador + 1; 
		
		if(contador%2==0) {
			sumapares=sumapares+contador;
		}
		else {
			sumaimpar=sumaimpar+(contador-2);
		}
	}
		cout<<"La suma total es: "<< suma <<endl; 
		cout<<"La suma de pares es: "<< sumapares<<endl;
		cout<<"La suma de impares es: "<< sumaimpar<<endl;
}