#include <iostream>

using namespace std; 

int main()
{
	float i, n=5, tempe, suma=0, promedio, altotemper;
	
	
	cout<<"REGISTRO DE TEMPERATURA DE UN INVERNADERO EN 5 MOMENTOS DISTINTOS DEL DIA"<<endl; 
	
	for(i=1;i<=n;i++)
	{
		cout<<"Indique la temperatura en la toma:  "<< i << endl; 
		cin>>tempe;
		
		if(tempe>28.0){
		
			cout<<"Es un cliente preferencial-------  "<<endl;
			altotemper=altotemper+1;
		}
		
		suma+=tempe;	
	
	}
	    promedio=suma/n;
	
		cout<<"La cantidad de tomas de temperatura fueron:  "<< n << endl;
		cout<<"La suma total de las temperaturas tomadas son: "<< suma << endl;
		cout<<"El promedio del dia es:  "<< promedio << endl; 
		cout<<"EL total de alertas por calor extremos registradas son: "<<  altotemper << endl;
		
	return 0;
}