#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream MyFile("GameData.txt");

	if ( MyFile.is_open() ) {
		MyFile << "Hola, Amigo!" << endl;
		for (int i = 0; i < 10; ++i) {
			MyFile << i << endl;
		}
	}

	MyFile.close();

	return 0;
}
