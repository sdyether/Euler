/*

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

*/

#include <iostream>
#include "helper.cpp"


int main(int argc, char* argv[]) {
	
	for (int a = 1; a < 1000; a++) {
		for (int b = 1; b < 1000; b++) {
			for (int c = 1; c < 1000; c++) {
				if (Helper::is_pythagorean_triplet(a, b, c)) {
					if ((a + b + c) == 1000) {
						std::cout << a << " " << b << " " << c << std::endl;
						std::cout << a * b * c << std::endl;
						return 0;
					}
				}
			}
		}
	}

	return 0;
	
}

