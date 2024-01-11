#pragma once
#include <vector>

using namespace std;

class DataStorage
{
public:
	DataStorage();
	DataStorage(int size, double initvalue);

	DataStorage & insert(double element);

	int numberOfElements() const;

	double meanValue() const;

	int numberOfElementsBetween(double low, double high) const;
	int eraseElementsBetween(double low, double high);

	void print() const;
private:
	vector<double> data_;
};