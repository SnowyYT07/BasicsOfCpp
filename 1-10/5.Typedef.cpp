#include <iostream>
#include <vector> // we need this for this one

typedef std::string text_t; //insted of writting std::string now we can type text_t
typedef int number_t; // insted of int we can do number_t

// using can too be used to this. Example:
using bignumber_t = double;
// "using" probably will work better with templates and etc. And his use is more popular.

int main(){
	//typedef is a reserved keyword used to create alias
	//for another data types. New indentifier for an existing
	//type, helps with readability and reduces typos.

	text_t name = "Snowy";
	number_t day = 31;
	bignumber_t money = 20.25;

	std::cout << "This user: " << name << " has " << money << "$" << " at day " << day << '\n';

	return 0;
}
