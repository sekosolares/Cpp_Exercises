#include <iostream>

using namespace std;

class Mage {
	public:
		Mage(int pPower, int pHP) {
			Power = pPower;
			hp = pHP;
		}

		int Damage() {
			return Power;
		}

		void GetDamage(int Value) {
			hp -= Value;

			cout << "Al mago le queda " << hp << endl;
		}

		void PrintHP() {
			cout << "HP: " << hp << endl;
		}
	protected:
		int Power, hp;
};

class IceMage : public Mage {
	public:
		IceMage(int pPower, int pHP) : Mage(pPower, pHP) {
			Power = pPower + 1;
			hp = pHP;
		}
};

class FireMage : public Mage {
	public:
		FireMage(int pPower, int pHP) : Mage(pPower, pHP) {
			Power = pPower;
			hp = pHP + 10;
		}
};

int main() {
	Mage * CurrentMage;

	FireMage Gandalf(10, 10);
	IceMage Dumbledore(10, 10);

	CurrentMage = &Gandalf;
	CurrentMage->GetDamage(1);

	CurrentMage = &Dumbledore;
	CurrentMage->GetDamage(5);

	Gandalf.PrintHP();
	Dumbledore.PrintHP();

	return 0;
}
