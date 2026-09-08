#include "Triangle.h"

void Triangle::setside(double a) {
	if (a <= 0) {
		throw std::invalid_argument("Wrong side size");
	}
	side = a;
}

void Triangle::setheight(double h) {
	if (h <= 0) {
		throw std::invalid_argument("Wrong height size");
	}
	height = h;
}

double Triangle::getside() {
	return side;
}

double Triangle::getheight() {
	return height;
}

Triangle::Triangle(double s = 1.0, double h = 0.75) {
	if (s <= 0 || h <= 0) {
		throw std::invalid_argument("Wrong size");
	}
	side = s;
	height = h;
}

double Triangle::trianglesize() {
	return 0.5 * side * height;
}

