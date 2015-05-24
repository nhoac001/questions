#include <string>
static std::string fizzbuzz()
{
	string neat;
	for(int i = 1; i < 101; i++) {
		if(i % 15 == 0) {
			neat += "FizzBuzz ";
		}
		else if(i % 5 == 0) {
			neat += "Buzz ";
		}
		else if(i % 3 == 0) {
			neat += "Fizz ";
		}
		else {
			neat += to_string(i) + ' ';
		}
	}
	return neat;
}