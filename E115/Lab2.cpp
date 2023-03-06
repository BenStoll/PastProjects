#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int x;
	int y;
	cout << "Please enter a number.";
	cin >> x;
	cout << "Please enter another number.";
	cin >> y;
	cout << "The sum is " << x + y << endl;
	cout << "The difference is " << x - y << endl;
	cout << "The product is " << x * y << endl;
	cout << "The quotient is " << x / y << endl;

	float d;
	float e;
	cout << "Please enter a decimal.";
	cin >> d;
	cout << "Please enter another decimal.";
	cin >> e;
	cout << "The sum is " << d + e << endl;
	cout << "The difference is " << d - e << endl;
	cout << "The product is " << d * e << endl;
	cout << "The quotient is " << d / e << endl;

	string firstnm;
	string lastnm;
	cout << "Please enter your first name ";
	cin >> firstnm;
	cout << "And now your last name ";
	cin >> lastnm;
	firstnm.append(" " + lastnm);
	cout << firstnm << endl;
}