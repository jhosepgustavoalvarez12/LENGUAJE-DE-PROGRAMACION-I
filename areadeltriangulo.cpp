/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float base, altura, areatriangulo;

    cout << "Ingresa el valor de la base";
    cin >> base;

    cout << "Ingresa el valor de la altura";
    cin >> altura;

    areatriangulo= (base * altura) / 2;
    
    cout << "El valor del area del triangulo " << areatriangulo << endl;

    return 0;
}
