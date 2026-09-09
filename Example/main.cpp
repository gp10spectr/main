#include <iostream>
#include "Triangle.h"

//try?
int main() {
	std::cout << "calculate size of triangle" << std::endl;
	std::cout << "input side and height lenght of your triangle" << std::endl;
	double a, h;
	std::cin >> a >> h;
	Triangle triangle(a, h);
	std::cout << "size of your triangle equals " << triangle.trianglesize() << std::endl;
	return 0;

}