#include <iostream>
// Local variables is declared in the function or block
// Global variables is declared outside of all functions

int example1 = 0;

int add1(){int a = 1; return example1 + a;}
int add2(){int a = 2; return example1 + a;}
int add3(){int a = 3; return example1 + a;}

int main()
{
	int ex1 = add1();
	int ex2 = add2();
	int ex3 = add3();

	std::cout << ex1 << '\n';
   std::cout << ex2 << '\n';
   std::cout << ex3 << '\n';

	return 0;
}
