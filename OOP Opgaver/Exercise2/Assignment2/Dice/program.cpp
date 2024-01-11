#include <iostream>
using namespace std;

int main() {
	int x, y;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	if (x > y) {
		cout << "The first number is greater than the second number." << endl;
	}
	else if (x < y) {
		cout << "The first number is less than the second number." << endl;
	}
	else {
		cout << "The two numbers are equal." << endl;
	}
	int sum = x + y;
	int product = x * y;
	cout << "The sum of the numbers is: " << sum << endl;
	cout << "The product of the numbers is: " << product << endl;
	return 0;
}
