#include <iostream>

int main()
{
	std::string name;

	while(name.empty() || name.length() > 12){
		std::cout << "Enter Your name: ";
		std::getline(std::cin, name);
	}

	name.insert(0, "@");
	std::cout << "Hello " << name;

	return 0;
}
