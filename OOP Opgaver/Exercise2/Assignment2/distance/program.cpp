#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double x1, x2, x3, y1, y2, y3;
	cout << "Input values x1 x2 x3" << endl;
	cin >> x1 >> x2 >> x3;
	cout << "Input values y1 y2 y3" << endl;
	cin >> y1 >> y2 >> y3;


	double distance = sqrt(pow(y1 - x1, 2) + pow(y2 - x2, 2) + pow(y3 - x3, 2));
	cout << " the distance is: " << distance << endl;
}
