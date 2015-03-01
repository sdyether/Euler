/*

my helper functions 

*/

#include <iostream> //debug
#include <math.h>

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
	
};