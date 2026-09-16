#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
	float peso, estatura, imc;
	int opcionRango; 

	cout<<"CALCULO DEL INDICE DE MASA CORPORAL "<<endl; 
	cout<<"Ingrese el peso en kilogramos (kg):  "; 
	cin >> peso;
	cout<<"Ingrese la estatura en metros (m):  ";
	cin>> estatura; 
	
	if(peso<=0 || estatura<=0) {
	
		cout<<"ERROR el peso y la estatura deben ser valores positivos"<<endl;	
	}
	else {
		imc= peso/(estatura*estatura); 
		if(imc<18.5) {
			opcionRango=1;  
		}	
	else if(imc>=18.5 && imc<=24.9){
	opcionRango=2;
	}
	else if(imc>=25.0 && imc<=29.9){
	opcionRango=3;
	}
	
	else if(imc>=30.0 && imc<=34.9){
	opcionRango=4;
	}
	else (imc>=35); {
	
	opcionRango=5;
    
	}
	}
	
	cout<<"Su indice de masa corporal es: "<<imc<<"kg/m3"<<endl; 
	cout<<"diagnostico:  "; 
	
	
	switch(opcionRango) {
	
	case 1:
		break;
		cout<<"Bajo peso"<<endl;  
		break; 
	case 2: 
		cout<<"Peso Normal"<<endl;
		break; 
	case 3: 
		cout<<"Sobre peso"<<endl;
		break; 
	case 4: 
		cout<<"Obesidad grado I"<<endl;
		break; 
	case 5:
		cout<<"Obesidad grado II"<<endl;
		break; 
	default: 
		cout<<"No puedo clasificar el IMC"<<endl; 
		break; 
	}

		
	                            
	
	
	return 0;
}
