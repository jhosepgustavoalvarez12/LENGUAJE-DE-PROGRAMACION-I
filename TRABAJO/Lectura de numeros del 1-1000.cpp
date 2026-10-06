#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numero;

    
    cout<<"CONVERTIR NUMEROS A PALABRAS 1 hasta el 1000"<<endl;
    cout<<"Ingrese un Numero entre 1 y 1000:  ";
    cin>>numero;

    
    if(numero<1 || numero>1000){
        cout<<"ERROR SU NUMERO NO ESTA EN EL RANGO DEL 1 - 1000, intenta de nuevo "<<endl;
    }
    else{
        cout<<"El numero en palabras es:  ";
        
        if(numero==1000){
            cout<<"Mil"<<endl;
        }

        // 1-99
        else if(numero<100){
            
            if(numero>=10 && numero<=29){
                switch(numero){

                    case 10: cout<<"Diez";break;
                    case 11: cout<<"Once";break;
                    case 12: cout<<"Doce";break;
                    case 13: cout<<"Trece";break;
                    case 14: cout<<"Catorce";break;
                    case 15: cout<<"Quince";break;
                    case 16: cout<<"Dieciseis";break;
                    case 17: cout<<"Diecisiete";break;
                    case 18: cout<<"Dieciocho";break;
                    case 19: cout<<"Diecinueve";break;
                    case 20: cout<<"Veinte";break;
                    case 21: cout<<"Veintiuno";break;
                    case 22: cout<<"Veintidos";break;
                    case 23: cout<<"Veintitres";break;
                    case 24: cout<<"Veinticuatro";break;
                    case 25: cout<<"Veinticinco";break;
                    case 26: cout<<"Veintiseis";break;
                    case 27: cout<<"Veintisiete";break;
                    case 28: cout<<"Veintiocho";break;
                    case 29: cout<<"Veintinueve";break;
                }

                cout<<endl;
            }

            else if(numero>=30){
                int decenas = numero/10;
                int unidades = numero%10;

                switch(decenas){

                    case 3: cout<<"Treinta";break;
                    case 4: cout<<"Cuarenta";break;
                    case 5: cout<<"Cincuenta";break;
                    case 6: cout<<"Sesenta";break;
                    case 7: cout<<"Setenta";break;
                    case 8: cout<<"Ochenta";break;
                    case 9: cout<<"Noventa";break;
                }

                if(unidades>0){
                    cout<<" y ";
                }

                switch(unidades){

                    case 1: cout<<"Uno";break;
                    case 2: cout<<"Dos";break;
                    case 3: cout<<"Tres";break;
                    case 4: cout<<"Cuatro";break;
                    case 5: cout<<"Cinco";break;
                    case 6: cout<<"Seis";break;
                    case 7: cout<<"Siete";break;
                    case 8: cout<<"Ocho";break;
                    case 9: cout<<"Nueve";break;
              		  }
          		      cout<<endl;
          			  }

            else{
                switch(numero){

                    case 1: cout<<"Uno";break;
                    case 2: cout<<"Dos";break;
                    case 3: cout<<"Tres";break;
                    case 4: cout<<"Cuatro";break;
                    case 5: cout<<"Cinco";break;
                    case 6: cout<<"Seis";break;
                    case 7: cout<<"Siete";break;
                    case 8: cout<<"Ocho";break;
                    case 9: cout<<"Nueve";break;
              		  }
		
                cout<<endl;
          				  }
      				  }

        // 100-900
        else{

            int centenas = numero/100;
            int resto = numero%100;

           
            switch(centenas){

                case 1:
                    cout<<"Cien1";
                    break;

                case 2:
                    cout<<"Doscientos";
                    break;

                case 3:
                    cout<<"Trescientos";
                    break;

                case 4:
                    cout<<"Cuatrocientos";
                    break;

                case 5:
                    cout<<"Quinientos";
                    break;

                case 6:
                    cout<<"Seiscientos";
                    break;

                case 7:
                    cout<<"Setecientos";
                    break;

                case 8:
                    cout<<"Ochocientos";
                    break;

                case 9:
                    cout<<"Novecientos";
                    break;
          			  }

         
            if(resto>0){

                if(resto<10){

                    cout<<" ";

                    switch(resto){

                        case 1: cout<<"Uno";break;
                        case 2: cout<<"Dos";break;
                        case 3: cout<<"Tres";break;
                        case 4: cout<<"Cuatro";break;
                        case 5: cout<<"Cinco";break;
                        case 6: cout<<"Seis";break;
                        case 7: cout<<"Siete";break;
                        case 8: cout<<"Ocho";break;
                        case 9: cout<<"Nueve";break;
                    }
               		 }
	
                // PARA 110 HASTA 129
                else if(resto>=10 && resto<=29){

                    cout<<" ";

                    switch(resto){

                        case 10: cout<<"Diez";break;
                        case 11: cout<<"Once";break;
                        case 12: cout<<"Doce";break;
                        case 13: cout<<"Trece";break;
                        case 14: cout<<"Catorce";break;
                        case 15: cout<<"Quince";break;
                        case 16: cout<<"Dieciseis";break;
                        case 17: cout<<"Diecisiete";break;
                        case 18: cout<<"Dieciocho";break;
                        case 19: cout<<"Diecinueve";break;
                        case 20: cout<<"Veinte";break;
                        case 21: cout<<"Veintiuno";break;
                        case 22: cout<<"Veintidos";break;
                        case 23: cout<<"Veintitres";break;
                        case 24: cout<<"Veinticuatro";break;
                        case 25: cout<<"Veinticinco";break;
                        case 26: cout<<"Veintiseis";break;
                        case 27: cout<<"Veintisiete";break;
                        case 28: cout<<"Veintiocho";break;
                        case 29: cout<<"Veintinueve";break;
                    }
                	}

                // 130-999
                else{

                    int decenas = resto/10;
                    int unidades = resto%10;

                    cout<<" ";

                    switch(decenas){

                        case 3: cout<<"Treinta";break;
                        case 4: cout<<"Cuarenta";break;
                        case 5: cout<<"Cincuenta";break;
                        case 6: cout<<"Sesenta";break;
                        case 7: cout<<"Setenta";break;
                        case 8: cout<<"Ochenta";break;
                        case 9: cout<<"Noventa";break;
                    }

                    if(unidades>0){
                        cout<<" y ";
                    }

                    switch(unidades){

                        case 1: cout<<"Uno";break;
                        case 2: cout<<"Dos";break;
                        case 3: cout<<"Tres";break;
                        case 4: cout<<"Cuatro";break;
                        case 5: cout<<"Cinco";break;
                        case 6: cout<<"Seis";break;
                        case 7: cout<<"Siete";break;
                        case 8: cout<<"Ocho";break;
                        case 9: cout<<"Nueve";break;
                    }
               		 }
    				}

            cout<<endl;
        			}
  					  }

    char tecla;

    cin.ignore();

    while(true){

        tecla=getch();

        if(tecla=='p' || tecla=='P'){
            break;
        	}
   			 }

    return 0;
			}