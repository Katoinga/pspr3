
#include <iostream>
using namespace std;

void itsOdd(int x1[10]);
void numPerfect(int n);
int Perfect(int n);
int invertir(int n);
int main()
{
	//op operacion que se va  ahacer
	// np numero perfecto
	int op = 0,np,inver;
	//Menu de opciones
	cout<<"Seleccione la opcion:\n ";
	cout << "(1)Saber si 10 numeros son pares o impares\n";
	cout << "(2)Primeros 100 numeros perfectos\n";
	cout << "(3)Dar la vuelta al numero\n";
	cin >> op;
	switch (op) {
	case 1:
		cout << "Ingresar 10 numeros\n";
		int x[10];
		//relleno el arreglo con 10 elementos del usuario
		for (int i = 0;i < sizeof(x)/sizeof(*x);i++) {
			cout <<(i+1)<< ". Numero: ";
			cin >> x[i];
		}
		itsOdd(x);
		break;
	case 2:
		cout << "\nIntentando en los primeros 100 numeros\n";
		numPerfect(100);
		break;
	case 3:
		cout << "\nIngrese un numero de 4 cifras\n";
		cin >> inver;
		int invertido= invertir(inver);
		cout << "El numero invertido es: " << invertido;
		break;
	}
}

void itsOdd(int x1[10]) {
	// simplemente recorro todo el arreglo y si el modulo de x % 2 es 0
	//se puede decir que el numero es par lo contrario es impar
	for (int i = 0;i < 10;i++) {
		if (x1[i] % 2 == 0) {
			cout << "El numero "<<x1[i]<<" es par\n";
		}
		else
			cout << "El numero " << x1[i] << " es impar\n";
	}
}
void numPerfect(int n) {
	// n, es la cantidad de numeros
	// se recorre en un for, se obtiene si cada numero es uno perfecto
	// llamando al metodo perfect 1 es si 0  esno
	// imprime el numero que es perfecto y despues 
	// imprime cada numero divisor que hizo el numero perfecto
	for (int i = 1;i <= n;i++) {
		int esP = Perfect(i);
		if (esP == 1) {
			cout << "\nEl numero " << i << " es perfecto, la suma:\n";
			for (int divisor = 1; divisor < i; ++divisor)
				if (0 == i % divisor)
					cout << divisor << "\t";
		}
	}
}
// se realiza la comparacion si es un numero perfecto o no
// recorre cada entero
int Perfect(int n){
	int suma = 0, factor;
	for (int divisor = 1; divisor < n; ++divisor)
	{
	// obtiene el divisor y suma cada factor
		if (0 == n % divisor)
		{     
			factor = divisor;
			suma += factor;
		}    
	}
	// si la suma da el mismo numero detecta que si es un numero perfecto
	if (suma == n)
		return 1;
	else
		return 0;
}
int invertir(int n) {
	//como son cuatro caracteres
	int invertido, d1, d2, d3, r1,r2,r3;
	//voy diviendo entre 10 hasta llegar a la unidad
	// obtengo cada digito con el modulo hecho a cada division
	// despues reconstruyo el numero multiplicando
	// el ultimo * 1000, el penultimo *100, *10 y *1
	d1 = n / 10;
	d2 = d1 / 10;
	d3 = d2 / 10;
	r1 = n % 10;
	r2 = d1 % 10;
	r3 = d2 % 10;
	invertido = r1 * 1000 + r2 * 100 + r3 * 10 + d3*1;
	return invertido;
}
