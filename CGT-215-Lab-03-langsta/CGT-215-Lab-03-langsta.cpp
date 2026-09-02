#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
// Prints out the options for the user the number chosen the "choice
void getChoices(float& A, float& B) {
	cout << "\nPlease enter the first value:";
	cin >> A;
	// The rest of this function is an exercise to the reader
	cout << "\nPlease enter the second value:";
	cin >> B;
}
// Asks for the input of variables
void firstChoice(float A, float B) {
;
}
void secondChoice(float A, float B) {
;
}
void thirdChoice(float A, float B) {
;
}
void fourthChoice(float A, float B) {;
}
// Defines the Choices
int main() {
	int choice;
	float A;
	float B;
	float X;
// Defines the float variables and choice
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		firstChoice(A, B);
		X = A + B;
		cout << "\n";
		cout << A << " + " << B << " = " << X;
		
	}
	if (choice == 2) {
		secondChoice(A, B);
		X = A - B;
		cout << "\n";
		cout << A << " - " << B << " = " << X ;
		
	}
	if (choice == 3) {
		thirdChoice(A, B);
		X = A * B;
		cout << "\n";
		cout << A << " * " << B << " = " << X;
		
	}
	if (choice == 4) {
		fourthChoice(A, B);
		X = A / B;
		cout << "\n";
		cout << A << " / " << B << " = " << X;
		
	}
	// Each choice represents a different mathematical function and outputs the plugged in variables
	return 0;
}