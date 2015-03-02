/*

Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include <iostream>

bool test_factors(int n) {
	//we only need to test 20 down to 11 
	//as 10 to 1 are factors of these
	for (int i = 20; i >= 11; i--) {
		if (n%i != 0) {
			return false;
		}
	}
	
	return true;
}

int main(int argc, char* argv[]) {
	
	int min = 19*17; //first possible for largest primes
	
	while (test_factors(min) == false) {
		min++;
	}
	
	std::cout << min << std::endl;
	
	return 0;
	
}

