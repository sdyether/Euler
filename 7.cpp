/*

Problem 7
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

#include <iostream>
#include "helper.cpp" 

int main(int argc, char* argv[]) {
	
	int count = 0;
	long int n = 1;
	
	while (count < 10001) {
		n += 1;
		if (Helper::is_prime(n)) {
			count += 1;
		}
		
	}
	
	std::cout << n << std::endl;
	
	return 0;
	
}

