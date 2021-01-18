#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"
#include <iostream>
#include <fstream>

using namespace std;

class GameMap {
	public:
		GameMap() {
			PlayerCell = NULL;
			LoadMapFromFile();
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
			PlayerCell->id = 'A';
		}
	protected:
		void LoadMapFromFile() {
			string line;
			int row = 0;
			ifstream MyFile("Map.txt");

			if (MyFile.is_open()) {
				while(getline(MyFile, line)) {
					for (int i = 0; i < line.length(); ++i) {
						if (line[i] == '0')
							cells[row][i].id = 0;
						else
							cells[row][i].id = line[i];
					}
					++row;
				}
			} else {
				cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!" << endl;
			}
		}
	private:

};

#endif // GAMEMAP_H
