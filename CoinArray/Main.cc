#include <ostream>
#include <time.h>
#include "Map.hh"

int main() 
{
	srand(static_cast<unsigned>(time(nullptr)));
	int opcionUsuario;

	Dificultad d;
	cout << "////////////////////////////////////////" << endl << "Coin Race" << endl << "//////////////////////////////////////" << endl
		<< "Controls: USE WASD to move the player" << endl << endl << "Choose a difficulty:" << endl << "1 - EASY" << endl << "2 - MEDIUM" << endl << "3 - HARD" << endl;
	cin >> opcionUsuario;

	bool dificultadEscogida = false;
	while (!dificultadEscogida)
	{
		switch (opcionUsuario)
		{
		case '1': 
			d = Dificultad::EASY;
			dificultadEscogida = true;
			break;
		case '2': 
			d = Dificultad::MEDIUM;
			dificultadEscogida = true;
			break;
		case '3': 
			d = Dificultad::HARD;
			dificultadEscogida = true;
			break;
		default: cout << "Dificultad no encontrada, indique un numero entre 1 i 3:" << endl;
			cin >> opcionUsuario;
			break;
		}
	}
	




	Map mapa(d);
	mapa.printMap();

	return 0;
}