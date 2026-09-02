/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float C, F ;

    cout << "Ingresa el valor de los grados Celcius: ";
    cin >> C;

    F= (C*18)+ 32;
    
    cout << "La conversion en los grados fahrenheit " << F << endl;


    return 0;
}
