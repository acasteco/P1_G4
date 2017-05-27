#include "Map.hh"

Map::Map()
{
	map = new char*[y];
	for (int i = 0; i < y; i++)
		map[i] = new char[x];
	//now that we have created the space memory for the map, let's upload to the program the file that contains the map values
	std::ifstream defaultMap("default.cfg");		// we open the file
	std::string line;								//variable where we charge the line and we split every character and put in his own space
	int row = 0;									//variable to count the row
	while (!defaultMap.eof()) {						//while it's not the end of file, algorism to charge the line (O(n^2))	
		getline(defaultMap, line);
		for (int i = 0; i < line.size(); i++) {
			map[row][i] = line.at(i);
		}
		row++;
	}
}

void Map::printMap()
{
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (map[i][j] == 'X')
				enti::cout << enti::Color::BROWN << map[i][j] << enti::endl;
			if (map[i][j] == 'O')
				enti::cout << enti::Color::LIGHTCYAN << map[i][j] << enti::endl;
			if (map[i][j] == ':')
				enti::cout << enti::Color::GREEN << map[i][j] << enti::endl;
			if (map[i][j] == '.')
				enti::cout << enti::Color::YELLOW << map[i][j] << enti::endl;
		}
	}

}
