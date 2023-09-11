#include <iostream>

int main(){

	std::string name;

	std::cout << "Enter your name(12 char max.): ";
	std::getline(std::cin,name);

	if(name.length() > 12){
		std::cout << "Your name can't be over 12 char";
	}

	else if(name.empty()){
		std::cout << "You didnt enter your name";
	}

	else{
//		name.append("@SnowyHostings.example"); /*Example of inserting text into variable*/
//		std::cout << "Hello your email is: " << name;
		name.insert(0, "@");
		std::cout << "Your user is: " << name;
	}

	// name.clear(); This clears the name variable
	// name.at(0); pick the first char of the input
	// name.find('b') searchs for b in name variable
	// name.erase(0, 3); this delete the first 3 chars
}
