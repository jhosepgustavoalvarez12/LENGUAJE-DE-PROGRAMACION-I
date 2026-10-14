#include <iostream>

using namespace std; 

int main()
{
	int i, j, matriz[3][3], suma=0, sumafila=0 , sumacolumna=0, diagonalprincipal=0; 
	cout<<"----- Tabla de multiplicacion del -----"<<endl; 
	
	for(i=0;i<3 ;i++)
	{	
		for(j=0;j< 3;j++) 
			{
			cout<<"Elemento: [" << i << "][" << j << "]: "; 
			cin>>matriz[i][j];
			suma=suma+matriz[i][j];
			
			}
		}
		
		cout<<"La matriz es: "<<endl;
		cout<<endl; 
	for(i=0;i<3 ;i++)
	{
		for(j=0;j< 3;j++) 
			{
			cout<<matriz[i][j]<<"\t"; 
			}
			cout<<endl;
		}	 
		
		for(j=0;j< 3;j++) 
		{	
			sumacolumna=0;
			
				for(i=0;i<3 ;i++) 
				{
			 		sumacolumna=sumacolumna+matriz[i][j]; 
				} 
			
			cout<<"La suma de la columna:  "<< j+1 << " = " << sumacolumna <<endl;  
			
		}
			cout<<endl;
		
			for(i=0;i<3 ;i++){
				
				sumafila=0;
					for(j=0;j< 3;j++) 
					{
						sumafila=sumafila+matriz[i][j]; 	
					}
					
			cout<<"La suma de la fila: "<< i+1 << " = " << sumafila << endl;
		}
	
		
for(i=0; i<3; i++)
{
    diagonalprincipal = diagonalprincipal + matriz[i][i];
}

cout<<"La suma de la diagonal principal es: "
    <<diagonalprincipal<<endl;
		return 0; 
}	