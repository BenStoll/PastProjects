#include <iostream>
using namespace std;
class vendingMachine {
		//atributes
		int BCoke, Water, BSprite, StrPT, BrSPT; // StrPT -> strawberry Poptart, BrSPT -> brown sugar Poptart
		float InputedMoney;
		//cost of each item
		float costSprite = 1.50;
		float costWater = 1.00;
		float costCoke = 1.50;
		float costPopT = 0.60;
		int NumCoke = 0, NumWater = 0, NumSprite = 0, NumStrPT = 0, NumBrSPT = 0;
	public:
		//construction
		vendingMachine() { //Number of each Item 
			BCoke = 5;
			Water = 8;
			BSprite = 6;
			StrPT = 10;
			BrSPT = 12;
		}

		//Functionality
		void GetMoney() {
			cout << "Insert your bills. Bills Accepted: $1, $5, $10, $20. (Just enter a total)" << endl;
			cin >> InputedMoney;
			cout << "You inserted $" << InputedMoney << endl;

		}


		void GetCoke() {
			if (BCoke > 0 and InputedMoney> costCoke) {
				cout << "Down drops a can of Coke" << endl;
				BCoke = BCoke -1;
				InputedMoney = InputedMoney - costCoke;
				NumCoke = NumCoke + 1;
			}
			else if (BCoke < 1){
				cout << "There isnt any Coke left." << endl;
			}
			else if (InputedMoney < costCoke) {
				cout << "You do not have enough money." << endl;
			}
			cout << "You have $" << InputedMoney << " left." << endl;
		}

		void GetWater() {
			if (Water > 0 and InputedMoney> costWater) {
				cout << "Down drops a bottle of water" << endl;
				Water = Water - 1;
				InputedMoney = InputedMoney - costWater;
				NumWater = NumWater + 1;
			}
			else if (Water < 1) {
				cout << "There isnt any water left." << endl;
			}
			else if (InputedMoney < costWater) {
				cout << "You do not have enough money." << endl;
			}
			cout << "You have $" << InputedMoney << " left." << endl;
		}

		void GetSprite() {
			if (BSprite > 0 and InputedMoney > costSprite) {
				cout << "Down drops a bottle of Sprite" << endl;
				BSprite = BSprite - 1;
				InputedMoney = InputedMoney - costSprite;
				NumSprite = NumSprite + 1;
			}
			else if (BSprite < 1) {
				cout << "There isnt any Sprite left." << endl;
			}
			else if (InputedMoney < costSprite) {
				cout << "You do not have enough money." << endl;
			}
			cout << "You have $" << InputedMoney << " left." << endl;
		}

		void GetStrPT() {
			if (StrPT > 0 and InputedMoney > costPopT) {
				cout << "Down drops a PopTart" << endl;
				StrPT = StrPT - 1;
				InputedMoney = InputedMoney - costPopT;
				NumStrPT = NumStrPT + 1;
			}
			else if (StrPT < 1) {
				cout << "There isnt any PopTarts left." << endl;
			}
			else if (InputedMoney < costPopT) {
				cout << "You do not have enough money." << endl;
			}
			cout << "You have $" << InputedMoney << " left." << endl;
		}		
		
		void GetBrSPT() {
			if (BrSPT > 0 and InputedMoney > costPopT) {
				cout << "Down drops a PopTart" << endl;
				BrSPT = BrSPT - 1;
				InputedMoney = InputedMoney - costPopT;
				NumBrSPT = NumBrSPT + 1;
			}
			else if (BrSPT < 1) {
				cout << "There isnt any PopTarts left." << endl;
			}
			else if (InputedMoney < costPopT) {
				cout << "You do not have enough money." << endl;
			}
			cout << "You have $" << InputedMoney << " left." << endl;
		}

		void TotalItems() {
			if (NumCoke > 0) {
				cout << "You got " << NumCoke << " bottles of Coke" << endl;
			}
			if (NumWater > 0) {
				cout << "You got " << NumWater << " bottles of Water" << endl;
			}
			if (NumSprite > 0) {
				cout << "You got " << NumSprite << " bottles of SPrite" << endl;
			}
			if (NumStrPT > 0) {
				cout << "You got " << NumStrPT << " Strawberry PopTarts" << endl;
			}
			if (NumBrSPT > 0) {
				cout << "You got " << NumBrSPT << " Maple and Brown Sugar PopTarts" << endl;
			}
			cout << "Dispensing $" << InputedMoney << " in change. Thank You! Come Again Soon!" << endl;
		}
};


int main() {
	int x, choice;
	float y;
	vendingMachine v;
	
	v.GetMoney();

	while (1) {
		cout << "Press 1 for Coke" << endl;
		cout << "Press 2 for water" << endl;
		cout << "press 3 for Sprite" << endl;
		cout << "Press 4 for Strawberry Poptarts" << endl;
		cout << "press 5 for Maple and Brown Sugar Poptarts" << endl;
		cout << "Press anything else to end" << endl;
		cin >> choice;

		switch (choice) {
			case 1: v.GetCoke();
				break;
			case 2: v.GetWater();
				break;
			case 3: v.GetSprite();
				break;
			case 4: v.GetStrPT();
				break;
			case 5: v.GetBrSPT();
				break;
			default : v.TotalItems();
				exit(1);
		}
 	}
	v.TotalItems();
}
