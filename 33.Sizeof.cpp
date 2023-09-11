#include <iostream>

int main()
{
	// sizeof() = determines the size in bytes of a:
	// variable, data type, class, object, etc.

	double value = 23.213;

	//will print the same amount because here we are verifing the size of "double"
	std::cout << sizeof(value) << " bytes\n";
	std::cout << sizeof(double) << " bytes\n";

	//more examples
	int a = 1;
	double b = 2.2222;
	float c = 3.33;
	char d = 'd';
	std::string e = "SnowyWasHere lol";
	std::string f = "LOL";
	bool g = true;

   std::cout << sizeof(a) << " bytes (int size)\n";
   std::cout << sizeof(b) << " bytes (double size)\n";
   std::cout << sizeof(c) << " bytes (float size)\n";
   std::cout << sizeof(d) << " bytes (char size)\n";
   std::cout << sizeof(e) << " bytes (string 'SnowyWasHere lol' size)\n";
   std::cout << sizeof(f) << " bytes (string 'LOL' size)\n";
	std::cout << sizeof(g) << " bytes (bool size)\n";
	std::cout << "****Just to show that the lenght of string wont change nothing in the size****\n";

	//array in sizeof

	char example[] = {'A', 'B', 'C', 'D', 'E'}; // 1 char = 1 byte - 5 char = 5 bytes (so this array will be 5bytes)
	std::cout << sizeof(example) << " bytes (array with 5 char)\n";
	int example2[] = {1, 2, 3};
	std::cout << sizeof(example2) << " bytes (array with 3 int)\n"; // output will be 12 bytes

	// Other example

	int example3[] = {1, 2, 3, 4, 5}; // output will be 20 bytes
	std::cout << sizeof(example3)/sizeof(int) << " Elements in the array\n";
	/*
		output will be five
		because an int is 4 bytes
		5(number of data in array) * 4 = 20 and we dont want this output because he is the number of bytes in the array
		20/sizeof(int) = 20/4 = 5 elements in the array
	*/
	return 0;
}
