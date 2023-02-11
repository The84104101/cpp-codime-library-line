// Codime Line
// Example

#include <iostream>

#include "cl.h"

int main(void) {
	line l;
	std::string s;

	// operator = (char*) || (const char*) || (std::string)
	l = "test1";

	s = "test2";

	line ls;

	// operator = (char*) || (const char*) || (std::string)
	ls = s;

	std::cout << l.get() << '\n';
	std::cout << ls.get() << '\n';

	// operator == (char*) || (const char*) || (std::string)
	if (ls == s) {
		std::cout << "True\n";
	}
	else {
		std::cout << "False\n";
	}

	return 0;
}