/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre, apellido, edad;

    cout << "Ingrese sus nombres: ";
    getline(cin, nombre);

    cout << "Ingrese sus apellidos: ";
    getline(cin, apellido);
    
    cout << "Ingrese su edad: "; 
    getline(cin,edad);

    cout << "\nNombre completo: " << nombre << " " << apellido << endl;
    cout << "Edad:" << edad << endl;

    return 0;
}