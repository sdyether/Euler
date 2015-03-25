/*

my helper functions 

*/

#include <iostream> //debug
#include <math.h>
#include <vector>
#include <sstream>
#include <string>

class Helper {

	public:
	
		static bool is_prime(int n) {

			if (n < 2) {
				return false;
			}
			
			//check all factors
			int fact = 2;
			while (fact <= (n/2)) {
				if (n%fact == 0) {
					return false;
				}
				fact++;
			}
			
			return true;
		}
		
		/* works for n >= 0 */
		static bool is_palindrome(int n) {
			//work out length
			int len = 0;
			while (n >= (pow(10, len))) {
				len++;
			}
			
			int checked = 0;
			int pos1, pos2;
			while (checked < (len/2)) { //division truncation here
				pos1 = get_digit_at(n, (len - checked));
				pos2 = get_digit_at(n, (checked + 1));
				if (pos1 != pos2) {
					return false;
				}
				checked++;
			}
			
			return true;

		}
		
		/* 
		position uses 1-indexing 
		eg get_digit_at(132489, 2); returns 8
		*/
		static int get_digit_at(int n, int position) {
			//assume safe bounds for euler
			while (position > 1) {
				n = n/10;
				position--;
			}
			return n%10;
		}
		
		/* a^2 + b^2 = c^2 */
		static bool is_pythagorean_triplet(double a, double b, double c) {

			a = pow(a, 2);
			b = pow(b, 2);
			c = pow(c, 2);

			if (a + b - c == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		
		/*
		functions for tokenizing a string into a vector of strings
		*/
		static std::vector<std::string> split(const std::string &s, char delim) {
			std::vector<std::string> elems;
			split(s, delim, elems);
			return elems;
		}
		
		/* vector printing with auto 
		needs c++11 support enabled
		*/
		template <typename T>
		static void print_vec(std::vector<T> vec) {
			for (auto x : vec)
				std::cout << x << ' ';
			std::cout << std::endl;
		}
		
	private:
	
		/* called by 
		static std::vector<std::string> split(const std::string &s, char delim) 
		*/
		static  std::vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
			std::stringstream ss(s);
			std::string item;
			while (std::getline(ss, item, delim)) {
				elems.push_back(item);
			}
			return elems;
		}
	
};