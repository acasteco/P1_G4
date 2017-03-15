#include <ostream>
#include "Map.hh"

int main() 
{
	Dificultad d = Dificultad::EASY;
	Map mapa(d);
	mapa.fill('.');
	mapa.printMap();
}