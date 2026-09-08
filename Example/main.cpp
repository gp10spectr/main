#include <iostream>

int main() {
	std::cout << "Enter triangle side and height" << std::endl;
	double a, h;
	std::cin >> a >> h;
	double s = 0.5 * a * h;
	std::cout << "s = " << s << std::endl;
	return 0;
}