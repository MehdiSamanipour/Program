#include <iostream>
using namespace std;

int main()
{
	cout << "input the matrix values in order  a11 a12 a21 a22" << endl;
	double a11, a12, a22, a21;
	cin >> a11 >> a12 >> a21 >> a22;
	// calculate determinant
	double det = a11 * a22 - a21 * a12;
	if (det == 0.0)
	{
		cout << "The system does not have a unique solution";
	}
	else
	{
		cout << "input the values c1 c2" << endl;
		double c1, c2;
		cin >> c1 >> c2;

		double x = (a22 * c1 - a12 * c2) / det;
		double y = (-a21 * c1 + a11 * c2) / det;
		cout << "The solution is x: " << x << " and y: " << y << endl;

		cout << "Check c1:" << a11 * x + a12 * y << endl;
		cout << "Check c2:" << a21 * x + a22 * y << endl;
	}

	return 0;
}
