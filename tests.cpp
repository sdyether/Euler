#include "helper.cpp"
#include <iostream>

void t1() {
	std::cout << Helper::get_digit_at(4132, 1) << std::endl;
	std::cout << Helper::get_digit_at(4132, 2) << std::endl;
	std::cout << Helper::get_digit_at(4132, 3) << std::endl;
	std::cout << Helper::get_digit_at(1234551234, 4) << std::endl;
}

void t2() {
	for (int i = 10000; i < 1000000; i++) {
		if (Helper::is_palindrome(i)) {
			std::cout << i << std::endl;
		}

	}
}

void t3() {
	for (int i = 0; i < 300; i++) {
		if (Helper::is_prime(i)) {
			std::cout << i << std::endl;
		}
	}
}

void t4() {
	std::cout << Helper::is_pythagorean_triplet(3, 4, 5) << std::endl;
	std::cout << Helper::is_pythagorean_triplet(1, 1, 1) << std::endl;
	std::cout << Helper::is_pythagorean_triplet(5, 12, 13) << std::endl;
}

int main(int argc, char* argv[]) {
	
	t4();
	
	return 0;
}