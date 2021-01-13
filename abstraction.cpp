#include <iostream>

using namespace std;

class Human {
	public:
		Human(int SpawnAge) {
			Age = SpawnAge;
		}

		void Think() {
			cout << GetThoughtMessage() << endl;
		}

		int Age;
	private:
		int SocialLevel;
		int Intelligence;
		int Luck;

		string GetThoughtMessage() {
			if (SocialLevel + Luck > 100) {
				return "I am having happy thoughts! :D";
			} else if (Luck > Intelligence) {
				return "I am lucky!";
			} else if (Age > 18) {
				return "I am a baby!";
			} else {
				return "I'm thinking about nothing!";
			}
		}
};

int main() {
	Human Bob(19);

	Bob.Think();

	return 0;
}
