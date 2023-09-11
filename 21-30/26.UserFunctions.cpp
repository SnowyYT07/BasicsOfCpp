#include <iostream>
#include <ctime>
// function = a block of reusable code

void Example()
{
	srand(time(NULL));
	int randNum = rand() % 5 + 1;

	std::cout << "The number generated was: " << randNum << '\n' ;
}

void Example2(std::string name)
{
	std::cout << "Hello " << name << '\n';

}

void Example3(int hp, int money)
{
	std::cout << "You have: " << hp << "hp \n";
	std::cout << "You have: " << money << "$\n";
}


int main()
{
	int example1, example2;
	std::string name = "Snowy";
	Example();
	Example2(name);
	std::cout << "Enter a HP value: ";
	std::cin >> example1;
	std::cout << "Enter a Money value: ";
	std::cin >> example2;

	Example3(example1, example2);
	return 0;
}
