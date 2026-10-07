#include <iostream>

using namespace std; 

int main()
{
	int i, n, suma=0, nota; 
	
	cout<<"Leer n notas: "; 
	cin>>n; 
	
	for(i=1;i<=n;i++) 
	{
		cout<<"Ingrese la nota: "<<i<<": ";
		cin>>nota; 
		
		suma+=nota; 
	}
		cout<<"_________________"<<endl;
		cout<<"La suma de notas es"<<endl;
		cout<<suma<<endl;
		cout<<"El promedio de la suma es:  "<<suma/n<<endl;
	
	return 0;
}