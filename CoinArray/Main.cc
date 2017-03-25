#include <ostream>
#include <time.h>
#include "Map.hh"
#include "CoinManager.hh"
#include "Player.hh"

const int COINSTOWIN = 60;

int main() 
{
	srand(static_cast<unsigned>(time(nullptr)));
	int opcionUsuario;
	Dificultad d;

	cout << "////////////////////////////////////////" << endl
		 << "Coin Race" << endl
		 << "////////////////////////////////////////" << endl
		 << "Controls: USE WASD to move the player" 
		 << endl << endl << "Choose a difficulty:(0-2)" << endl 
		 << "0 - EASY" << endl 
		 << "1 - MEDIUM" << endl 
		 << "2 - HARD" << endl;
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

	cout << "OBJECTIVE: catch " << COINSTOWIN << " coins as fast as you can" << endl;
	system("pause");
	clock_t start = clock();

	system("cls");
	Map map(d);
	CoinManager coin(map);
	Player player(map, coin);
	
	cout << "time: " << (clock() - start) / 1000 << "		score: " << player.getScore() << "/" << COINSTOWIN << endl;
	map.printMap();
	
	while ((player.getScore() <= COINSTOWIN) && !player.PlayerQuitGame()) {
		if (_kbhit()) {
			player.MovePlayer();		//INPUT
			system("cls");				//Update
			cout << "time: " << (clock() - start) / 1000 << "		score: " << player.getScore() << "/" << COINSTOWIN << endl;
			map.printMap();			//Draw
			if (coin.noMoney()) {
				coin.GenerarMonedas();
				coin.posicionarMonedas();
			}
		}
	}
	system("cls");

	if (!player.PlayerQuitGame())
	{
		cout << "GAME OVER" << endl
			<< "final time = " << (clock() - start) / 1000 << endl;
	}
	else if(player.PlayerQuitGame())
	{
		cout << "Why did you leave?" << endl;
		system("pause");
		cout << "It's okey, I'm not gonna judge you..." << endl;
		system("pause");
		cout << "I'm just a program" << endl;
		system("pause");
		cout << "*cough* Pussy *cough*" << endl;
	}
		
	system("pause");

	return 0;
}