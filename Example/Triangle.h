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
	Triangle(double side, double height);
	double trianglesize();


};
