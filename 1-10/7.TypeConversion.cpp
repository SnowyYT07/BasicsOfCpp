#include <iostream>

int main(){
	// type conversion, converts a value of one data type to another
	// Implicit = automatic
	// Explicit = Precede value with new data type (int)

	double x = (int) 3.14; // Implicit
	std::cout << x << '\n'; // x output will be 3


	std::cout << (char) 100; // explicit //will output the char with value 100

	// How can this be useful

	/*


	int correct = 6;
	int questions = 10;
	double score = correct/questions * 100;
	std::cout << score << "%";
			//This will output 0%, so how can we fix it?
			//Fixed
	int correct = 6;
	int questions = 10;
	double score = correct/(double)questions * 100; // this works because the correct/questions will give 0.6 but dividing ints can never give numberes like 0.2 0.4 0.1 1.23 etc

	*/
	return 0;
}
