#include <iostream>
using namespace std;

int main() 
{
    float calificacion;

    cout << "Ingrese la calificacion que es entre (0 - 20): ";
    cin >> calificacion;

    if (calificacion < 0 || calificacion > 20) 
        cout << "La nota ingresada no es validaw escriba un valor entre 0-20" << endl;
    
    else if (calificacion >= 18) {
        cout << "Uted es excelente (Sobresaliente)" << endl;
    }
    else if (calificacion >= 14) {
        cout << "Usted esta Aprobado (Bueno)" << endl;
    }
    else if (calificacion >= 11) {
        cout << "Usted esta probado (Regular)" << endl;
    }
    else {
        cout << "Desaprobado" << endl;
    }
	
	int nivel, nota; 
		nivel=1; 
		}
    else if (nota >= 14) {
		nivel=2; 
	}
	else if (nota >= 11) {
		nivel=3;
	}
	else {
		nive=4; 
	}
	case 1:
			cout<<"Categoria A: Postulante a cuadro de honor o beca"<<endl; 
			break;
		case 2:
			cout<<"Categoria B: Buen rendimiento academico"<<endl;
			break; 
		case 3:
			cout<<"Categoria C: Aprobado, pero requieren reforzamiento"<<endl;
			break;
		case 4: 
			cout<<"Categoria D: Desaprobado, debe rendir nuevo examen "<<endl;
			break;
		default: 	
			cout<<"Categoria desconocida";
		
				}
	                               <<endl
	
    return 0;
}