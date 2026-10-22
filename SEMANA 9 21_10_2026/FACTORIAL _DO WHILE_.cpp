// Calcular el factorial de un numero n
#include <iostream>

using namespace std;

int main()
{
    int i, n, factorial;
    char respuesta;

    cout << "Calculador de factorial" << endl;

    do
    {
    cout << "Ingrese el numero al cual desea sacar factorial" << endl;
    cin >> n;

    factorial = 1;

    for (i = 1; i <= n; i++){
            factorial = factorial * i;
        }

    cout << "Su factorial es: " << factorial << endl;

    cout << "Deseas calcular otro factorial s/n" << endl;
    cin >> respuesta;

    } 
	
	while (respuesta == 's' || respuesta == 'S');

    return 0;
}

 