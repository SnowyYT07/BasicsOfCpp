#include <iostream>
#include <ctime>

int main()
{
	srand(time(0));
	int randNum = rand() % 5 + 1;

	switch(randNum){
		case 1: std::cout << "You didnt got anything"; break;
		case 2: std::cout << "You find an item"; break;
		case 3: std::cout << "Search more"; break;
		case 4: std::cout << "Your dropped a card"; break;
		case 5: std::cout << "Nothing good here"; break;
	}



	return 0;
}
