/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> 
#include <math.h> 
using namespace std;

int main() {
    float baseA, baseB, hipotenusa;

    cout << "Ingresa el valor de la baseA";
    cin >> baseA;

    cout << "Ingresa el valor de la baseB";
    cin >> baseB;

    hipotenusa = sqrt(pow(baseA,2) + pow(baseB,2));
    
    cout << "El valor de la hipotenusa del triangulo es" << hipotenusa << endl;

    return 0;
}
