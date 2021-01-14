#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main() {
	bool isGameOver = false;
	GameMap Map;
	Player Hero;

	cout << "Inica el juego!!\n" << endl;

	while (!isGameOver) {
		Hero.CallInput();
		Map.Draw();
	}

	return 0;
}
