#pragma once
#include <iostream>
#include <string>


using namespace std;


class Menu 
{
public:
	Menu();
	void printMenu();						//prints the dificulty menu
	void moveMenu();						//moves the menu selector
	bool dificultadEscogida();				//returns true is the player choosed a dificulty
	void setDificultadEscogida(bool d);		//if the player presses enter this functions changes dif wich means that a dificulty has been selected
	int selector;							//saves the dificulty


private:
	char option[3];							//array to move the selector
	bool dif = false;						
};
