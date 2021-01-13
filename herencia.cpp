#include <iostream>

using namespace std;

class Mage {
	public:
		int mana, hp, power;
		Mage(int pMana, int pHP, int pPower) {
			mana = pMana;
			hp = pHP;
			power = pPower;
		}

		void Spell() {
			cout << "Fireworks at " << power << " of power!" << endl;
		}
};

class IceMage : public Mage {
	public:
		IceMage(int pMana, int pHP, int pPower):Mage(pMana, pHP, pPower) {
				mana = pMana;
				hp = pHP;
				power = pPower + 10;
		}
};

int main() {
	Mage Gandalf(100, 10, 20);
	IceMage Fearmon(100, 10, 20);

	Gandalf.Spell();
	Fearmon.Spell();

	return 0;
}
