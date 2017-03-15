#include "Map.hh"

Map::Map(Dificultad &d) 
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
		m_x = DEFAULT_X;
		m_y = DEFAULT_Y;
		break;

	}
	m_map = new char*[m_x];
	for (int i = 0; i < m_x; i++)
		m_map[i] = new char[m_y];
}

char * Map::begin(void) const
{
	return *m_map; // IMPORTANTE! Ni puta idea que estamos haciendo XDLOL rawr
}

char * Map::end(void) const
{
	return *m_map + (m_x*m_y); //Preguntar tambien
}

void Map::modify(int fila, int columna, char value)
{
	m_map[fila][columna] = value;
}

void Map::fill(char value)
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
