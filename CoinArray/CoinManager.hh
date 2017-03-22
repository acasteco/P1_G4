#pragma once
#include "Map.hh"

class CoinManager
{
public:
	CoinManager(Map &m);
	~CoinManager();
	void posicionarMonedas();
	void eliminarMoneda(int x, int y);
	void GenerarMonedas();

private:
	Map &map;
	int cantidadMonedas;
};
