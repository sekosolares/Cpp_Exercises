#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main() {
	GameMap Map;
	Player Hero;


	Map.DrawIntro();
	Map.Draw();

	while (!Map.isGameOver) {
		cout << "\nMove using W A S D" << endl;
		Hero.CallInput();
		if(Map.SetPlayerCell(Hero.GetX(), Hero.GetY()))
			Map.Draw();
		else {
			Hero.ResetToSafePosition();
			Map.Draw();
		}
	}

	return 0;
}
