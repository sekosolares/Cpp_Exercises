#include <iostream>
#include <fstream>

using namespace std;

int main() {
	/*
	ofstream MyFile("GameData.txt");
	string PlayerName = "";

	if ( MyFile.is_open() ) {
		MyFile << "Hola, Amigo!" << endl;
		MyFile << "Mi nombre es: " << endl;
		cout << "Introduce el nombre de tu heroe: ";
		cin >> PlayerName;
		MyFile << PlayerName;
	}

	MyFile.close();
	*/
	ifstream  MyFileRead("GameData.txt");
	string line, NombreHeroe = "";
	int Renglon = 0;

	if ( MyFileRead.is_open() ) {
		while( getline(MyFileRead, line) ) {
			if ( Renglon == 2 )
				NombreHeroe = line;
			++Renglon;
		}
	} else {
		cout << "No se logro abrir el archivo! :(" << endl;
	}

	cout << "Bienvenida/o a tu aventura, " << NombreHeroe << "!" << endl;
	cout << "Te estabamos esperando!" << endl;

	return 0;
}
