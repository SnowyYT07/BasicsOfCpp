#include <iostream>

int main()
{
	// arithmetic operators return the result of
	// a specific arithmetic operation (+ - * /)

	int customers = 21;

	//customers = customers + 4; // insted of doing this we can do that:
	//customers+=2; // same logic as the above
	//customers++; // this just add 1

	//As you can guess minus works in the same way
	//customers = customers - 1;
	//customers-=2;
	//customers--;

	//customers = customers * 2;
	//customers*=3;

	//customers = customers / 3;
	//customers/=2;

	//int remainder = customers % 3; // here we are dividing customers in groups of 3 
	// std::cout << remainder; // and this will print the remainder of customer 21/3 is = 7 so we can do 3 groups of 7 without having a remainder so 0 is the output

	// parenthesis also can be used per example
	//int randomNumbers = 6 - 1 + 5 + 2 * 3 / 2; // (output will be 13)
	int randomNumbers = 6 - 1 + (5 + 2) * 3 / 2; // (output will be 15)
	std::cout << randomNumbers;

	return 0;
}
