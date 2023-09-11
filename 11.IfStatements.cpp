#include <iostream>

int main()
{
	// If statements, As the name says, if something is true, do it
	// if not, dont do it

	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;

	if(age >= 100){
		std::cout << "You are lucky of still being alive wtf";
	}
	else if(age >= 18){
		std::cout << "You can join the app";
	}
	else if(age < 0){
		std::cout << "Well i think that value is impossible but ok XD";
	}
	else{
		std::cout << "You cant join the app (You need 18)";
	}

	return 0;
}
