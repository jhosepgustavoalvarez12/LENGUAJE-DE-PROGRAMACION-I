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
	cout<<"Su peso es: "<< peso <<"Kg"<<endl;
	cout<<"Su estatura es: "<< estatura <<"Metros"<<endl; 
	}
		
	if (imc<18.5) 
		cout<<"Usted esta en la categoria:"<<"Bajo"<<endl; 
	

	  if else (imc>=18.5 && imc<=24.9);  
		cout<<"Usted esta en la categoria:"<<"Sobrepeso"<<endl;
    
	else (imc>=25.0 && imc<=29.9); 
		cout<<"Usted esta en la categoria:"<<"Sobrepeso"<<endl;


		
	return 0;
}