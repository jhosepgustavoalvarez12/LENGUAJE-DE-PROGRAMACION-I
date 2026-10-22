#include <iostream>
using namespace std;

int main()
{
    float calificacion;
    int nivel;

    cout << "Ingrese la calificacion que es entre (0 - 20): ";
    cin >> calificacion;

    if (calificacion < 0 || calificacion > 20)
    {
        cout << "La nota ingresada no es valida, escriba un valor entre 0-20" << endl;
    }
    else
    {
        if (calificacion >= 18) {
            cout << "Usted es excelente (Sobresaliente)" << endl;
            nivel = 1;
        }
        else if (calificacion >= 14) {
            cout << "Usted esta Aprobado (Bueno)" << endl;
            nivel = 2;
        }
        else if (calificacion >= 11) {
            cout << "Usted esta Aprobado (Regular)" << endl;
            nivel = 3;
        }
        else {
            cout << "Desaprobado" << endl;
            nivel = 4;
        }

        switch (nivel) {
            case 1:
                cout << "Categoria A: Postulante a cuadro de honor o beca" << endl;
                break;
            case 2:
                cout << "Categoria B: Buen rendimiento academico" << endl;
                break;
            case 3:
                cout << "Categoria C: Aprobado, pero requiere reforzamiento" << endl;
                break;
            case 4:
                cout << "Categoria D: Desaprobado, debe rendir nuevo examen" << endl;
                break;
            default:
                cout << "Categoria desconocida" << endl;
        }
    }

    return 0;
}