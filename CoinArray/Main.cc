#include <ostream>
#include <time.h>
#include "Map.hh"
#include "CoinManager.hh"
#include "Player.hh"

int main() 
{
	srand(static_cast<unsigned>(time(nullptr)));
	int opcionUsuario;
	Dificultad d;

	
	/*do {
		cout << "////////////////////////////////////////" << endl << "Coin Race" << endl << "//////////////////////////////////////" << endl
			<< "Controls: USE WASD to move the player" << endl << endl << "Choose a difficulty:" << endl << "1 - EASY" << endl << "2 - MEDIUM" << endl << "3 - HARD" << endl;
		cout << static_cast<int>(Dificultad::MAX);
		cin >> opcionUsuario;
		if ((opcionUsuario < static_cast<int>(Dificultad::EASY) && opcionUsuario >= static_cast<int>(Dificultad::MAX))) 
		{
			d = static_cast<Dificultad>(opcionUsuario);
			dificultadEscogida = true;
		}
			
	} while (!dificultadEscogida);*/

	cout << "////////////////////////////////////////" << endl << "Coin Race" << endl << "//////////////////////////////////////" << endl
		<< "Controls: USE WASD to move the player" << endl << endl << "Choose a difficulty:" << endl << "0 - EASY" << endl << "1 - MEDIUM" << endl << "2 - HARD" << endl;
	cin >> opcionUsuario;
	

	bool dificultadEscogida = false;
	while (!dificultadEscogida)
	{
		if (opcionUsuario < static_cast<int>(Dificultad::MAX)) {
			d = static_cast<Dificultad>(opcionUsuario);
			dificultadEscogida = true;
		}
		else {
			cout << "Dificultad no encontrada, indique un numero entre 0 i 2:" << endl;
			cin >> opcionUsuario;
		}
	}
	
	Map mapa(d);
	CoinManager coin(mapa);
	Player player(mapa);
	mapa.printMap();

	return 0;
}