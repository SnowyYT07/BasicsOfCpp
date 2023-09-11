#include <iostream>

int main()
{
	// cout << (insertion)
	// cin >> (extraction)


	//Basic input and output
/*
	std::string name;

	std::cout << "Whats your name?: ";
	std::cin >> name;

	std:: cout << "Hi! " << name;
*/

	//Inputing a string with spaces

	std::string name;

	std::cout << "Whats your name?:";
	std::getline(std::cin >> std::ws, name); // std::ws will clear ws(white spaces) and new lines before input

	std::cout << "Hi! " << name;

	return 0;

}
