#pragma once
#include "Map.hh"
#include "CoinManager.hh"
#include <conio.h>

namespace Input 
{
	enum class Key // represents each key that the player can use
	{
		NONE, W, A, S, D, ENTER, ESC
	};
	static Key getKey() // returns the key that has been pressed
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			case 87: case 119:
				return Key::W; // w and W
			case 65: case 97:
				return Key::A; // a and A
			case 83: case 115:
				return Key::S; // s and S
			case 68: case 100:
				return Key::D; // d and D
			case 13:
				return Key::ENTER; // carriage return
			case 27:
				return Key::ESC; // escape
			}
		}
		return Key::NONE;
	}
};
	


class Player
{
public:
	Player(Map &m, CoinManager c);
	void MovePlayer();


private:
	
	int playerPosition[2];
	int puntuation;
	Map &map;
	CoinManager &coin;
};