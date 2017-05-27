#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Renderer.hh"

class Map
{
public:
	Map();
	~Map();
	void getMap(int line, int column);
	void printMap();

private:
	char **map;
	size_t x = 74;
	size_t y = 36;
};
