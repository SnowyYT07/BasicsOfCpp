#include <iostream>

int main()
{
		// break = break out of a loop
		// continue = skip current iteration

	for(int i = 1; i <= 10; i++){
		if(i == 5){
			continue;
		}
		std::cout << i << '\n';
	}
	for(int o = 10; o >= 1; o--){
		if(o == 5){
			std::cout << "Thats the diference between break and continue";
			break;
		}
		std::cout << o << '\n';
	}

	return 0;
}
