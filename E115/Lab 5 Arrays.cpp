#include <iostream>
using namespace std;

int main() {
	int array[10];
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 0; i < 10; i++) {
		cout << "Please enter a number for the array." << endl;
		cin >> array[i];
		int temp = array[i];
		sum += temp;

		if (temp < min) {
			min = temp;
		}
		if (temp > max) {
			max = temp;
		}

	}
	for (int i = 0; i < 10; i++) {
		cout << array[i] << ", " ;
	}
	cout << endl;
	cout << "The sum is " << sum <<". The max is "<< max << " and the min is " << min<< endl;
}