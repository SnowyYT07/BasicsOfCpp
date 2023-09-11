#include <iostream>

int main()
{
	// && check if two or more conditions are true
	// || check if one of two or more conditions are true
	// ! reverses the logical state of its operand

	int hp;
	int temp;
	bool rain = true;

	std::cout << "Whats the temp outside?: ";
	std::cin >> temp;
	std::cout << "Whats your hp?: ";
	std::cin >> hp;

	if(temp >= 0 && temp <= 30){
		std::cout << "The temperature seems fine!\n";
	}
	else{
		std::cout << "The temperature is bad!\n";
	}

	if(hp > 100 || hp < 0){
		std::cout << "Something is wrong with your hp\n";
	}
	else{
		std::cout << "Everything is fine with the hp\n";
	}
	if(!rain){
		std::cout << "Damn, its raining";
	}
	else{
		std::cout << "Nice, its not raining";
	}


	return 0;
}
