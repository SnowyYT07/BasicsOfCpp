#include <iostream>
int main()
{
		//pseudo-random generation (NOT truly random as computers cant really type random data (but close enough) )

	srand(time(NULL));
	int num = (rand() % 20) +1; //this (rand() % 20) +1 will generate numbers 0-19 so +1 will make 1-20
	std::cout << num;



	return 0;
}
