#include <iostream>

using namespace std;

int main() {
	int Valor1 = 23;
	int Valor2 = 55;
	int * Pointer;


	cout << "El valor1 tiene el valor " << Valor1 << endl;
	cout << "El Valor2 tiene el valor " << Valor2 << endl;
	cout << "El apuntador apunta hacia " << Pointer << endl;
	cout << "El apuntador tiene el valor " << *Pointer << endl;

	cout << "\n---------" << endl;

	cout << "La direccion de memoria de Valor1 es " << &Valor1 << endl;
	cout << "La direccion de memoria de Valor2 es " << &Valor2 << endl;
	cout <<"La direccion de memoria de Pointer es " << &Pointer << endl;

	cout << "\n---------" << endl;

	Pointer = &Valor1;
	*Pointer = *Pointer + Valor1;
	cout << "Ahora el apuntador tiene el valor " << *Pointer << " y sigue apuntanto hacia " << Pointer << endl;
	cout << "El Valor1 vale: " << Valor1 << endl;

	return 0;
}
