#include <iostream>

int main(){
	// The const keyword specifies that the value is constant
	// that means, the compiler prevent anything from modifying it
	// (Read-Only)
	
	const double PI = 3.14159;
	//PI = 420.69; --> this value cant be uncomment or the compiller dont permit PI to be re-written
	double radius = 20;
	double circumference = 2 * PI * radius;
	std::cout << circumference << "cm";


/*

   double PI = 3.14159;
  	PI = 20;
	double radius = 20;
   double circumference = 2 * PI * radius;
   std::cout << circumference << "cm";
*/
// In that case PI would be overwrriten
	return 0;
}
