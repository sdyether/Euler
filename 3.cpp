/*

Problem 3
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

#include <iostream>
#include "helper.cpp"

int main(int argc, char* argv[]) {
	long long int num = 600851475143;
	long long int factor = 2;
	
	while (factor < num) {
	
		if (num%factor == 0) {	//if valid factor
			//test for prime
			if (Helper::is_prime(num/factor)) {
				break;
			}
		}
		factor++;
	}
	
	std::cout << num/factor << std::endl << factor << std::endl;
	return 0;
	
}