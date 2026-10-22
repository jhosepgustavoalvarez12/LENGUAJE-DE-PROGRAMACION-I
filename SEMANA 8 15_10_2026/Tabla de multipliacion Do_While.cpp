#include <iostream> 

using namespace std; 

int main()
{
	float n=7,i=1, multi; 
	cout<< " Tabla de multipliacion del 7 "<<endl;
	
	do{
		
		multi=n*i;
			
		cout<< n << "*" << i << "=" << multi <<endl;
		
		i=i+1;
	
	
		
	} 
	while(i<=10);
	
	return 0;
	
	}
	
