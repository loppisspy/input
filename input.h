#include <iostream>
#include <string>

std::string input(std::string str) {
	std::string inp;
	std::cout << str;
	std::getline(std::cin, inp);

	return inp;
};