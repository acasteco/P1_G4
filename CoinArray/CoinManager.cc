#include "CoinManager.hh"

CoinManager::CoinManager(Map &m):
	map(m)
{
	//map.modify(0, 0, '$');
	//map.modify(5, 5, '$');
	GenerarMonedas();
	//posicionarMonedas();
}

CoinManager::~CoinManager()
{
}

void CoinManager::posicionarMonedas()
{
	int position[2];
	int aux = cantidadMonedas;
	while (aux != 0) 
	{
		position[0] = rand() % map.getm_x();
		position[1] = rand() % map.getm_y();

		if (map.getValueInPosition(position[0], position[1]) == '.') 
		{
			map.modify(position[0], position[1], '$');
			aux--;
		}
	}
}

void CoinManager::eliminarMoneda(int x, int y)
{
	map.modify(x, y, '.');
}

void CoinManager::GenerarMonedas()
{
	cantidadMonedas = 5;//(map.getm_x()*map.getm_y()) * (((rand() % 11) + 3) / 100); //dimension of map * random% between 3 and 13  
	cout << cantidadMonedas << endl;
}
