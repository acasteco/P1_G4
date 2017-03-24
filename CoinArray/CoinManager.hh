#pragma once
#include "Map.hh"

class CoinManager
{
public:
	CoinManager(Map &m);
	~CoinManager();
	void posicionarMonedas();
	void eliminarMoneda();
	void GenerarMonedas();
	bool noMoney();

private:
	Map &map;
	int cantidadMonedas;
};
