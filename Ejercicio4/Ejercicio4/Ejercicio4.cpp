
#include <iostream>
#include "Craps.h"
#include<ctime>

using namespace std;
using std::time;

int main()
{
	Craps juego1;
	string estado = "";
	int punto;//punto si no se gana o pierde en el primer	turno
	srand(time(0));
	int sumaDados = juego1.tirarDados();

	//numeroaleatorio = (1 + rand() % 100);

	//determinando estado del juego

	switch (sumaDados){

	case 7://gana con 7 en el primer turno
	case 11://gana con	11 en el primer turno
		estado = "gano";
		break;

	case 2://pierde con 2 en el primer turno
	case 3://pierde con 3 en el primer turno
	case 12://pierde con 12 en el primer turno
		estado = "perdio";
		break;

	default://no gano ni perdio por lo que recuerda el numero
		estado = "continuar";
		punto = sumaDados;//recuerda el punto
		cout << "El punto o su tirada es " << punto << endl;
		break;//opcional al	final de switch

	}
	//mientras el juego no este completo

		while (estado == "continuar")//no gano ni perdio
		{
			sumaDados = juego1.tirarDados();//tira los dados de nuevo
				//determina	el estado de juego
				if (sumaDados == punto)
				{
					estado = "gano";
				}
				else
					if (sumaDados == 7)//pierde al tirar 7 antes de punto
					{
						estado = "perdio";
					}


		}

  //muestra mensaje que gano o perdio
	if (estado == "gano")
		cout << "El jugador gana, la casa pierde :(" << endl;
	
	else
		cout << "El jugadorpierde, la casa gana :)"<<endl;

	//tirarDados calcula la suma y muestra los resultados
	return 0;
}

