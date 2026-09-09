#include "Triangle.h"
#include <stdexcept>

void Triangle::setside(double a) {
	if (a <= 0) {
		throw std::exception("invalid arg");
	}
	side = a;
}

void Triangle::setheight(double h) {
	if (h <= 0) {
		throw std::exception("invalid arg");
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
	side = s;
	height = h;
}

double Triangle::trianglesize() {
	return 0.5 * side * height;
}

