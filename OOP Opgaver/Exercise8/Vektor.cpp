#include "Vektor.h"
void Vektor::rotate(double angle) {
	const double x_n = cos(angle) * x_ - sin(angle) * y_;
	const double y_n = sin(angle) * x_ + cos(angle) * y_;
	x_ = x_n;
	y_ = y_n;
}

double Vektor::length() const {
	return sqrt(x_ * x_ + y_ * y_);
}

std::string Vektor::toString() const {
	return "X: " + std::to_string(x_) + " Y: " + std::to_string(y_);
}


