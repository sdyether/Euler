/*

Problem 6
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include <iostream>
#include <cmath> 

int main(int argc, char* argv[]) {
	
	long int sum_of_squares = 0;
	long int sum = 0;
	
	for (int i = 1; i <= 100; i++) {
		sum_of_squares += (i*i);
		sum += i;
	}
	
	long int diff = std::abs(sum_of_squares - (sum*sum));
	
	std::cout << diff << std::endl;
	
	return 0;
	
}

