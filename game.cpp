#include <iostream>

using namespace std;

void DrawMap(int HeroPosX, int HeroPosY, char GameMap[5][5]) {
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (i != HeroPosY) {
				cout << GameMap[j][i];
			} else {
				if (j != HeroPosX) {
					cout << GameMap[j][i];
				} else {
					cout << 'H';
				}
			}
		}
		cout << endl;
	}
}

int main() {
	int HeroPosX = 1;
	int HeroPosY = 1;
	bool isGameOver = false;
	char Input = ' ';
	char GameMap[5][5] =
	{
		{'1','1','1','1','1'},
		{'1','1','1','1','1'},
		{'1','1','1','1','1'},
		{'1','1','1','1','1'},
		{'1','1','1','1','1'}
	};

	DrawMap(HeroPosX, HeroPosY, GameMap);

	while (!isGameOver) {
		cin >> Input;

		if (Input == 'd' || Input == 'D') {
			++HeroPosX;
		} else if (Input == 'a' || Input == 'A') {
			--HeroPosX;
		} else if (Input == 'w' || Input == 'W') {
			--HeroPosY;
		} else if (Input == 's' || Input == 'S') {
			++HeroPosY;
		} else if (Input == 'p' || Input == 'P') {
			isGameOver = true;
		}

		DrawMap(HeroPosX, HeroPosY, GameMap);
	}

	cout << '\n';

	return 0;
}
