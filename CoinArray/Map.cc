#include "Map.hh"

Map::Map(Dificultad d) 
{
	switch (d) {
	case Dificultad::EASY:
		m_x = 5;
		m_y = 10;
		break;
	case Dificultad::MEDIUM:
		m_x = 10;
		m_y = 20;
		break;
	case Dificultad::HARD:
		m_x = 15;
		m_y = 30;
		break;
	default:
		break;

	}
	dif = d;
	m_map = new char*[m_x];
	for (int i = 0; i < m_x; i++)
		m_map[i] = new char[m_y];

	initialize('.');
}

Map::~Map()
{
	delete(m_map);
}

char * Map::begin(void) const
{
	return *m_map; // Realment no necessitem aquesta funcio 
}

/*char * Map::end(void) const
{
	return *m_map + (m_x*m_y); //Esta malament i realment no cal
}*/

void Map::modify(int fila, int columna, char value)
{
	m_map[fila][columna] = value;
}

void Map::initialize(char value)
{
	for (int i = 0; i < m_x; i++)
		for (int j = 0; j<m_y; j++)
			m_map[i][j] = value;
}

void Map::printMap(void)
{
	for (int i = 0; i < m_x; i++) {
		for (int j = 0; j < m_y; j++)
			cout << m_map[i][j];
		cout << endl;
	}
		

}

char Map::getValueInPosition(int x, int y)
{
	return m_map[x][y];
}

int Map::getm_x()
{
	return m_x;
}

int Map::getm_y()
{
	return m_y;
}

Dificultad Map::getDificultad()
{
	return dif;
}
