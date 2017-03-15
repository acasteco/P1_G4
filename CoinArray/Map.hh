#pragma once
#include <iostream>
#include <string>
using namespace std;

enum class Dificultad { EASY, MEDIUM, HARD, MAX };

class Map
{
public:

	Map(Dificultad &d);
	char *begin(void) const;
	char *end(void) const;
	void modify(int fila, int columna, char value);
	void fill(char value);
	void printMap(void);

private:

	static const size_t DEFAULT_X{ 5 }; //size_t actua como los int pero se usa para definir tamaños
	static const size_t DEFAULT_Y{ 10 };

	char **m_map;
	size_t m_x;
	size_t m_y;
	//size_t m_dimension;

};