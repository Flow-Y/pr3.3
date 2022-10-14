#include <iostream>
#include <cmath>

int main()
{
	double x, y;
	std::cout << "x = "; std::cin >> x;
	if (x < -4)
		y = -2;
	else if (x >= -4 && x < 0)
		y = (1 / 4 * x);
	else if (x >= 0 && x <= 2)
		y = x * x;
	else if (x > 2)
		y = (-x * (1 / 2) + 5);
	std::cout << "y = " << y;
	return 0;
}