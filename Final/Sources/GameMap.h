#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"
#include <iostream>

using namespace std;

class GameMap {
	public:
		GameMap() {

		}

		MapCell cells[15][10];

		void Draw() {
			for (int i = 0; i < 15; ++i) {
				for (int j = 0; j < 10; ++j) {
					cout << 0;
				}
				cout << endl;
			}
		}

	protected:

	private:

};

#endif // GAMEMAP_H
