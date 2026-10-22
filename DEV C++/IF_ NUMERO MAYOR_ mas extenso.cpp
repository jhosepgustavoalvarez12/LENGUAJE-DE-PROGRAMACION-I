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
	cout<<"Su IMC es: "<< imc << endl; 
	}
		
	if (imc<18.5) 
		cout<<"Usted esta en la categoria:"<<"Bajo"<<endl; 
	
	else if (imc < 25.0)
		cout << "Usted esta en la categoria: " << "Normal" << endl;
		
	else if (imc < 30.0)
		cout << "Usted esta en la categoria: " << "Sobrepeso" << endl;
		
	else
		cout << "Usted esta en la categoria: " << "Obesidad" << endl;


		
	return 0;
}