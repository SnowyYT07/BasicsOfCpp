#include <iostream>

int main()
{

	int value[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
/*		Instead of ...
	std::cout << value[0] << '\n';
   std::cout << value[1] << '\n';
   std::cout << value[2] << '\n';
   std::cout << value[3] << '\n';
	...
*/ // We can use
/*

for(int i = 0; i < 10; i++){
	std::cout << value[i] << '\n';
}

*/ // But, exists a better way of doing that


	for(int i = 0; i < sizeof(value)/sizeof(int); i++)
		{
			std::cout << value[i] << '\n';
		}

	double value2[] = {0.00, 1.11, 2.22, 3.33, 4.44};

   for(int o = 0; o < sizeof(value2)/sizeof(double); o++)
      {
         std::cout << value2[o] << '\n';
      }
// in the sizeof(x)/sizeof(y) y needs to be the datatype of array

	return 0;
}
