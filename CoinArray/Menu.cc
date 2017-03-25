#include "Menu.hh"

Menu::Menu()
{
	option[0] = 'o';
	option[1] = '-';
	option[2] = '-';

	selector = 0;
}

void Menu::printMenu()
{
	cout << "////////////////////////////////////////" << endl
		<< "Coin Race" << endl
		<< "////////////////////////////////////////" << endl
		<< "Controls: USE WASD to move the player"
		<< endl << endl << "Choose a difficulty:(ws - Enter)" << endl
		<< option[0] << "EASY" << endl
		<< option[1] << "MEDIUM" << endl
		<< option[2] << "HARD" << endl;
}

void Menu::moveMenu()
{
	option[0] = '-';
	option[1] = '-';
	option[2] = '-';

	option[selector] = 'o';
}



bool Menu::dificultadEscogida()
{
	return dif;
}

void Menu::setDificultadEscogida(bool d)
{
	dif = d;
}


