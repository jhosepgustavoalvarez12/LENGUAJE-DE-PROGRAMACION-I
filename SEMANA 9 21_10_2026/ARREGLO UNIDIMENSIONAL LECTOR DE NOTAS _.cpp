// LEER N NOTAS, Mostrar las notas ingresadas y obtener el promedio

#include <iostream>

using namespace std; 

int main()
{
	int n, i, prom=0, notas[100]; 
	
	cout<< "Lector De Notas"<<endl; 
	
	cout<< " Cuantas notas desea ingresar "<<endl; 
	cin>> n; 
	
	for(i=1; i<=n ; i++) 
	{
	
	cout<< "Ingrese la nota  " << i << " : "; 
	cin>> notas[i-1];
	
	prom=prom+notas[i-1]; 
	
	}
	
	cout << "Las notas ingresadas son: "<<endl; 
	
	for (i=1; i<= n ; i++) {
		cout<< " Nota " << i << " = " << notas[i-1] << endl; 	
	}
	
	cout << "El promedio de las notas son: " << prom/n << endl; 
	
	return 0;
		
}