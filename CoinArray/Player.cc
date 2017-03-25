#include "Player.hh"

Player::Player(Map & m, CoinManager & c) :
	map(m),
	coin(c)
{
	score = 0;
	PlayerLeave = false;
	int aux[2];
	bool posicioTrobada = false;
	while (!posicioTrobada) 
	{
		aux[0] = rand() % map.getm_x();
		aux[1] = rand() % map.getm_y();

		if (map.getValueInPosition(aux[0], aux[1]) == '.') 
		{
			map.modify(aux[0], aux[1], '@');
			posicioTrobada = true;
		}
			
	}
	playerPosition[0] = aux[0];
	playerPosition[1] = aux[1];
	_Destroy(aux);
}


void Player::MovePlayer()
{
	Input::Key k = Input::getKey();
	map.modify(playerPosition[0], playerPosition[1], '.');
	switch (k) {
	case Input::Key::W:
		if ((--playerPosition[0]) < 0)
			playerPosition[0]++;
		break;
	case Input::Key::S:
		if ((++playerPosition[0]) >= map.getm_x())
			playerPosition[0]--;
		break;
	case Input::Key::A:
		if ((--playerPosition[1]) < 0)
			playerPosition[1]++;
		break;
	case Input::Key::D:
		if ((++playerPosition[1]) >= map.getm_y())
			playerPosition[1]--;
		break;
	case Input::Key::ESC:
		PlayerLeave = true;
		break;
	case Input::Key::ENTER:
		//don't know watcha do
		break;
	default:
		break;

	}
	if (map.getValueInPosition(playerPosition[0], playerPosition[1]) == '$') {
		score++;
		coin.eliminarMoneda();
	}
	map.modify(playerPosition[0], playerPosition[1], '@');

}

int Player::getScore()
{
	return score;
}

bool Player::PlayerQuitGame()
{
	return PlayerLeave;
}


//int Player::moveMenuSelector()
//{
//	Input::Key k = Input::getKey();
//	switch (k) {
//	case Input::Key::W:
//		if (--menu.selector < 0)
//			menu.selector++;
//	case Input::Key::S:
//		if (++menu.selector > 2)
//			menu.selector--;
//	case Input::Key::ENTER:
//		menu.setDificultadEscogida(true);
//	}
//}