#include <string>
#include <iostream>

std::string input(std::string string) {
	std::string i;
	std::cout << string;
	std::getline(std::cin, i);

	return i;
}

std::wstring winput(std::wstring wstring) {
	std::wstring i;
	std::wcout << wstring;
	std::getline(std::wcin, i);

	return i;
}