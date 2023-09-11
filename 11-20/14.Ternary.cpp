#include <iostream>

int main()
{
		//ternary operator ?: is a replacement to an if/else statement
		// condition ? expression1: expression2;

	//int money = 100;
	//money >=70 ? std::cout << "You can buy it!" : std::cout << "You dont have money!";

	//int num = 11;
	//number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

	/* We can do it in other way too */
	int hp = 20;
	std::cout << (hp >= 35 ? "You have low hp\n" : "You have a good hp\n");

	/*Or with true and false statements*/
	bool hungry = false;
	std::cout << (hungry ? "You are hungry" : "You dont need to eat");

	return 0;
}
