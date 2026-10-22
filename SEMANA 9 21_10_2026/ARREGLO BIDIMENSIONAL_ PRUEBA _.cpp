//leer una matriz de orden n por m mostrar la matriz y suma sus elementos

#include <iostream>

using namespace std; 

int main()
{
	int i,j, n, m, matriz[77][77], suma=0;
	
	cout<<"Lector de matriz n*m y suma de elementos"<< endl; 
	
	cout<<"Diga el numero de filas "<<endl; 
	cin>> n; 
	
	cout<<"Diga el numero de columnas "<<endl; 
	cin>> m;
	
	for(i=0; i < n; i++) 
	{
		for(j=0; j < m; j++) {
		
		
			
			cout<< "Ingrese el valor de la matriz " << "["<< i << "]" << "[" << j << "]" << " : " ; 
			cin>> matriz [i][j]; 
			
				suma=suma+matriz [i][j];
	}
	
	}
	
	cout<<"La matriz es "<<endl; 
	
	for(i=0; i < n; i++) 
	{
		for(j=0; j < m; j++) 
			
			cout<<matriz[i][j]<< "\t" ;
			cout<<endl; 
	}
	
	cout<<"La suma de la matriz es: "<< suma <<endl;

 	return 0;
}