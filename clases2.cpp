#include <iostream>

using namespace std;

class Dog {
	public:
		Dog(string Name, string BarkType) {
			mName = Name;
			mBark = BarkType;
		}

		string GetName() {
			return mName;
		}

		void SetName(string Name) {
			mName = Name;
		}

		void Bark() {
			cout << mName << " says: " << mBark << endl;
		}
	private:
		string mName;
		string mBark;
};

int main() {
	Dog PerroUno("Woofers", "Berk");
	Dog PerroDos("Rock", "Woourgh!");

	cout << PerroUno.GetName() << endl;
	cout << PerroDos.GetName() << endl;

	PerroUno.SetName("Alberto");
	cout << PerroUno.GetName() << endl;

	PerroUno.Bark();
	PerroDos.Bark();

	return 0;
}
