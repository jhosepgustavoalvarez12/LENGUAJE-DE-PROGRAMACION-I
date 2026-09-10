#include <iostream>
#include <cmath>

using namespace std; 

int main() {

float peso, estatura, imc; 
 	
 	cout<<"Ingrese su peso en kg"<<endl;
 	cin >> peso;
 	
	cout<<"Ingrese su estatura en m (metros):"<<endl;
	cin >> estatura;
	
	imc= peso / (estatura*estatura); 
	
	{ 
	cout<<"Su peso es: "<< peso <<" Kg "<<endl;
	cout<<"Su estatura es: "<< estatura <<" Metros "<<endl; 
	}
		

	if (imc<18.5) 
		cout<<"Usted esta en la categoria:"<<"Bajo"<<endl; 
	   	
	if (imc>=18.5 && imc<=24.9)
		cout<<"Usted esta en la categoria:"<<"Peso Normal"<<endl; 

	if (imc>=25.0 && imc<=29.9)
		cout<<"Usted esta en la categoria:"<<"Sobrepeso"<<endl;

	if (imc>=30.0 && imc<=34.9)
		cout<<"Usted esta en la categoria:"<<"Obesidad grado I"<<endl; 
  		
	if (imc>=35.0 && imc<=39.9) 
		cout<<"Usted esta en la categoria:"<<"Obesidad grado II"<<endl;

	if (imc>=40.0)   
		cout<<"Usted esta en la categoria:"<<"Obesidad grado III"<<endl;

		
	return 0;
}