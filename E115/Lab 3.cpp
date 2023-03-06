#include <iostream>
using namespace std;

int main()
{


	float HWA, HWB, HWC, HWD, HWE, HWF, HW, midTermOne, midTermtwo, midTerm, test, finalScore;

	cout << "What did you get on homework one?" << endl;
	cin >> HWA;
	cout << "What did you get on homework two?" << endl;
	cin >> HWB;
	cout << "What did you get on homework three?" << endl;
	cin >> HWC;
	cout << "What did you get on homework four?" << endl;
	cin >> HWD;
	cout << "What did you get on homework five?" << endl;
	cin >> HWE;
	cout << "What did you get on homework six?" << endl;
	cin >> HWF;
	HW = ((HWA + HWB + HWC + HWD + HWE + HWF) / 6);

	cout << "And what did you get on the first midterm?" << endl;
	cin >> midTermOne;
	cout << "And what did you get on the second midterm?" << endl;
	cin >> midTermtwo;
	midTerm = (midTermOne + midTermtwo) / 2;

	cout << "And what did you get on the test?" << endl;
	cin >> test;

	finalScore = (.2 * test) + (.4 * HW) + (.4 * midTerm);
	cout << "Your final grade is " << finalScore << endl;

	if (finalScore >= 91){
		cout << "You get an A!" << endl;
	}
	else if(finalScore < 90 && finalScore >= 81) {
		cout << "You get a B.";
	}
	else if (finalScore < 80 && finalScore >= 71) {
		cout << "You get a C." << endl;
	}
	else {
		cout << "You get a D, sorry." << endl;
	}
}
