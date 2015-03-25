/*

Problem 10
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include <iostream>
#include "helper.cpp"


int main(int argc, char* argv[]) {
	long long int max = 2000000;
	long long int sum = 0;
	for (long int i = 1; i < max; i++) {
		if (Helper::is_prime(i)) {
			sum += i;
		}
	}
	
	std::cout << sum << std::endl;

	return 0;
	
}

