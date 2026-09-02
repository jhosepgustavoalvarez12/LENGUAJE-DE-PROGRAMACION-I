/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float radio, area;
    const float PI = 3.14159;

    cout << "Ingresa el radio del circulo: ";
    cin >> radio;

    area = PI * radio * radio;

    cout << "El area del circulo es: " << area << endl;

    return 0;
}
