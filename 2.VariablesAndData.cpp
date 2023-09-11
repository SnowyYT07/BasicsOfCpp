#include <iostream>

int main(){

	//Integer (Whole number ex: 1, 2, 3)
	int example1 = 1;
	int example2 = 5;
	int example3 = 6.5; // heres a example, if u put 6.5 or 9.3.... the computer only understand the 6 or 9

	//Double (Numbers with decimals)
	double example4 = 13.99;
	double example5 = 20.0;
	double example6 = 23.7;

	//Char (Just a character)
	char example7 = 'A';
	char example8 = 'C';
	char example9 = '$';

	//boolean (true or false)
	bool example10 = false;
	bool example11 = true;
	bool example12 = true;

	//string (object representing a sequence of text)
	std::string example13 = "Hello";
	std::string example14 = "World";
	std::string example15 = "Hello World!";

	std::cout << example1 << "< example 1 | example 2 >" << example2 << '\n'; // example how can you print two variables
	std::cout << "Value of example4:" << example4 << '\n' << "Value of example5:" << example5 << '\n'; //two double values for example
	std::cout << example7 << example13 << example14 << '\n'; // mixing Char + String Variables
	std::cout << '\n';

	// variables
	int x = 2;
	int y = 1;
	int sum = x + y; // picks the value of both variables 2 & 1 and makes 2 + 1 = 3
	std::cout << x << '\n'; // prints the value of x
	std::cout << y << '\n'; // prints the value of y
	std::cout << sum << '\n'; // prints x + y values
	std::cout << '\n' << "Read the source code to see the comments :)";

	return 0;
}
