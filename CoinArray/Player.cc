#include "Player.hh"

Player::Player(Map & m) :
	map(m)
{
	int aux[2];
	bool posicioTrobada = false;
	while (!posicioTrobada) {
		aux[0] = rand() % map.getm_x();
		aux[1] = rand() % map.getm_y();

		if (map.getValueInPosition(aux[0], aux[1]) == '.')
			posicioTrobada = true;
	}
	playerPosition[0] = aux[0];
	playerPosition[1] = aux[1];
	_Destroy(aux);
}


void Player::MovePlayer(Input::Key k)
{

}

