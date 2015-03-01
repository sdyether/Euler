/*

Problem 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include <iostream>
#include "helper.cpp"

int main(int argc, char* argv[]) {

	long int max = 0;
	//int ff1, ff2;
	
	for (int f1 = 100; f1 < 1000; f1++) {
	
		for (int f2 = 100; f2 < 1000; f2++) {
		
			if (Helper::is_palindrome(f1*f2)) {
				if ((f1*f2) > max) {
					max = f1*f2;
					//ff1 = f1;
					//ff2 = f2;
				}
			}
		}
	}
	std::cout << max << std::endl;
	//std::cout << ff1 << " " << ff2 << std::endl;
	return 0;
	
}