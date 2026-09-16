#include <iostream>
using namespace std;

int main()
{
    int opcion;
    float glucosa;

    cout << "========================================" << endl;
    cout << "   DETECCION DE GLUCOSA EN SANGRE" << endl;
    cout << "========================================" << endl;

    cout << "\nSeleccione el tipo de prueba:" << endl;
    cout << "1. Glucosa en ayunas" << endl;
    cout << "2. Glucosa aleatoria" << endl;
    cout << "3. Prueba de tolerancia a la glucosa" << endl;
    cout << "4. Salir" << endl;

    cout << "\nIngrese una opcion: ";
    cin >> opcion;

    switch(opcion)
    {
        case 1:
            cout << "\n--- GLUCOSA EN AYUNAS ---" << endl;
            cout << "Ingrese la glucosa en mg/dL: ";
            cin >> glucosa;

            if(glucosa < 70)
            {
                cout << "Resultado: HIPOGLUCEMIA" << endl;
                cout << "La glucosa esta por debajo del rango esperado." << endl;
            }
            else if(glucosa < 100)
            {
                cout << "Resultado: NORMAL" << endl;
            }
            else if(glucosa < 126)
            {
                cout << "Resultado: PREDIABETES" << endl;
            }
            else
            {
                cout << "Resultado: POSIBLE DIABETES" << endl;
                cout << "Se requiere evaluacion medica." << endl;
            }
            break;

        case 2:
            cout << "\n--- GLUCOSA ALEATORIA ---" << endl;
            cout << "Ingrese la glucosa en mg/dL: ";
            cin >> glucosa;

            if(glucosa < 70)
            {
                cout << "Resultado: HIPOGLUCEMIA" << endl;
            }
            else if(glucosa >= 200)
            {
                cout << "Resultado: POSIBLE DIABETES" << endl;
                cout << "Se requiere evaluacion medica." << endl;
            }
            else
            {
                cout << "Resultado: VALOR NO DIAGNOSTICO DE DIABETES" << endl;
            }
            break;

        case 3:
            cout << "\n--- TOLERANCIA A LA GLUCOSA ---" << endl;
            cout << "Ingrese el valor de glucosa en mg/dL: ";
            cin >> glucosa;

            if(glucosa < 70)
            {
                cout << "Resultado: HIPOGLUCEMIA" << endl;
            }
            else if(glucosa < 140)
            {
                cout << "Resultado: NORMAL" << endl;
            }
            else if(glucosa < 200)
            {
                cout << "Resultado: PREDIABETES" << endl;
            }
            else
            {
                cout << "Resultado: POSIBLE DIABETES" << endl;
            }
            break;

        case 4:
            cout << "\nPrograma finalizado." << endl;
            break;

        default:
            cout << "\nOpcion no valida." << endl;
    }

    return 0;
}