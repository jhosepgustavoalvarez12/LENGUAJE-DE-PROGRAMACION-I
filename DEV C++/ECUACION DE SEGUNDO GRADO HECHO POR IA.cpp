#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c;
    float d;
    float x1, x2;
    float parteReal, parteImaginaria;

    cout << "ECUACION DE SEGUNDO GRADO" << endl;

    cout << "Ingrese a: ";
    cin >> a;

    cout << "Ingrese b: ";
    cin >> b;

    cout << "Ingrese c: ";
    cin >> c;

    if (a == 0)
    {
        cout << "No es una ecuacion de segundo grado." << endl;
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d > 0)
        {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);

            cout << "Tiene dos soluciones reales:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (d == 0)
        {
            x1 = -b / (2 * a);

            cout << "Tiene una solucion real:" << endl;
            cout << "x = " << x1 << endl;
        }
        else
        {
            parteReal = -b / (2 * a);
            parteImaginaria = sqrt(-d) / (2 * fabs(a));

            cout << "Tiene soluciones complejas:" << endl;

            cout << "x1 = " << parteReal << " + "
                 << parteImaginaria << "i" << endl;

            cout << "x2 = " << parteReal << " - "
                 << parteImaginaria << "i" << endl;
        }
    }

    return 0;
}