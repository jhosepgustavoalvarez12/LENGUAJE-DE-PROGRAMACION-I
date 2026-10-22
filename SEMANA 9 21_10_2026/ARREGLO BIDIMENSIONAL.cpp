#include <iostream>

using namespace std; 

int main ()
{
	int i,j, matriz[2][3]={{14,15,16},{8,13,20}};
	
	cout<< " ARREGLO BIDIMENSIONAL (Matriz)"<<endl;
	
	for(i=0; i< 2; i++) 
		{
		for(j=0; j<3; j++) 
			
				cout<< matriz [i][j]<<"\t";
				cout<<endl;
			
		}
	return 0;


}