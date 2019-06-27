#include <iostream>
#include<cmath>
int main()
{
	double a; int b;
	while (std::cin >> a >> b) {
		if (a > 0 && b > 0 && a < 99.999 && b <= 25) {
			std::cout << pow(a, b) << std::endl;
		}
		else return 0;
	}
	return 0;
}
