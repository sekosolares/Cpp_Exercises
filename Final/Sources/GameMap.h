#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"
#include <iostream>

using namespace std;

class GameMap {
	public:
		GameMap() {
			PlayerCell = NULL;
		}

		MapCell* PlayerCell;
		MapCell cells[15][10];

		void Draw() {
			for (int i = 0; i < 15; ++i) {
				for (int j = 0; j < 10; ++j) {
					cout << cells[i][j].id;
				}
				cout << endl;
			}
		}

		// Funcion que obtiene coordenadas de Player y actualiza el mapa.
		void SetPlayerCell(int PlayerX, int PlayerY) {
			//cout << "Las coordenadas del jugador estan en: " << PlayerX << ", " << PlayerY << endl;
			if (PlayerCell != NULL) {
				PlayerCell->id = 0;
			}
			PlayerCell = &cells[PlayerY][PlayerX];
			PlayerCell->id = 1;
		}
	protected:

	private:

};

#endif // GAMEMAP_H
