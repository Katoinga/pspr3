
#include <iostream>
using namespace std;

double Porcentaje(double n1,double n);
double ldivx(double x);
double sqr(double x);
double rsqrt(double x);
double div(double x, double y);
double mult(double x, double y);
double min(double x, double y);
double plusr(double x, double y);
double inv(double x);


int main()
{
	double x, y;
	int decis;
	cout << "Que operacion quiere hacer\nSUMA (1), RESTA(2), MULTIPLICACION(3)\n";
	cout << "DIVISION (4), RAIZ 2(5), POTENCIA 2(6), 1/X(7), PORCENTAJE(8), INVERTIR signo(9) \n";
	
	for (int i = 0;i < 9;i++) {
		cout << "\nIngrese Numero de operacion\n";
		cin >> decis;

		switch (decis) {
		case 1:
			cout << "\nIngrese los numeros x y\n";
			cin >> x;
			cin >> y;
			cout << "\n Resultado = " << plusr(x, y);
			break;
		case 2:
			cout << "\nIngrese los numeros x y\n";
			cin >> x;
			cin >> y;
			cout << "\n Resultado = " << min(x, y);
			break;
		case 3:
			cout << "\nIngrese los numeros x y\n";
			cin >> x;
			cin >> y;
			cout << "\n Resultado = " << mult(x, y);
			break;
		case 4:
			cout << "\nIngrese los numeros x y\n";
			cin >> x;
			cin >> y;
			cout << "\n Resultado = " << div(x, y);
			break;
		case 5:
			cout << "\nIngrese los numeros x\n";
			cin >> x;
			cout << "\n Resultado = " << rsqrt(x);
			break;
		case 6:
			cout << "\nIngrese los numeros x \n";
			cin >> x;

			cout << "\n Resultado = " << sqr(x);
			break;
		case 7:
			cout << "\nIngrese los numeros x \n";
			cin >> x;

			cout << "\n Resultado = " << ldivx(x);
			break;
		case 8:
			cout << "\nIngrese los numeros x y \n";
			cin >> x;
			cin >> y;

			cout << "\n Resultado = " << Porcentaje(x,y);
			break;
		case 9:
			cout << "\nIngrese los numeros x\n";
			cin >> x;
			cout << "\n Resultado = " << inv(x);
			break;
		}
	}
}
//suma
double plusr(double x, double y) {
	return x + y;
}
//resta
double min(double x, double y) {
	return x - y;
}
// multiplicacion
double mult(double x, double y) {
	return x * y;
}
//division
double div(double x, double y) {
	return x/y;
}
// sacar la raiz cuadrada a x
double rsqrt(double x) {
	return sqrt(x);
}
// elevar x al cuadrado
double sqr(double x) {
	return pow(x, 2);
}
// dividir 1/x
double ldivx(double x) {
	return (1 / x);
}
double Porcentaje(double n1,double n) {
	// despues de estar probando la calculadora al parece lo que hace es
	// dividir al numero entre 20, he probado con bastantes numeros
	double t = n1 / 10;
	return (n * (t/10));
}
//cambiar el signo del numero
double inv(double x) {
	return -(x);
}


