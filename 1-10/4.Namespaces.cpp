#include <iostream>

	// Namespace is a solution for preventing name conflicts in large projects
	// Each entity needs a unique name.
	// A namespace allows for identically named entities as long
	// namespaces are differents.

	namespace first{
		int x = 1;
	}
	namespace second{
		int x = 2;
	}

	int main(){
		using namespace first;
		//int x = 3; --> this is commented because "using namespace first"; he will use the x of namespace first
		std::cout << x; // as running namespace first output will be value of x in first namespace

		/*
			using namespace second;
			//int x = 3;
			std::cout << first::x; // this will output x from first as i called him
		*/
		/*
			//using namespace second;
			int x = 3;
			std::cout << x; //output will be 3
		*/
		// using namespace std; // This can bring entity conflict because of names
      using std::cout; // using this we dont need more to use std::cout and just use cout
      using std::string; // using this we dont need more to use std::string just use string
      // example
      string name = "Snowy";
      cout << "Hi " << name;

        return 0;
}
