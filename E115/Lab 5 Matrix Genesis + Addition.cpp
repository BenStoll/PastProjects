#include <iostream>
using namespace std;

int main(){
	// matrix 1
	int mat1[2][2];
	cout << "This is for matrix 1." << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Give me a value for " << i << " and a value for " << j << endl;
			cin >> mat1[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		cout << "|";
		for (int j = 0; j < 2; j++) {
			cout << mat1[i][j] << "  ";
		}
		cout << "|" << endl;
	}

	//matrix 2
	int mat2[2][2];
	cout << "This is for matrix 2." << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "Give me a value for " << i << " and a value for " << j << endl;
			cin >> mat2[i][j];
		}
	}

	for (int i = 0; i < 2; i++) {
		cout << "|";
		for (int j = 0; j < 2; j++) {
			cout << mat2[i][j] << "  ";
		}
		cout << "|" << endl;
	}
	
	// This adds the two matrices together and prints them out.
	int mat3[2][2];
	cout << "This adds the two matrices together" << endl << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			int temp = mat2[i][j]+mat1[i][j];
			mat3[i][j] = temp;
		}
	}

	for (int i = 0; i < 2; i++) {
		cout << "|";
		for (int j = 0; j < 2; j++) {
			cout << mat3[i][j] << "  ";
		}
		cout << "|" << endl;
	}

}