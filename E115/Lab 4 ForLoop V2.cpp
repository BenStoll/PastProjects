#include <iostream>
using namespace std;

int main()
{
	int min = INT_MAX;
	int max = INT_MIN;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		int yi;
		cout << "Please enter a number, you have " << 10 - i << " tries." << endl;
		cin >> yi;
		cout << i << endl;
		if (yi < min) {
			min = yi;
		}
		if (yi > max) {
			max = yi;
		}
		sum += yi;
	}
	cout << "The max is " << max << " and the min is " << min << "." << endl;
	cout << "The sum of the numbers is " << sum << "." << endl;
}