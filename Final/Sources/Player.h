#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

using namespace std;

class Player {
	public:
		Player() {
			//ctor
			x = 1;
			y = 1;
		}

		void CallInput() {
			char UserInput = ' ';
			cin >> UserInput;

			switch(UserInput) {
				case 'w':
					lastY = y;
					--y;
//					cout << "Player Up" << endl;
					break;
				case 's':
					lastY = y;
					++y;
//					cout << "Player Down" << endl;
					break;
				case 'a':
					lastX = x;
					--x;
//					cout << "Player Left" << endl;
					break;
				case 'd':
					lastX = x;
					++x;
//					cout << "Player Right" << endl;
					break;
			}
//			cout << "Player at coord: " << x << ", " << y << endl;
		}

		void ResetToSafePosition() {
			x = lastX;
			y = lastY;
		}

		int GetX() {
			return x;
		}

		int GetY() {
			return y;
		}

		int GetLastY() {
			return lastY;
		}

		int GetLastX() {
			return lastX;
		}
	protected:
		int x, y, lastX, lastY;
	private:
};

#endif // PLAYER_H
