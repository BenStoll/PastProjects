#include <iostream>
using namespace std;

void printGreetings() {
	cout << "I hope you're having a good day. I know it is very stressful out there." << endl;
}

float divideNumbers(float x, float y) {
	if (y != 0) {
		float Quo = x / y;
		cout << Quo << endl;
		return Quo;
	}
	else {
		cout << "You cannot divide by 0." << endl;
		return -1;
	}
}

void fibonacci(int N) {
	int times = 0;
	int fib1 = 0;
	int fib2 = 1;
	int temp = 0;
	while (times < N) {
		times += 1;
		cout << fib1 << endl;
		fib1 = fib1 + fib2;
		temp = fib1;
		fib1 = fib2;
		fib2 = temp;
	}
}

int main() {
	printGreetings();
	
	cout << "Please enter an 'x' and a 'y' value" << endl;
	float x, y;
	cin >> x >> y;
	divideNumbers(x, y);

	cout << "Please enter a number corresponding to the length of the Fibonacci Sequence you want to see." << endl;
	int N;
	cin >> N;
	cout << endl;
	fibonacci(N);

}