#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char buffer = 'I';
	string autor = " -- Seko";

	cout << "Era una noche oscura. Más oscura de lo normal, la luna a penas brillaba y las estrellas ni siquiera se asomaron. En ese momento escuchas un..." << endl;
	cout << "('p') panda." << endl;
	cout << "('m') mono" << endl;
	cout << "('h') hombre" << endl;
	cout << "Ingresa el caracter de tu seleccion $ ";
	cin >> buffer;

	switch(buffer) {
		case 'p':
		case 'P':
			cout << "...escuchas un panda de goma que te persigue por todo el bosque hasta que llegas a un acantilado por el cual caes y mueres.\n\t\t.GAME OVER." << endl;
			cout << "\t\t\t\t\t" << autor << endl;
			break;
		case 'm':
		case 'M':
			cout << "...escuchas un monosaurio rex que buscaba su banana. Cuando te observa, le pareces muy apetitoso y te intenta morder. Escapas y te escondes en un baño, pero te percatas que es el de pingüinos y no el de personas. Al verte en tal bochorno, el monosaurio rex se ríe tanto que te deja en paz solo para ser golpeado a muerte por los pingüinos molestos porque entraste en su baño.\n\t\t.GAME OVER." << endl;
			cout << "\t\t\t\t\t" << autor << endl;
			break;
		case 'h':
		case 'H':
			cout << "...escuchas un hombre gritando: 'Arriba, amigos! Esto a penas comienza!'; Luego comienza a bailar con un gran estereo en el hombro. Te saca a bailar, a lo que tú accedes. Bailan y bailan al compás de la música, mientras se elevan en el aire hasta que llegan a la Luna.\n\t\t.MISION CUMPLIDA." << endl;
			cout << "\t\t\t\t\t" << autor << endl;
			break;
		default:
			cout << "...escuchas un " << buffer << "heisllpuje el cual te dice que intentaste usar un caracter no válido y te pega en la cara!\n\t\t.GAME OVER." << endl;
			cout << "\t\t\t\t\t" << autor << endl;
	}

	return 0;
}
