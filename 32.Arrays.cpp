#include <iostream>

int main()
{
	// array = a data structure that can hold multiple values
	// values are accesses by an index number

	std::string items[] = {"G18", "AK47", "M4", "Deagle"}; // how to declare an array

	std::cout << items[0] << '\n'; //
	std::cout << items[1] << '\n'; // how to access the data
	std::cout << items[2] << '\n'; // in the array
	std::cout << items[3] << '\n'; //

	std::string prices[4]; // you can too put data after declaring an array (you need to put the number of data Ex: prices[x] )

	prices[0] = "200";
   prices[1] = "1510";
   prices[2] = "1200";
   prices[3] = "700";

   std::cout << prices[0] << "$\n";
   std::cout << prices[1] << "$\n";
   std::cout << prices[2] << "$\n";
   std::cout << prices[3] << "$\n";


	std::cout << "1. " << items[0] << " - " << prices[0] << "$\n";
   std::cout << "2. " << items[1] << " - " << prices[1] << "$\n";
   std::cout << "3. " << items[2] << " - " << prices[2] << "$\n";
   std::cout << "4. " << items[3] << " - " << prices[3] << "$\n";

	return 0;
}
