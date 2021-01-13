#include <iostream>

using namespace std;

class Cat {
	public:
		string Name;
	Cat() {
		Name = "Kuro";
	}
	Cat(string pName) {
		Name = pName;
	}
	void Meow() {
		cout << Name << " says: Meow, meow!" << endl;
	}
};

int main() {
	Cat MyKitty;
	Cat MyOtherKitty("Tina");

	cout << MyKitty.Name << endl;
	cout << MyOtherKitty.Name << endl;

	MyKitty.Meow();

	for (int i = 0; i < 3; ++i) {
		MyOtherKitty.Meow();
	}

	return 0;
}
