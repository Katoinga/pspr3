#include <iostream>
#include <cmath>
using namespace std;


int f(int n);
bool ifIterativo(int* indexs, int n, int ref);
void permutacion(int datos[], int n, int* index = NULL, int i = 0);

int main() {
	int n;
	cout << "Ingrese n:\n";
	cin >> n;
	//creamos un arreglo dinamico
	// rellenamos el arreglo segun n
	int *items= new int[n];
;	for (int i = 1;i <= n;i++) {
		items[i - 1] = i;
	}
	//can = cantidad de permutaciones
	int can;
	can = f(n);
	cout << "\n Permutaciones son: " << can;
	//se llama a la funcion
	permutacion(items, n);

	return 0;
}
// Obtiene la numero de elementos
int f(int n) {
	int resp = 1;
	for (int x = 1; x <= n; x++) {
		resp = resp * x;
	}
	return resp;
}
// retorna un booleano
bool ifIterativo(int* indexs, int n, int ref) {
	bool r, tmp;
	if (n == 1) {
		r = indexs[n - 1] != ref;
	}
	else {
		tmp = ifIterativo(indexs, n - 1, ref);
		r = indexs[n - 1] != ref && tmp;
	}
	return r;
}
// Funcion de permutacion, recursiva moviendo el indice y llenando al arreglo
// cada recurison hasta llegar al final-1 ya que se llama una vez mas
// dedspues imprime toda la matriz y los datos.
void permutacion(int datos[], int n, int* index , int i) {
	if (index == NULL) {
		index = new int[n];
	}
	if (i < n) {
		for (int x = 0; x < n; x++) {
			index[i] = x;
			if (i >= 1) {
				if (ifIterativo(index, i, x)) {
					permutacion(datos, n, index, i + 1);
				}
			}
			else {
				permutacion(datos, n, index, i + 1);
			}
		}
	}
	else {
		cout << "\n\t";
		for (int j = 0; j < n; j++) {
			cout << datos[index[j]];
		}
	}
}
