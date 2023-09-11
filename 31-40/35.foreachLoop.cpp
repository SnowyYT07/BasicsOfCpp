#include <iostream>

int main()
{
	//foreach loop = loop that eases the traversal over an
	//					  iterable data set

	int a[] = {1, 2, 3, 4};
	double c[] = {1.11, 2.22, 3.33, 4.44};
	char e[] = {'a','b','c','d'};


	for(int b : a)
	{
		std::cout << b << '\n';
	}
   for(double d : c)
   {
      std::cout << d << '\n';
   }
   for(char f : e)
   {
      std::cout << f << '\n';
   }

	// for better comprehension

	int values[] = {10,20,30,40};
   for(int value : values)
   {
      std::cout << value << '\n';
   }


	return 0;
}
