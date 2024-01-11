#include "Vektor1.h"
Vektor1::Vektor1(double x, double y) : x_(x), y_(y)
{
}

void Vektor1::rotate(double angle)
{
	const double x_n = cos(angle) * x_ - sin(angle) * y_;
	const double y_n = sin(angle) * x_ + cos(angle) * y_;
	x_ = x_n;
	y_ = y_n;
}

double Vektor1::length() const
{
	return sqrt(x_ * x_ + y_ * y_);
}

std::string Vektor1::toString() const
{
	return "X: " + std::to_string(x_) + " Y: " + std::to_string(y_);
}

double Vektor1::angle(Vektor1 v) const
{
	return acos(innerProduct(v) / (v.length() * length()));
}

double Vektor1::innerProduct(Vektor1 v) const
{
	return v.x_ * x_ + v.y_ * y_;
}
