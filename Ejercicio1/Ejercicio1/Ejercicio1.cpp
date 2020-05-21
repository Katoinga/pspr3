
#include <iostream>
using namespace std;
// declaracion
double Suma(double x, double y);
double Producto(double x, double y);

// programa principal
int main(void)
{
	double a, b;
	int c;
	cout << "escribe un numero" << endl; cin >> a;
	cout << "escribe otro numero" << endl; cin >> b;
	cout << "Que operacion deseas hacer, 1(suma),2(producto)" << endl; 
	cin >> c;

	if (c == 1)
		cout << "el resultado de la suma es: " << Suma(a, b) << endl;
	else
		cout << "el resultado del producto es: " << Producto(a, b) << endl;
	
	return 0;
	
}

//definicion
double Suma(double x, double y) {
	double z;
	z = x + y;
	return z;
}

double Producto(double x, double y) {
	return (x*y);
}