#include <iostream>
using namespace std;

int main()
{
	cout << "input current in milliAmperes and resistance in Ohm as: current resistance;" << endl;

	double current; // unit mA
	double resistance; // unit ohm

	cin >> current >> resistance;

	double potential = current / 1000 * resistance;
	double power = potential * current / 1000;

	cout << "The potential in Volts is " << potential << endl;
	cout << "The power dissipated in Watts is " << power << endl;
	return 0;
}
