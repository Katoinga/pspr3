#include<iostream>
#include<string>
#include<list>

using namespace std;

void print(list<int> l);
void subset(int arr[], int size, int left, int index, list<int>& l);

int main() {
	int n;
	cout << "Ingrese n: ";
	cin >> n;
	// se crea un arreglo con los numero del 1 al n
	int* items = new int[n];
	for (int i = 1;i <= n;i++) {
		items[i - 1] = i;
	}
	// se crea un arreglo para hacer todo los grupos de conjuntos posibles
	// se llama al metodo teniendo en cuenta las especificaciones de la funcion
	for (int i = 1;i <= n;i++) {
		list<int> lt;
		subset(items, n, i, 0, lt);
	}
	return 0;
}
// arr[] arreglo de numeros del 1 al n
// tamano del arreglo (n)
// left seria la cantidad de elementos que tiene el subconjunto
// index se empieza con 0 , sirve para recorrer todo de manera recursiva
// lista quee contendra todos los subconjuntos
/*
	El funcionamiento es simple ya que es recursivo, se comprueba si es que
	es 0 que enrealidad seria la cantidad de elementos del subconjuto, y se imprime
	lo obtenido en la lista y retorna, en caso contrario, recorre todo el arreglo
	con un for y mediante listas y el uso de push y pop
	back se añade el elemento al final y se borra el ultio elemento de la
	cola la cual hace que se repitan de ingresar algunos elementos que se ingresaran
	posteriormente.
*/
void subset(int arr[], int size, int left, int index, list<int>& l) {
	if (left == 0) {
		print(l);
		return;
	}
	for (int i = index; i < size;i++) {
		l.push_back(arr[i]);
		subset(arr, size, left - 1, i + 1, l);
		l.pop_back();
	}

}
//metodo para imprimir la lista sacado de stack overflow
void print(list<int> l) {
	for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
		cout << " " << *it;
	cout << endl;
}