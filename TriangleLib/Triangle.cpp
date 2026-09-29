#include "Triangle.h"
#include <stdexcept>

void Triangle::setside(double a) {
	if (a <= 0) {
		throw std::invalid_argument("invalid arg");
	}
	side = a;
}

void Triangle::setheight(double h) {
	if (h <= 0) {
		throw std::invalid_argument("invalid arg");
	}
	height = h;
}

double Triangle::getside() {
	return side;
}

double Triangle::getheight() {
	return height;
}

Triangle::Triangle(double s, double h) {
	if (s <= 0 || h <= 0) {
		throw std::invalid_argument("invalid arg");
	}
	side = s;
	height = h;
}

double Triangle::trianglesize() {
	return 0.5 * side * height;
}