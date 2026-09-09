 #include<iostream>
 #include<cmath> 
 using namespace std;

int main() {


float a, b, c, is; 
float x1, x2, d; 

cout << "Ingrese el valor de a:";
cin >> a;
cout << "Ingrese el valor de b:";
cin >> b;
cout << "Ingrese el valor de c:";
cin >> c;

d= (b*b)-(4*a*c);
if(d>0) {

cout <<"Si se puede realizar";
x1= ((-b) + sqrt(d)) / (2*a);
x2= ((-b) - sqrt(d)) / (2*a);
cout << "El valor del primer x es:"<< x1 << endl;
cout << "El valor del segundo x es:"<< x2 << endl;
}
else{
is= (d)+is;
cout << "Tu numero es complejo:"<< is << endl;

}



return 0; 

}

