#include <iostream>

int main()
{
	// do while loop, do some block of code first
	// THEN repeat it if the condition is true

	int number;

	do{
		std::cout << "Enter a positive num: ";
		std::cin >> number;
	}while(number < 0);

	std::cout << "number is positive !!!";
	return 0;
}
