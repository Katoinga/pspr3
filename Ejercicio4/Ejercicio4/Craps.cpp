#include <iostream>
#include "Craps.h"

Craps::Craps() {

}
int Craps::tirarDados() {
	int dado1 =	1 + rand() % 6;//tiro del primer dado
	int dado2 =	1 + rand() % 6;//tiro del segundo dado
	int	suma = dado1 + dado2;//calcula la suma de valores de los dados
	//mostrando	resultado de este tiro
	cout << "El jugador tiro " << dado1 << "+"<<dado2<<" = "<<suma<<"\n";
	return	suma;//devuelve la suma de los dados

}
Craps::~Craps() {

}