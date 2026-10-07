#include <iostream>

using namespace std; 

int main()
{
	float i, n=7, kilo, suma=0, promedio, altokilo;
	
	
	cout<<"REGISTRO DEL CONSUMO EN KILOVALTIOS-HORA DE UN HOGAR DURANTE 7 DIAS DE LA SEMANA"<<endl; 
	
	for(i=1;i<=n;i++)
	{
		cout<<"Indique el consumo (kWh) del dia:  "<< i << endl; 
		cin>>kilo;
		
		if(kilo>15.0){
		
			cout<<"Dia de alto consumo------  "<<endl;
			altokilo=altokilo+1;
		}
		
		suma+=kilo;	
	
	}
	    promedio=suma/n;
	

		cout<<"El consumo total acumalado de toda la semana es: "<< suma << endl;
		cout<<"El consumo promedio diario es :  "<< promedio << endl; 
		cout<<"La cantidad de dias de exceso de consumo son: "<<  altokilo << endl;
		
	return 0;
}