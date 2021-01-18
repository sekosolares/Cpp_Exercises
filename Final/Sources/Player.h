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
					--y;
//					cout << "Player Up" << endl;
					break;
				case 's':
					++y;
//					cout << "Player Down" << endl;
					break;
				case 'a':
					--x;
//					cout << "Player Left" << endl;
					break;
				case 'd':
					++x;
//					cout << "Player Right" << endl;
					break;
			}
//			cout << "Player at coord: " << x << ", " << y << endl;
		}

		int GetX() {
			return x;
		}
		int GetY() {
			return y;
		}
	protected:
		int x, y;
	private:
};

#endif // PLAYER_H
