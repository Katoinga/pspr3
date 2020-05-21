
#include <iostream>
using namespace std;

//declaracion de funciones
int AreaCuadrilateros(double lado_a , double lado_b);
int AreaTriangulos(double lado_a, double altura_b);

//programa principal
int main(void)
{
	double a, b;
	int figura;
	cout << "Que figura quiere analizar\nCuadrado (1), Rectangulo(2), Triangulo(3):\n";
	cin >> figura;

	switch (figura) {
	case 1:
		cout << "Introduzca el lado\n";
		cin >> a;
		if (!AreaCuadrilateros(a, a))//llamada
			cout << "ojo el area es negativa\n";
		else
			cout << "el area es: "<<AreaCuadrilateros(a,a);
		break;
	case 2:
		cout << "Introduzca el lado a y b\n";
		cin >> a;
		cin >> b;
		if (!AreaCuadrilateros(a, b))//llamada
			cout << "ojo el area es negativa\n";
		else
			cout << "el area es: " << AreaCuadrilateros(a, b);
		break;
	case 3:
		cout << "Introduzca la base y la altura\n";
		cin >> a;
		cin >> b;
		if (!AreaTriangulos(a, b))//llamada
			cout << "ojo el area es negativa\n";
		else
			cout << "el area es: " << AreaTriangulos(a, b);
		break;

	default: 
		cout << "figura equivocada\n";
		break;
	}
	return 0;
}


int AreaCuadrilateros(double lado_a, double lado_b) {
	return lado_a * lado_b;
}
int AreaTriangulos(double lado_a, double altura_b) {
	return (lado_a * altura_b) / 2;
}
