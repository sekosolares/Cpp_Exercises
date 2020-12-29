#include <iostream>

using namespace std;

void DrawMap(int HeroPos, char GameMap[5]) {
	for (int i = 0; i < 5; ++i) {
		if (i != HeroPos) {
			cout << GameMap[i];
		} else {
			cout << 'H';
		}
	}
}

int main() {
	int HeroPos = 1;
	bool isGameOver = false;
	char Input = ' ';
	char GameMap[5] = {'1','1','1','1','1'};

	DrawMap(HeroPos, GameMap);

	while (!isGameOver) {
		cin >> Input;

		if (Input == 'd' || Input == 'D') {
			++HeroPos;
		} else if (Input == 'a' || Input == 'A') {
			--HeroPos;
		} else if (Input == 'p' || Input == 'P') {
			isGameOver = true;
		}

		DrawMap(HeroPos, GameMap);
	}

	cout << '\n';

	return 0;
}
