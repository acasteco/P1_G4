/*
Juego estilo Dwarf Fortress / Clash Royal de 2 jugadores.
OBJETIVO: acabar con todos los jugadores del enemigo

REGLAS:
-El mapa es una matriz de 36x74 chars (0 ≤ x < 74, 0 ≤ y < 36)
-Cada char puede ser un tipo de terreno: montaña(X), agua(O), bosque(:), tierra(.)
-Cada jugador tiene 6 entios(con 10 puntos de vida) i cada entio tiene un caracter especial (A,B,C,D,E,F)J1/(1,2,3,4,5,6)J2
-Cada jugador puede hacer 10 acciones en un turno (mover un entio aliado, atacar a un entio enemigo, controlar a otro entio(si, gasta un punto)
-En cada turno el entio menos fatigado juega primero (fatiga = turnos jugados + jugadas de ese turno)

-Los entios aliados se mueven con WASD, i el jugador puede deshacer un movimiento pulsando la tecla Z i opcionalmente rehacer-lo pulsando X
-Cuando el jugador canvia de entio se eliminan todos los movimientos guardados

-para atacar a un enemigo, se deve pulsar "SPACE" e indicar el arma y la posicion a la que atacar (arriba, abajo, izquierda o derecha)
-Cada entio posee 2 armas (ESPADA, arco + 10 FLECHAS) la espada mata instantaniamente a un enemigo que este alrededor (tiene 10 de daño)
y las flechas tienen un alcance de minimo 3 i maximo 10 casillas (segun la distancia tienen menos daño distancia 3 = daño 8
distancia 10= daño 1)
-Si un entio se queda sin flechas, solo puede usar la espada.
-Las flechas atraviesan todo tipo de terreno excepto la montaña.
-Para cambiar de entio se pulsa la tecla "Enter", lo cual procesa la fatiga del entio actual i salta al siguiente entio menos fatigado

al consumir las 10 acciones del turno debe pulsarse enter para dar paso al siguiente jugador

*/
#include "Map.hh"

int main() {
	Map map;
	map.printMap();
	return 0;
}