#pragma once
#include <stdexcept>

class Triangle {
private:
	double side;
	double height;

public:
	void setside(double a);
	void setheight(double h);
	double getside();
	double getheight();
	Triangle(double s = 1.0, double h = 0.75);
	double trianglesize();


};