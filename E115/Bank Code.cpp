#include <iostream>
using namespace std;

class BankyBank {
	//Attributes
	private:
		float currentBalance;

	//construction
		//deposit, withdraw and check balance
	public:
		BankyBank() {
			currentBalance = 1000;
		}

	//functionality
	void deposit() {
		float dep;
		bool CashCheck;
		int done = 0;
		while (done != 1) {
			cout << "Is this a cash or a check? Cash deposits have to be less than $100. Checks do not have a limit. Press 1 for cash and 0 for check." << endl;
			cin >> CashCheck;
			if (CashCheck == 1) {
				cout << "Please enter your bills. Remember that the amount has to be less than $100." << endl;
				cin >> dep;
				if (dep < 100 and dep > 0) {
					currentBalance = currentBalance + dep;
					cout << "Your balance is now $" << currentBalance << endl;
					done = 1;
				}
				else {
					cout << "This payment is either over $100 or less than $0. Please try again." << endl;
				}
			}
			else if (CashCheck == 0) {
				cout << "Please enter the amount you want to deposit." << endl;
				cin >> dep;
				if (dep > 0) {
					currentBalance = currentBalance + dep;
					cout << "Your balance is now $" << currentBalance << endl;
					done = 1;
				}
				else {
					cout << "Please try again." << endl;
				}
			}
		}
	}
	void withdraw() {
		int withdrawal;
		int done = 0;
		while (done != 1) {
			cout << "How much would you like to withdraw? We can only dispense $20 bills so please keep it to multiples of 20. Also there is a $200 limit on withdrawals." << endl;
			cin >> withdrawal;
			if ((withdrawal <= 200) and (withdrawal % 20 == 0) and (withdrawal > 0)) {
				currentBalance = currentBalance - withdrawal;
				cout << "Dispensing $" << withdrawal << endl;
				cout << "Your balance is now $" << currentBalance << endl;
				done = 1;
			}
			else {
				cout << "This is not in multiples of 20. Please input another amount that follows our guidlines. Thank you!" << endl;
			}
		}
	}
	void checkBalance() {
		cout << "Your balance is $" << currentBalance << endl;
	}
};


int main() {
	BankyBank mine;

	int choice;
	while (1) {
		cout << "What would you like to do? Press 1 for depositing money, 2 for withdrawing money, and 3 for checking your balance. Press anything else to end." << endl;
		cin >> choice;
		switch (choice) {
		case (1): mine.deposit();
			break;
		case (2): mine.withdraw();
			break;
		case (3): mine.checkBalance();
			break;
		default: cout << "Thank you so much! You have a nice day!" << endl;
			exit(1);
		}

	}




}